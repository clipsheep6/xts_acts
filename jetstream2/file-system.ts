/**
 ** Copyright (C) 2018 Apple Inc. All rights reserved.
 **
 **Redistribution and use in source and binary forms, with or without
 ** modification, are permitted provided that the following conditions
 ** are met:
 ** 1. Redistributions of source code must retain the above copyright
 **    notice, this list of conditions and the following disclaimer.
 ** 2. Redistributions in binary form must reproduce the above copyright
 **    notice, this list of conditions and the following disclaimer in the
 **    documentation and/or other materials provided with the distribution.
 **
 ** THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 ** AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 ** THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 ** PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 ** BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 ** CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 ** SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 ** INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 ** CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 ** ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 ** THE POSSIBILITY OF SUCH DAMAGE.
 **/
 const SEEDINIT = 49734321;
 const TIME_CONVERSION = 1000;
 const HEX_FFFFFFFF = 0xffffffff;
 const HEX_FFFFFFF = 0xfffffff;
 const HEX_7ED55D16 = 0x7ed55d16;
 const HEX_C761C23C = 0xc761c23c;
 const HEX_165667B1 = 0x165667b1;
 const HEX_D3A2646C = 0xd3a2646c;
 const HEX_FD7046C5 = 0xfd7046c5;
 const HEX_B55A4f09 = 0xb55a4f09;
 const HEX_10000000 = 0x10000000;
 const INT_12 = 12;
 const INT_19 = 19;
 const INT_5 = 5;
 const INT_9 = 9;
 const INT_3 = 3;
 const INT_16 = 16;
 const RANDOM_MULTIPLY = 128;
 const RANDOM_ADD = 2056;
 const RESULT_MULTIPLY = 255;
 const ITEM_INDEX = 2;
 const DIRS_ALL = 250;
 const DIRS_SON = 8;
 const FILES_COUNT = 5;
 const DIR_RANDOM = 0.3;
 const FILE_RANDOM = 0.6;
 const FILE_DELETE_COUNT = 3;
 const TEST_TIMES = 40;
 
 let seedNum: number = SEEDINIT;
 function resetSeed() {
   seedNum = SEEDINIT;
 }
 const random = (() => {
   return () => {
     // Robert Jenkins' 32 bit integer hash function.
     seedNum = (seedNum + HEX_7ED55D16 + (seedNum << INT_12)) & HEX_FFFFFFFF;
     seedNum = (seedNum ^ HEX_C761C23C ^ (seedNum >>> INT_19)) & HEX_FFFFFFFF;
     seedNum = (seedNum + HEX_165667B1 + (seedNum << INT_5)) & HEX_FFFFFFFF;
     seedNum = ((seedNum + HEX_D3A2646C) ^ (seedNum << INT_9)) & HEX_FFFFFFFF;
     seedNum = (seedNum + HEX_FD7046C5 + (seedNum << INT_3)) & HEX_FFFFFFFF;
     seedNum = (seedNum ^ HEX_B55A4f09 ^ (seedNum >>> INT_16)) & HEX_FFFFFFFF;
     return (seedNum & HEX_FFFFFFF) / HEX_10000000;
   };
 })();
 
 function randomFileContents(bytes: number = ((random() * RANDOM_MULTIPLY) >>> 0) + RANDOM_ADD): Uint8Array {
   let result = new Uint8Array(bytes);
   for (let i = 0; i < bytes; i++) {
     result[i] = (random() * RESULT_MULTIPLY) >>> 0;
   }
   return result;
 }
 
 class File {
   private _data: Uint8Array;
   constructor(dataView: Uint8Array) {
     this._data = dataView;
   }
   get data(): Uint8Array {
     return this._data;
   }
 
   set data(dataView: Uint8Array) {
     this._data = dataView;
   }
 
   swapByteOrder(): void {
     for (let i = 0; i < this.data.length; i++) {
       this.data[i] = this.data[this.data.byteLength - 1 - i];
     }
   }
 }
 
 class Directory {
   structure: Map<string, Directory | File>;
   constructor() {
     this.structure = new Map<string, Directory | File>();
   }
 
   async addFile(name: string, file: File): Promise<File> {
     let entryFile = this.structure.get(name);
     if (entryFile !== undefined) {
       if (entryFile instanceof File) {
         throw new Error("Can't replace file with file;");
       }
       if (entryFile instanceof Directory) {
         throw new Error("Can't replace a file with a new directory;");
       }
       throw new Error('Should not reach this code;');
     }
 
     this.structure.set(name, file);
     return file;
   }
 
   async addDirectory(name: string, directory: Directory = new Directory()): Promise<Directory> {
     let entryFile = this.structure.get(name);
     if (entryFile !== undefined) {
       if (entryFile instanceof File) {
         throw new Error("Can't replace file with directory;");
       }
       if (entryFile instanceof Directory) {
         throw new Error("Can't replace directory with new directory;");
       }
       throw new Error('Should not reach this code;');
     }
 
     this.structure.set(name, directory);
     return directory;
   }
 
   async ls(): Promise<[[name: string, entry: Directory | File, isDirectory: boolean]]> {
     let result: [[name: string, entry: Directory | File, isDirectory: boolean]] = [['', new Directory(), false]];
     result.shift();
     for (let item of this.structure) {
       result.push([item[0], item[1], item[1] instanceof Directory]);
     }
     return result;
   }
 
   async forEachFile(): Promise<[[name: string, entry: Directory | File, isDirectory: boolean]]> {
     let result: [[name: string, entry: Directory | File, isDirectory: boolean]] = [['', new Directory(), false]];
     result.shift();
     for (let item of await this.ls()) {
       if (!item[ITEM_INDEX]) result.push(item);
     }
     return result;
   }
 
   async forEachFileRecursively(): Promise<[[name: string, entry: Directory | File, isDirectory: boolean]]> {
     let result: [[name: string, entry: Directory | File, isDirectory: boolean]] = [['', new Directory(), false]];
     result.shift();
     for (let item of await this.ls()) {
       if (item[ITEM_INDEX]) {
         for (let file of await (item[1] as Directory).forEachFileRecursively()) {
           result.push(file);
         }
       } else {
         result.push(item);
       }
     }
     return result;
   }
 
   async forEachDirectoryRecursively(): Promise<[[name: string, entry: Directory | File, isDirectory: boolean]]> {
     let result: [[name: string, entry: Directory | File, isDirectory: boolean]] = [['', new Directory(), false]];
     result.shift();
     for (let item of await this.ls()) {
       if (!item[ITEM_INDEX]) {
         continue;
       }
       for (let dirItem of await (item[1] as Directory).forEachDirectoryRecursively()) {
         result.push(dirItem);
       }
       result.push(item);
     }
     return result;
   }
 
   async fileCount(): Promise<number> {
     let count = 0;
     for (let item of await this.ls()) {
       if (!item[ITEM_INDEX]) count += 1;
     }
     return count;
   }
 
   async rm(name: string): Promise<boolean> {
     return this.structure.delete(name);
   }
 }
 
 async function setupDirectory(): Promise<Directory> {
   const fs = new Directory();
   let dirs = [fs];
 
   for (let index = 0; index < DIRS_ALL; index++) {
     let dir = dirs[index];
     for (let i = 0; i < DIRS_SON; ++i) {
       if (dirs.length < DIRS_ALL && random() >= DIR_RANDOM) {
         dirs.push(await dir.addDirectory(`dir-${i}`));
       }
     }
   }
 
   for (let dir of dirs) {
     for (let i = 0; i < FILES_COUNT; ++i) {
       if (random() >= FILE_RANDOM) {
         await dir.addFile(`file-${i}`, new File(randomFileContents()));
       }
     }
   }
 
   return fs;
 }
 
 class Benchmark {
   /*
    *@Benchmark
    */
   async runIteration(): Promise<void> {
     resetSeed();
     const fs = await setupDirectory();
     if (isDebug) {
       let dirs = await fs.forEachDirectoryRecursively();
       let files = await fs.forEachFileRecursively();
       //printLog("根节点fs下所有dir的数量====="+dirs.length)
       //printLog("根节点fs下所有dir下的file数量====="+files.length)
     }
     for (let file of await fs.forEachFileRecursively()) {
       (file[1] as File).swapByteOrder();
     }
 
     for (let item of await fs.forEachDirectoryRecursively()) {
       let dir = item[1] as Directory;
       if ((await dir.fileCount()) > FILE_DELETE_COUNT) {
         if (isDebug) {
           let deles = await dir.fileCount();
           //printLog("")
           //printLog("dir对象删除的file数量====="+deles)
         }
         for (let name of await dir.forEachFile()) {
           let result = await dir.rm(name[0]);
           if (!result) {
             throw new Error('rm should have returned true');
           }
         }
       }
     }
   }
 }
 
 //以下是测试打印日志相关代码
 const isDebug = false;
 function printLog(str: string): void {
   print(str);
 }
 
 async function addLoop(times: number, ben: Benchmark = new Benchmark()): Promise<void> {
   let start = ArkTools.timeInUs() / TIME_CONVERSION;
   for (let i = 0; i < times; i++) {
     await ben.runIteration();
   }
   let end = ArkTools.timeInUs() / TIME_CONVERSION;
   print('file-system: ms = ' + (end - start).toString());
 }
 addLoop(TEST_TIMES);
 