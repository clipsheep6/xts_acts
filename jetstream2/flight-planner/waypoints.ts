import fs from '@ohos.file.fs';
import buffer from '@ohos.buffer';
type JSONMap = Map<string,Map<string,string|number>>
type JSONValue = string|number
async  function  readFile(): Promise<JSONMap>{
  let filePath = "/Users/imac/DevEcoStudioProjects/MyApplication2/entry/src/main/ets/TS/waypoints-json.json";
  let file = fs.openSync(filePath, fs.OpenMode.READ_WRITE);
  let stat = fs.statSync(filePath);
  let arrayBuffer = new ArrayBuffer(stat.size);
  let obj:object
  let readLen = await fs.read(file.fd, arrayBuffer)
  let buf = buffer.from(arrayBuffer, 0, readLen);
  let jsonObj = JSON.parse(buf.toString()) as object
  fs.closeSync(file);
  let map = new Map<string,Map<string,string|number>>()
  let allKeys = Object.keys(jsonObj)
  for (let index = 0; index < allKeys.length; index++) {
    let element = allKeys[index];
    let value = jsonObj[element] as object
    if (typeof value === "object"){
      let subAllKeys = Object.keys(value)
      let subMap = new Map<string,string|number>()
      for (let i = 0; i < subAllKeys.length; i++) {
        let e = subAllKeys[index];
        let v = value[e] as JSONValue
        subMap.set(e,v)
      }
      map.set(element,subMap)
    }
  }
  return map
}
let _faaWaypoints = readFile
export {_faaWaypoints};