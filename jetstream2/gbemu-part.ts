
// ------ gbemu-part1 ------
let decoded_gameboy_rom: string = "";

//@Setup
function setupGameboy() {
  initializeWebKitAudio();
  decoded_gameboy_rom = base64_decode(gameboy_rom);
}

//@Benchmark
function runGameboy() {
  //deBugLog("This is runGameboy")
  start(new GameBoyCanvas(), decoded_gameboy_rom);

  gameboy!.instructions = 0;
  gameboy!.totalInstructions = 250000;

  while (gameboy!.instructions <= gameboy!.totalInstructions) {
    //deBugLog(`This is runGameboy instructions: ${gameboy!.instructions}`);
    gameboy!.run();
    GameBoyAudioNode!.run();
  }

  resetGlobalVariables();
}

//@Teardown
function tearDownGameboy() {
  decoded_gameboy_rom = "";
  expectedGameboyStateStr = "";
}

let expectedGameboyStateStr: string = '{"registerA":160,"registerB":255,"registerC":255,"registerE":11,"registersHL":51600,"programCounter":24309,"stackPointer":49706,"sumROM":10171578,"sumMemory":3435856,"sumMBCRam":234598,"sumVRam":0}';

// Start of browser emulation.

class GameBoyWindowClass {
  opera: boolean = false;
  mozRequestAnimationFrame: boolean = false;
}

let GameBoyWindow = new GameBoyWindowClass();

class GameBoyContext {
  createImageData(w: number, h: number): GameBoyContextImageDataResult {
    let result = new GameBoyContextImageDataResult();
    result.data = new Uint8Array(w * h * 4);
    return result;
  }
  putImageData(buffer: GameBoyContextImageDataResult, x: number, y: number) {
    let sum = 0;
    for (let i = 0; i < buffer.data.length; i++) {
      sum += i * buffer.data[i];
      sum = sum % 1000;
    }
  }
  drawImage(canvas?: GameBoyCanvas, x?: number, y?: number, screenWidth?: number, screenHeight?: number) {
  }
}

class GameBoyContextImageDataResult {
  data: Uint8Array = new Uint8Array();
}

class GameBoyCanvas {
  width: number = 160;
  height: number = 144;
  clientWidth: number = 0;
  clientHeight: number = 0;
  style: GameBoyCanvasStyle = new GameBoyCanvasStyle();
  getContext(type?: string): GameBoyContext {
    return new GameBoyContext();
  }
}

class GameBoyCanvasStyle {
  visibility: string = "visibile";
}

function cout(message: string, colorIndex: number) {

}

class GameBoyAudioNodeConstrc {
  bufferSize: number = 0;
  outputBuffer: GameBoyAudioNodeBuffer | null = null;
  onaudioprocess: ((event: GameBoyAudioNodeEvent) => void) | null = null
  connect(destination: GameBoyAudioContextDestination) {

  }
  run() {
    let event: GameBoyAudioNodeEvent = new GameBoyAudioNodeEvent();
    event.outputBuffer = this.outputBuffer as GameBoyAudioNodeBuffer;
    this.onaudioprocess!(event);
  }
}

let GameBoyAudioNode = new GameBoyAudioNodeConstrc();

class GameBoyAudioNodeEvent {
  outputBuffer: GameBoyAudioNodeBuffer | null = null;
}

class GameBoyAudioNodeBuffer {
  channelData: Float32Array[] = [];
  getChannelData(i: number): Float32Array {
    return this.channelData[i];
  }
}

class GameBoyAudioContext {
  sampleRate: number = 48000;
  destination: GameBoyAudioContextDestination | null = new GameBoyAudioContextDestination();
  createBufferSource(): GameBoyAudioContextBufferSource {
    return new GameBoyAudioContextBufferSource();
  }
  createBuffer(channels: number, len: number, sampleRate: number): GameBoyAudioContextBuffer {
    return new GameBoyAudioContextBuffer(1, 1, 1, 0.000020833333110203966, 48000);
  }
  createJavaScriptNode(bufferSize: number, inputChannels: number, outputChannels: number): GameBoyAudioNodeConstrc {
    GameBoyAudioNode.bufferSize = bufferSize;
    GameBoyAudioNode.outputBuffer = new GameBoyAudioNodeBuffer();
    for (let i = 0; i < outputChannels; i++) {
      GameBoyAudioNode.outputBuffer.channelData[i] = new Float32Array(bufferSize);
    }
    return GameBoyAudioNode;
  }
}

class GameBoyAudioContextBufferSource {
  loop: boolean = false;
  buffer: GameBoyAudioContextBuffer | null = null;
  noteOn(index: number) {

  }
  connect(audioNode: GameBoyAudioNodeConstrc) {

  }
}

class GameBoyAudioContextDestination {

}

class GameBoyAudioContextBuffer {
  gain: number;
  numberOfChannels: number;
  length: number;
  duration: number;
  sampleRate: number;
  constructor(gain: number, numberOfChannels: number, length: number, duration: number, sampleRate: number) {
    this.gain = gain
    this.numberOfChannels = numberOfChannels
    this.length = length
    this.duration = duration
    this.sampleRate = sampleRate
  }
}

let mock_date_time_counter: number = 0;

class new_Date {
  getTime(): number {
    mock_date_time_counter += 16;
    return mock_date_time_counter;
  }
}

// End of browser emulation.

// Start of helper functions.

function checkFinalState() {
  let stateStr: string = `{"registerA":${gameboy!.registerA},"registerB":${gameboy!.registerB},"registerC":${gameboy!.registerC},"registerE":${gameboy!.registerE},"registersHL":${gameboy!.registersHL},"programCounter":${gameboy!.programCounter},"stackPointer":${gameboy!.stackPointer},"sumROM":${setStateSum(gameboy!.fromTypedArray(gameboy!.ROM))},"sumMemory":${setStateSum(gameboy!.fromTypedArray(gameboy!.memory))},"sumMBCRam":${setStateSum(gameboy!.fromTypedArray(gameboy!.MBCRam))},"sumVRam":${setStateSum(gameboy!.fromTypedArray(gameboy!.VRAM as TNextArray))}}`;
  if (expectedGameboyStateStr.length > 0) {
    if (stateStr != expectedGameboyStateStr) {

    }
  }
  else {

  }
}

function setStateSum(a: TNextArray): number {
  let result = 0;
  for (let i = 0; i < a.length; i++) {
    result += a[i];
  }
  return result;
}

function resetGlobalVariables() {
  //deBugLog("This is resetGlobalVariables");
  //Audio API Event Handler:
  audioContextHandle = null;
  audioNode = null;
  audioSource = null;
  launchedContext = false;
  audioContextSampleBuffer = new Float32Array();
  resampled = new Float32Array();
  webAudioMinBufferSize = 15000;
  webAudioMaxBufferSize = 25000;
  webAudioActualSampleRate = 44100;
  XAudioJSSampleRate = 0;
  webAudioMono = false;
  XAudioJSVolume = 1;
  resampleControl = null;
  audioBufferSize = 0;
  resampleBufferStart = 0;
  resampleBufferEnd = 0;
  resampleBufferSize = 2;
  gameboy = null;             //GameBoyCore object.
}

// End of helper functions.

// Original code from Grant Galitz follows.
// Modifications by Google are marked in comments.

// Start of js/other/base64.js file.

let toBase64Table = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/';
let base64Pad: string = '=';

/* Convert Base64 data to a string */
let toBinaryTable:Array<number> = [
  -1,-1,-1,-1, -1,-1,-1,-1, -1,-1,-1,-1, -1,-1,-1,-1,
  -1,-1,-1,-1, -1,-1,-1,-1, -1,-1,-1,-1, -1,-1,-1,-1,
  -1,-1,-1,-1, -1,-1,-1,-1, -1,-1,-1,62, -1,-1,-1,63,
  52,53,54,55, 56,57,58,59, 60,61,-1,-1, -1, 0,-1,-1,
  -1, 0, 1, 2,  3, 4, 5, 6,  7, 8, 9,10, 11,12,13,14,
  15,16,17,18, 19,20,21,22, 23,24,25,-1, -1,-1,-1,-1,
  -1,26,27,28, 29,30,31,32, 33,34,35,36, 37,38,39,40,
  41,42,43,44, 45,46,47,48, 49,50,51,-1, -1,-1,-1,-1
]

function base64_decode(data: string): string {
  let result: string = '';
  let leftbits: number = 0; // number of bits decoded, but yet to be appended
  let leftdata: number = 0; // bits decoded, but yet to be appended

  for (let i = 0; i < data.length; i++) {
    let c = toBinaryTable[data.charCodeAt(i) & 0x7f];
    let padding = (data.charCodeAt(i) == base64Pad.charCodeAt(0));
    // Skip illegal characters and whitespace
    if (c == -1) continue;

    // Collect data into leftdata, update bitcount
    leftdata = (leftdata << 6) | c;
    leftbits += 6;

    // If we have 8 or more bits, append 8 bits to the result
    if (leftbits >= 8) {
      leftbits -= 8;
      // Append if not padding.
      if (!padding) {
        result += String.fromCharCode((leftdata >> leftbits) & 0xff);
      }
      leftdata &= (1 << leftbits) - 1;
    }
  }
  return result;
}
// End of js/other/base64.js file.

// Start of js/other/resampler.js file.

//JavaScript Audio Resampler (c) 2011 - Grant Galitz
class Resampler {
  fromSampleRate: number = 0
  toSampleRate: number = 0
  channels: number = 0
  outputBufferSize: number = 0
  noReturn: boolean = false
  resampler: (buffer: Float32Array) => Float32Array | number | undefined = () => new Float32Array();
  ratioWeight: number = 0
  tailExists: boolean = false
  lastWeight: number = 0
  lastOutput: Float32Array = new Float32Array();
  outputBuffer: Float32Array = new Float32Array();
  constructor(fromSampleRate: number, toSampleRate: number, channels: number = 0, outputBufferSize: number, noReturn: boolean) {
    this.fromSampleRate = fromSampleRate;
    this.toSampleRate = toSampleRate;
    this.channels = channels | 0;
    this.outputBufferSize = outputBufferSize;
    this.noReturn = noReturn;
    this.initialize();
  }
  initialize() {
    //Perform some checks:
    if (this.fromSampleRate > 0 && this.toSampleRate > 0 && this.channels > 0) {
      if (this.fromSampleRate == this.toSampleRate) {
        //Setup a resampler bypass:
        this.resampler = this.bypassResampler;    //Resampler just returns what was passed through.
        this.ratioWeight = 1;
      }
      else {
        //Setup the interpolation resampler:
        this.resampler = this.interpolate;      //Resampler is a custom quality interpolation algorithm.
        this.ratioWeight = this.fromSampleRate / this.toSampleRate;
        this.tailExists = false;
        this.lastWeight = 0;
        this.initializeBuffers();
      }
    }
    else {
    }
  }
  interpolate(buffer: Float32Array): Float32Array | number {
    let bufferLength: number = Math.min(buffer.length, this.outputBufferSize);
    if ((bufferLength % 2) == 0) {
      if (bufferLength > 0) {
        let ratioWeight: number = this.ratioWeight;
        let weight: number = 0;
        let output0: number = 0;
        let output1: number = 0;
        let actualPosition: number = 0;
        let amountToNext: number = 0;
        let alreadyProcessedTail: boolean = !this.tailExists;
        this.tailExists = false;
        let outputBuffer: Float32Array = this.outputBuffer;
        let outputOffset: number = 0;
        let currentPosition: number = 0;
        do {
          if (alreadyProcessedTail) {
            weight = ratioWeight;
            output0 = 0;
            output1 = 0;
          }
          else {
            weight = this.lastWeight;
            output0 = this.lastOutput[0];
            output1 = this.lastOutput[1];
            alreadyProcessedTail = true;
          }
          while (weight > 0 && actualPosition < bufferLength) {
            amountToNext = 1 + actualPosition - currentPosition;
            if (weight >= amountToNext) {
              output0 += buffer[actualPosition++] * amountToNext;
              output1 += buffer[actualPosition++] * amountToNext;
              currentPosition = actualPosition;
              weight -= amountToNext;
            }
            else {
              output0 += buffer[actualPosition] * weight;
              output1 += buffer[actualPosition + 1] * weight;
              currentPosition += weight;
              weight = 0;
              break;
            }
          }
          if (weight == 0) {
            outputBuffer[outputOffset++] = output0 / ratioWeight;
            outputBuffer[outputOffset++] = output1 / ratioWeight;
          }
          else {
            this.lastWeight = weight;
            this.lastOutput[0] = output0;
            this.lastOutput[1] = output1;
            this.tailExists = true;
            break;
          }
        } while (actualPosition < bufferLength);
        return this.bufferSlice(outputOffset);
      }
      else {
        return (this.noReturn) ? 0 : new Float32Array();
      }
    }
    else {
    }
    return new Float32Array();
  }
  bypassResampler(buffer: Float32Array): Float32Array | number {
    if (this.noReturn) {
      //Set the buffer passed as our own, as we don't need to resample it:
      this.outputBuffer = buffer;
      return buffer.length;
    }
    else {
      //Just return the buffer passsed:
      return buffer;
    }
  }
  bufferSlice(sliceAmount: number): Float32Array | number {
    if (this.noReturn) {
      //If we're going to access the properties directly from this object:
      return sliceAmount;
    }
    else {
      //Typed array and normal array buffer section referencing:
      return this.outputBuffer.subarray(0, sliceAmount);
    }
  }
  initializeBuffers() {
    //Initialize the internal buffer:
    this.outputBuffer = new Float32Array(this.outputBufferSize);
    this.lastOutput = new Float32Array(this.channels);
  }
}

// End of js/other/resampler.js file.

// Start of js/other/XAudioServer.js file.

/*Initialize here first:
  Example:
    Stereo audio with a sample rate of 70 khz, a minimum buffer of 15000 samples total, a maximum buffer of 25000 samples total and a starting volume level of 1.
      var parentObj = this;
      this.audioHandle = new XAudioServer(2, 70000, 15000, 25000, function (sampleCount) {
        return parentObj.audioUnderRun(sampleCount);
      }, 1);

  The callback is passed the number of samples requested, while it can return any number of samples it wants back.
*/
class XAudioServer {
  audioChannels: number = 0;
  channels: number = 0
  sampleRate: number = 0
  minBufferSize: number = 0
  maxBufferSize: number = 0
  volume: number = 0
  audioType: number = -1
  mozAudioTail: number[] = []
  audioHandleMoz: Object | null = null
  audioHandleFlash: XAudioServer | null = null
  flashInitialized: boolean = false
  mozAudioFound: boolean = false
  underRunCallback: (samplesRequested: number) => void;
  constructor(channels: number = 0, sampleRate: number = 0, minBufferSize: number = 0, maxBufferSize: number = 0, underRunCallback: ((samplesRequested: number) => void) | null, volume: number = 0) {
    this.channels = channels;
    this.sampleRate = sampleRate;
    this.minBufferSize = minBufferSize;
    this.maxBufferSize = maxBufferSize;
    this.volume = volume;
    this.audioChannels = (channels == 2) ? 2 : 1;
    webAudioMono = this.audioChannels == 1;
    XAudioJSSampleRate = (sampleRate > 0 && sampleRate <= 0xFFFFFF) ? sampleRate : 44100;
    webAudioMinBufferSize = (minBufferSize >= (samplesPerCallback << 1) && minBufferSize < maxBufferSize) ? (minBufferSize & ((webAudioMono) ? 0xFFFFFFFF : 0xFFFFFFFE)) : (samplesPerCallback << 1);
    webAudioMaxBufferSize = (Math.floor(maxBufferSize) > webAudioMinBufferSize + this.audioChannels) ? (maxBufferSize & ((webAudioMono) ? 0xFFFFFFFF : 0xFFFFFFFE)) : (minBufferSize << 1);
    this.underRunCallback = (typeof underRunCallback == "function") ? underRunCallback : (): void => { };
    XAudioJSVolume = (volume >= 0 && volume <= 1) ? volume : 1;
    this.initializeAudio();
  }
  callbackBasedWriteAudioNoCallback(buffer: Float32Array) {
    //Callback-centered audio APIs:
    let length: number = buffer.length;
    let bufferCounter: number = 0;
    while (bufferCounter < length && audioBufferSize < webAudioMaxBufferSize) {
      audioContextSampleBuffer[audioBufferSize++] = buffer[bufferCounter++];
    }
  }
  /*Pass your samples into here if you don't want automatic callback calling:
  Pack your samples as a one-dimenional array
  With the channel samplea packed uniformly.
  examples:
      mono - [left, left, left, left]
      stereo - [left, right, left, right, left, right, left, right]
  Useful in preventing infinite recursion issues with calling writeAudio inside your callback.
  */
  writeAudioNoCallback(buffer: Float32Array) {
    if (this.audioType == 0) {
    }
    else if (this.audioType == 1) {
      this.callbackBasedWriteAudioNoCallback(buffer);
    }
    else if (this.audioType == 2) {
      if (this.checkFlashInit() || launchedContext) {
        this.callbackBasedWriteAudioNoCallback(buffer);
      }
      else if (this.mozAudioFound) {
      }
    }
  }
  //Developer can use this to see how many samples to write (example: minimum buffer allotment minus remaining samples left returned from this function to make sure maximum buffering is done...)
  //If -1 is returned, then that means metric could not be done.
  remainingBuffer(): number {
    if (this.audioType == 0) {
      //mozAudio:
    }
    else if (this.audioType == 1) {
      //WebKit Audio:
      return (((resampledSamplesLeft() * resampleControl!.ratioWeight) >> (this.audioChannels - 1)) << (this.audioChannels - 1)) + audioBufferSize;
    }
    else if (this.audioType == 2) {
      if (this.checkFlashInit() || launchedContext) {
        //Webkit Audio / Flash Plugin Audio:
        return (((resampledSamplesLeft() * resampleControl!.ratioWeight) >> (this.audioChannels - 1)) << (this.audioChannels - 1)) + audioBufferSize;
      }
      else if (this.mozAudioFound) {
        //mozAudio:
      }
    }
    //Default return:
    return 0;
  }
  //DO NOT CALL THIS, the lib calls this internally!
  initializeAudio() {
    if (launchedContext) {
      this.initializeWebAudio()
    }
    else {
      this.initializeFlashAudio()
    }
  }
  initializeWebAudio() {
    resetCallbackAPIAudioBuffer(webAudioActualSampleRate, samplesPerCallback);
    this.audioType = 1;
  }
  changeVolume(newVolume: number) {
    if (newVolume >= 0 && newVolume <= 1) {
      XAudioJSVolume = newVolume;
      if (this.checkFlashInit()) {
      }
    }
  }
  initializeFlashAudio() {

  }
  //Checks to see if the NPAPI Adobe Flash bridge is ready yet:
  checkFlashInit(): boolean {
    return this.flashInitialized;
  }
}

class Audio {

}

/////////END LIB
function getFloat32(size: number): Float32Array {
  return new Float32Array(size);
}
function getFloat32Flat(size: number): Float32Array {
  return new Float32Array(size);
}
//Flash NPAPI Event Handler:
let samplesPerCallback: number = 2048;      //Has to be between 2048 and 4096 (If over, then samples are ignored, if under then silence is added).
let outputConvert: object | null = null;
function generateFlashStereoString(): string {  //Convert the arrays to one long string for speed.
  let copyBinaryStringLeft: string = "";
  let copyBinaryStringRight: string = "";
  let index: number = 0;
  while (index < samplesPerCallback && resampleBufferStart != resampleBufferEnd) {
    //Sanitize the buffer:
    copyBinaryStringLeft += String.fromCharCode(((Math.min(Math.max(resampled[resampleBufferStart++] + 1, 0), 2) * 0x3FFF) | 0) + 0x3000);
    copyBinaryStringRight += String.fromCharCode(((Math.min(Math.max(resampled[resampleBufferStart++] + 1, 0), 2) * 0x3FFF) | 0) + 0x3000);
    if (resampleBufferStart == resampleBufferSize) {
      resampleBufferStart = 0;
    }
    index += 1
  }
  return copyBinaryStringLeft + copyBinaryStringRight;
}
function generateFlashMonoString(): string {  //Convert the array to one long string for speed.
  let copyBinaryString: string = "";
  let index: number = 0
  while (index < samplesPerCallback && resampleBufferStart != resampleBufferEnd) {
    //Sanitize the buffer:
    copyBinaryString += String.fromCharCode(((Math.min(Math.max(resampled[resampleBufferStart++] + 1, 0), 2) * 0x3FFF) | 0) + 0x3000);
    if (resampleBufferStart == resampleBufferSize) {
      resampleBufferStart = 0;
    }
    index += 1
  }
  return copyBinaryString;
}

//Audio API Event Handler:
let audioContextHandle: GameBoyAudioContext | null = null;
let audioNode: GameBoyAudioNodeConstrc | null = null;
let audioSource: GameBoyAudioContextBufferSource | null = null;
let launchedContext: boolean = false;
let audioContextSampleBuffer: Float32Array = new Float32Array();
let resampled: Float32Array = new Float32Array();
let webAudioMinBufferSize = 15000;
let webAudioMaxBufferSize: number = 25000;
let webAudioActualSampleRate: number = 44100;
let XAudioJSSampleRate: number = 0;
let webAudioMono: boolean = false;
let XAudioJSVolume: number = 1;
let resampleControl: Resampler | null = null;
let audioBufferSize: number = 0;
let resampleBufferStart: number = 0;
let resampleBufferEnd: number = 0;
let resampleBufferSize: number = 2;

function audioOutputEvent(event: GameBoyAudioNodeEvent) {    //Web Audio API callback...
  let index: number = 0;
  let buffer1: Float32Array = event.outputBuffer!.getChannelData(0);
  let buffer2: Float32Array = event.outputBuffer!.getChannelData(1);
  resampleRefill();
  if (!webAudioMono) {
    //STEREO:
    while (index < samplesPerCallback && resampleBufferStart != resampleBufferEnd) {
      buffer1[index] = resampled[resampleBufferStart++] * XAudioJSVolume;
      buffer2[index++] = resampled[resampleBufferStart++] * XAudioJSVolume;
      if (resampleBufferStart == resampleBufferSize) {
        resampleBufferStart = 0;
      }
    }
  }
  else {
    //MONO:
    while (index < samplesPerCallback && resampleBufferStart != resampleBufferEnd) {
      buffer1[index] = resampled[resampleBufferStart++] * XAudioJSVolume;
      buffer2[index] = buffer1[index];
      index += 1;
      if (resampleBufferStart == resampleBufferSize) {
        resampleBufferStart = 0;
      }
    }
  }
  //Pad with silence if we're underrunning:
  while (index < samplesPerCallback) {
    buffer1[index] = 0;
    buffer2[index] = 0;
    index += 1;
  }
}

function resampleRefill() {
  if (audioBufferSize > 0) {
    //Resample a chunk of audio:
    let resampleLength: number = resampleControl!.resampler(getBufferSamples()) as number;
    let resampledResult: Float32Array = resampleControl!.outputBuffer;
    for (let index2: number = 0; index2 < resampleLength; ++index2) {
      resampled[resampleBufferEnd++] = resampledResult[index2];
      if (resampleBufferEnd == resampleBufferSize) {
        resampleBufferEnd = 0;
      }
      if (resampleBufferStart == resampleBufferEnd) {
        resampleBufferStart += 1;
        if (resampleBufferStart == resampleBufferSize) {
          resampleBufferStart = 0;
        }
      }
    }
    audioBufferSize = 0;
  }
}

function resampledSamplesLeft(): number {
  return ((resampleBufferStart <= resampleBufferEnd) ? 0 : resampleBufferSize) + resampleBufferEnd - resampleBufferStart;
}

function getBufferSamples(): Float32Array {
  // Typed array and normal array buffer section referencing:
  return audioContextSampleBuffer.subarray(0, audioBufferSize);
}

//Initialize WebKit Audio /Flash Audio Buffer:
function resetCallbackAPIAudioBuffer(APISampleRate: number, bufferAlloc: number) {
  audioContextSampleBuffer = getFloat32(webAudioMaxBufferSize);
  audioBufferSize = webAudioMaxBufferSize;
  resampleBufferStart = 0;
  resampleBufferEnd = 0;
  resampleBufferSize = Math.max(webAudioMaxBufferSize * Math.ceil(XAudioJSSampleRate / APISampleRate), samplesPerCallback) << 1;
  if (webAudioMono) {
    //MONO Handling:
    resampled = getFloat32Flat(resampleBufferSize);
    resampleControl = new Resampler(XAudioJSSampleRate, APISampleRate, 1, resampleBufferSize, true);
    outputConvert = generateFlashMonoString;
  }
  else {
    //STEREO Handling:
    resampleBufferSize  <<= 1;
    resampled = getFloat32Flat(resampleBufferSize);
    resampleControl = new Resampler(XAudioJSSampleRate, APISampleRate, 2, resampleBufferSize, true);
    outputConvert = generateFlashStereoString;
  }
}

//Initialize WebKit Audio:
function initializeWebKitAudio() {
  //deBugLog("This is initializeWebKitAudio")
  if (!launchedContext) {
    // The following line was modified for benchmarking:
    audioContextHandle = new GameBoyAudioContext();                   //Create a system audio context.
    audioSource = audioContextHandle.createBufferSource();            //We need to create a false input to get the chain started.
    audioSource.loop = false;                                         //Keep this alive forever (Event handler will know when to ouput.)
    XAudioJSSampleRate = audioContextHandle.sampleRate;
    webAudioActualSampleRate = audioContextHandle.sampleRate;
    audioSource.buffer = audioContextHandle.createBuffer(1, 1, webAudioActualSampleRate);  //Create a zero'd input buffer for the input to be valid.
    audioNode = audioContextHandle.createJavaScriptNode(samplesPerCallback, 1, 2);         //Create 2 outputs and ignore the input buffer (Just copy buffer 1 over if mono)
    audioNode.onaudioprocess = audioOutputEvent;                //Connect the audio processing event to a handling function so we can manipulate output
    audioSource.connect(audioNode);                             //Send and chain the input to the audio manipulation.
    audioNode.connect(audioContextHandle.destination as GameBoyAudioContextDestination);              //Send and chain the output of the audio manipulation to the system audio output.
    audioSource.noteOn(0);                                      //Start the loop!
    launchedContext = true;
  }
}
// End of js/other/XAudioServer.js file.

// Start of js/other/resize.js file.

//JavaScript Image Resizer (c) 2012 - Grant Galitz
class Resize {
  widthOriginal: number = 0
  heightOriginal: number = 0
  targetWidth: number = 0
  targetHeight: number = 0
  blendAlpha: boolean = false
  colorChannels: number = 0
  interpolationPass: boolean = false
  targetWidthMultipliedByChannels: number = 0
  originalWidthMultipliedByChannels: number = 0
  originalHeightMultipliedByChannels: number = 0
  widthPassResultSize: number = 0
  finalResultSize: number = 0
  resizeWidth: ((buffer: Float32Array) => Float32Array) | null = null;
  resizeHeight: ((buffer: Float32Array | Uint8Array) => Float32Array | Uint8Array) | null = null;
  ratioWeightWidthPass: number = 0
  ratioWeightHeightPass: number = 0
  outputWidthWorkBench: Float32Array = new Float32Array();
  widthBuffer: Float32Array = new Float32Array();
  outputHeightWorkBench: Float32Array = new Float32Array();
  heightBuffer: Uint8Array = new Uint8Array();
  constructor(widthOriginal: number, heightOriginal: number, targetWidth: number, targetHeight: number, blendAlpha: boolean, interpolationPass: boolean) {
    this.blendAlpha = blendAlpha;
    this.widthOriginal = Math.abs(Number.parseInt(String(widthOriginal)) || 0);
    this.heightOriginal = Math.abs(Number.parseInt(String(heightOriginal)) || 0);
    this.targetWidth = Math.abs(Number.parseInt(String(targetWidth)) || 0);
    this.targetHeight = Math.abs(Number.parseInt(String(targetHeight)) || 0);
    this.colorChannels = blendAlpha ? 4 : 3;
    this.interpolationPass = interpolationPass;
    this.targetWidthMultipliedByChannels = this.targetWidth * this.colorChannels;
    this.originalWidthMultipliedByChannels = this.widthOriginal * this.colorChannels;
    this.originalHeightMultipliedByChannels = this.heightOriginal * this.colorChannels;
    this.widthPassResultSize = this.targetWidthMultipliedByChannels * this.heightOriginal;
    this.finalResultSize = this.targetWidthMultipliedByChannels * this.targetHeight;
    this.initialize();
  }

  initialize() {
    //Perform some checks:
    if (this.widthOriginal > 0 && this.heightOriginal > 0 && this.targetWidth > 0 && this.targetHeight > 0) {
      if (this.widthOriginal == this.targetWidth) {
        //Bypass the width resizer pass:
        this.resizeWidth = this.bypassResizer as (buffer: Float32Array) => Float32Array;
      }
      else {
        //Setup the width resizer pass:
        this.ratioWeightWidthPass = this.widthOriginal / this.targetWidth;
        if (this.ratioWeightWidthPass < 1 && this.interpolationPass) {
          this.initializeFirstPassBuffers(true);
          this.resizeWidth = (this.colorChannels == 4) ? this.resizeWidthInterpolatedRGBA : this.resizeWidthInterpolatedRGB;
        }
        else {
          this.initializeFirstPassBuffers(false);
          this.resizeWidth = (this.colorChannels == 4) ? this.resizeWidthRGBA : this.resizeWidthRGB;
        }
      }
      if (this.heightOriginal == this.targetHeight) {
        //Bypass the height resizer pass:
        this.resizeHeight = this.bypassResizer
      }
      else {
        //Setup the height resizer pass:
        this.ratioWeightHeightPass = this.heightOriginal / this.targetHeight;
        if (this.ratioWeightHeightPass < 1 && this.interpolationPass) {
          this.initializeSecondPassBuffers(true);
          this.resizeHeight = this.resizeHeightInterpolated;
        }
        else {
          this.initializeSecondPassBuffers(false);
          this.resizeHeight = (this.colorChannels == 4) ? this.resizeHeightRGBA : this.resizeHeightRGB;
        }
      }
    }
  }

  resizeWidthRGB(buffer: Float32Array): Float32Array {
    let ratioWeight: number = this.ratioWeightWidthPass;
    let weight: number = 0;
    let amountToNext: number = 0;
    let actualPosition: number = 0;
    let currentPosition: number = 0;
    let line: number = 0;
    let pixelOffset: number = 0;
    let outputOffset: number = 0;
    let nextLineOffsetOriginalWidth: number = this.originalWidthMultipliedByChannels - 2;
    let nextLineOffsetTargetWidth: number = this.targetWidthMultipliedByChannels - 2;
    let output: Float32Array = this.outputWidthWorkBench;
    let outputBuffer: Float32Array = this.widthBuffer;
    do {
      line = 0;
      while (line < this.originalHeightMultipliedByChannels) {
        output[line++] = 0;
        output[line++] = 0;
        output[line++] = 0;
      }
      weight = ratioWeight;
      do {
        amountToNext = 1 + actualPosition - currentPosition;
        if (weight >= amountToNext) {
          line = 0;
          pixelOffset = actualPosition;
          while (line < this.originalHeightMultipliedByChannels) {
            output[line++] += buffer[pixelOffset++] * amountToNext;
            output[line++] += buffer[pixelOffset++] * amountToNext;
            output[line++] += buffer[pixelOffset] * amountToNext;
            pixelOffset += nextLineOffsetOriginalWidth;
          }
          actualPosition = actualPosition + 3;
          currentPosition = actualPosition
          weight -= amountToNext;
        }
        else {
          line = 0;
          pixelOffset = actualPosition;
          while (line < this.originalHeightMultipliedByChannels) {
            output[line++] += buffer[pixelOffset++] * weight;
            output[line++] += buffer[pixelOffset++] * weight;
            output[line++] += buffer[pixelOffset] * weight;
            pixelOffset += nextLineOffsetOriginalWidth
          }
          currentPosition += weight;
          break;
        }
      } while (weight > 0 && actualPosition < this.originalWidthMultipliedByChannels);
      line = 0;
      pixelOffset = outputOffset;
      while (line < this.originalHeightMultipliedByChannels) {
        outputBuffer[pixelOffset++] = output[line++] / ratioWeight;
        outputBuffer[pixelOffset++] = output[line++] / ratioWeight;
        outputBuffer[pixelOffset] = output[line++] / ratioWeight;
        pixelOffset += nextLineOffsetTargetWidth
      }
      outputOffset += 3;
    } while (outputOffset < this.targetWidthMultipliedByChannels);
    return outputBuffer;
  }

  resizeWidthInterpolatedRGB(buffer: Float32Array): Float32Array {
    let ratioWeight: number = (this.widthOriginal - 1) / this.targetWidth;
    let weight: number = 0;
    let finalOffset: number = 0;
    let pixelOffset: number = 0;
    let outputBuffer: Float32Array = this.widthBuffer;
    let targetPosition: number = 0;
    while (targetPosition < this.targetWidthMultipliedByChannels) {
      //Calculate weightings:
      let secondWeight: number = weight % 1;
      let firstWeight: number = 1 - secondWeight;
      //Interpolate:
      finalOffset = targetPosition;
      pixelOffset = Math.floor(weight) * 3;
      while (finalOffset < this.widthPassResultSize) {
        outputBuffer[finalOffset] = (buffer[pixelOffset] * firstWeight) + (buffer[pixelOffset + 3] * secondWeight);
        outputBuffer[finalOffset + 1] = (buffer[pixelOffset + 1] * firstWeight) + (buffer[pixelOffset + 4] * secondWeight);
        outputBuffer[finalOffset + 2] = (buffer[pixelOffset + 2] * firstWeight) + (buffer[pixelOffset + 5] * secondWeight);
        pixelOffset += this.originalWidthMultipliedByChannels;
        finalOffset += this.targetWidthMultipliedByChannels;
      }
      targetPosition += 3;
      weight += ratioWeight
    }
    return outputBuffer;
  }

  resizeWidthInterpolatedRGBA(buffer: Float32Array): Float32Array {
    let ratioWeight: number = (this.widthOriginal - 1) / this.targetWidth;
    let weight: number = 0;
    let finalOffset: number = 0;
    let pixelOffset: number = 0;
    let outputBuffer: Float32Array = this.widthBuffer;
    let targetPosition: number = 0;
    while (targetPosition < this.targetWidthMultipliedByChannels) {
      //Calculate weightings:
      let secondWeight: number = weight % 1;
      let firstWeight: number = 1 - secondWeight;
      //Interpolate:
      finalOffset = targetPosition;
      pixelOffset = Math.floor(weight) * 4;
      while (finalOffset < this.widthPassResultSize) {
        outputBuffer[finalOffset] = (buffer[pixelOffset] * firstWeight) + (buffer[pixelOffset + 4] * secondWeight);
        outputBuffer[finalOffset + 1] = (buffer[pixelOffset + 1] * firstWeight) + (buffer[pixelOffset + 5] * secondWeight);
        outputBuffer[finalOffset + 2] = (buffer[pixelOffset + 2] * firstWeight) + (buffer[pixelOffset + 6] * secondWeight);
        outputBuffer[finalOffset + 3] = (buffer[pixelOffset + 3] * firstWeight) + (buffer[pixelOffset + 7] * secondWeight);
        pixelOffset += this.originalWidthMultipliedByChannels;
        finalOffset += this.targetWidthMultipliedByChannels;
      }
      targetPosition += 4;
      weight += ratioWeight;
    }
    return outputBuffer;
  }

  resizeWidthRGBA(buffer: Float32Array): Float32Array {
    let ratioWeight: number = this.ratioWeightWidthPass;
    let weight: number = 0;
    let amountToNext: number = 0;
    let actualPosition: number = 0;
    let currentPosition: number = 0;
    let line: number = 0;
    let pixelOffset: number = 0;
    let outputOffset: number = 0;
    let nextLineOffsetOriginalWidth: number = this.originalWidthMultipliedByChannels - 3;
    let nextLineOffsetTargetWidth: number = this.targetWidthMultipliedByChannels - 3;
    let output: Float32Array = this.outputWidthWorkBench;
    let outputBuffer: Float32Array = this.widthBuffer;
    do {
      line = 0;
      while (line < this.originalHeightMultipliedByChannels) {
        output[line++] = 0;
        output[line++] = 0;
        output[line++] = 0;
        output[line++] = 0;
      }
      weight = ratioWeight;
      do {
        amountToNext = 1 + actualPosition - currentPosition;
        if (weight >= amountToNext) {
          line = 0;
          pixelOffset = actualPosition;
          while (line < this.originalHeightMultipliedByChannels) {
            output[line++] += buffer[pixelOffset++] * amountToNext;
            output[line++] += buffer[pixelOffset++] * amountToNext;
            output[line++] += buffer[pixelOffset++] * amountToNext;
            output[line++] += buffer[pixelOffset] * amountToNext;
            pixelOffset += nextLineOffsetOriginalWidth;
          }
          actualPosition = actualPosition + 4;
          currentPosition = actualPosition;
          weight -= amountToNext;
        }
        else {
          line = 0;
          pixelOffset = actualPosition;
          while (line < this.originalHeightMultipliedByChannels) {
            output[line++] += buffer[pixelOffset++] * weight;
            output[line++] += buffer[pixelOffset++] * weight;
            output[line++] += buffer[pixelOffset++] * weight;
            output[line++] += buffer[pixelOffset] * weight;
            pixelOffset += nextLineOffsetOriginalWidth;
          }
          currentPosition += weight;
          break;
        }
      } while (weight > 0 && actualPosition < this.originalWidthMultipliedByChannels);
      line = 0;
      pixelOffset = outputOffset;
      while (line < this.originalHeightMultipliedByChannels) {
        outputBuffer[pixelOffset++] = output[line++] / ratioWeight;
        outputBuffer[pixelOffset++] = output[line++] / ratioWeight;
        outputBuffer[pixelOffset++] = output[line++] / ratioWeight;
        outputBuffer[pixelOffset] = output[line++] / ratioWeight;
        pixelOffset += nextLineOffsetTargetWidth;
      }
      outputOffset += 4;
    } while (outputOffset < this.targetWidthMultipliedByChannels);
    return outputBuffer;
  }

  resizeHeightRGB(buffer: Float32Array | Uint8Array): Float32Array | Uint8Array {
    let ratioWeight: number = this.ratioWeightHeightPass;
    let weight: number = 0;
    let amountToNext: number = 0;
    let actualPosition: number = 0;
    let currentPosition: number = 0;
    let pixelOffset: number = 0;
    let outputOffset: number = 0;
    let output: Float32Array = this.outputHeightWorkBench;
    let outputBuffer: Uint8Array = this.heightBuffer;
    do {
      pixelOffset = 0;
      while (pixelOffset < this.targetWidthMultipliedByChannels) {
        output[pixelOffset++] = 0;
        output[pixelOffset++] = 0;
        output[pixelOffset++] = 0;
      }
      weight = ratioWeight;
      do {
        amountToNext = 1 + actualPosition - currentPosition;
        if (weight >= amountToNext) {
          pixelOffset = 0;
          while (pixelOffset < this.targetWidthMultipliedByChannels) {
            output[pixelOffset++] += buffer[actualPosition++] * amountToNext;
            output[pixelOffset++] += buffer[actualPosition++] * amountToNext;
            output[pixelOffset++] += buffer[actualPosition++] * amountToNext;
          }
          currentPosition = actualPosition;
          weight -= amountToNext;
        }
        else {
          pixelOffset = 0;
          amountToNext = actualPosition;
          while (pixelOffset < this.targetWidthMultipliedByChannels) {
            output[pixelOffset++] += buffer[amountToNext++] * weight;
            output[pixelOffset++] += buffer[amountToNext++] * weight;
            output[pixelOffset++] += buffer[amountToNext++] * weight;
          }
          currentPosition += weight;
          break;
        }
      } while (weight > 0 && actualPosition < this.widthPassResultSize);
      pixelOffset = 0;
      while (pixelOffset < this.targetWidthMultipliedByChannels) {
        outputBuffer[outputOffset++] = Math.round(output[pixelOffset++] / ratioWeight);
        outputBuffer[outputOffset++] = Math.round(output[pixelOffset++] / ratioWeight);
        outputBuffer[outputOffset++] = Math.round(output[pixelOffset++] / ratioWeight);
      }
    } while (outputOffset < this.finalResultSize);
    return outputBuffer;
  }

  resizeHeightInterpolated(buffer: Uint8Array | Float32Array): Uint8Array | Float32Array {
    let ratioWeight: number = (this.heightOriginal - 1) / this.targetHeight;
    let weight: number = 0;
    let finalOffset: number = 0;
    let pixelOffset: number = 0;
    let pixelOffsetAccumulated: number = 0;
    let pixelOffsetAccumulated2: number = 0;
    let outputBuffer: Uint8Array = this.heightBuffer;
    do {
      //Calculate weightings:
      let secondWeight: number = weight % 1;
      let firstWeight: number = 1 - secondWeight;
      //Interpolate:
      pixelOffsetAccumulated = Math.floor(weight) * this.targetWidthMultipliedByChannels;
      pixelOffsetAccumulated2 = pixelOffsetAccumulated + this.targetWidthMultipliedByChannels;
      pixelOffset = 0;
      while (pixelOffset < this.targetWidthMultipliedByChannels) {
        outputBuffer[finalOffset++] = (buffer[pixelOffsetAccumulated + pixelOffset] * firstWeight) + (buffer[pixelOffsetAccumulated2 + pixelOffset] * secondWeight);
        pixelOffset += 1;
      }
      weight += ratioWeight;
    } while (finalOffset < this.finalResultSize);
    return outputBuffer;
  }

  resizeHeightRGBA(buffer: Float32Array | Uint8Array): Float32Array | Uint8Array {
    let ratioWeight: number = this.ratioWeightHeightPass;
    let weight: number = 0;
    let amountToNext: number = 0;
    let actualPosition: number = 0;
    let currentPosition: number = 0;
    let pixelOffset: number = 0;
    let outputOffset: number = 0;
    let output: Float32Array = this.outputHeightWorkBench;
    let outputBuffer: Uint8Array = this.heightBuffer;
    do {
      pixelOffset = 0;
      while (pixelOffset < this.targetWidthMultipliedByChannels) {
        output[pixelOffset++] = 0;
        output[pixelOffset++] = 0;
        output[pixelOffset++] = 0;
        output[pixelOffset++] = 0;
      }
      weight = ratioWeight;
      do {
        amountToNext = 1 + actualPosition - currentPosition;
        if (weight >= amountToNext) {
          pixelOffset = 0;
          while (pixelOffset < this.targetWidthMultipliedByChannels) {
            output[pixelOffset++] += buffer[actualPosition++] * amountToNext;
            output[pixelOffset++] += buffer[actualPosition++] * amountToNext;
            output[pixelOffset++] += buffer[actualPosition++] * amountToNext;
            output[pixelOffset++] += buffer[actualPosition++] * amountToNext;
          }
          currentPosition = actualPosition;
          weight -= amountToNext;
        }
        else {
          pixelOffset = 0;
          amountToNext = actualPosition;
          while (pixelOffset < this.targetWidthMultipliedByChannels) {
            output[pixelOffset++] += buffer[amountToNext++] * weight;
            output[pixelOffset++] += buffer[amountToNext++] * weight;
            output[pixelOffset++] += buffer[amountToNext++] * weight;
            output[pixelOffset++] += buffer[amountToNext++] * weight;
          }
          currentPosition += weight;
          break;
        }
      } while (weight > 0 && actualPosition < this.widthPassResultSize);
      pixelOffset = 0;
      while (pixelOffset < this.targetWidthMultipliedByChannels) {
        outputBuffer[outputOffset++] = Math.round(output[pixelOffset++] / ratioWeight);
        outputBuffer[outputOffset++] = Math.round(output[pixelOffset++] / ratioWeight);
        outputBuffer[outputOffset++] = Math.round(output[pixelOffset++] / ratioWeight);
        outputBuffer[outputOffset++] = Math.round(output[pixelOffset++] / ratioWeight);
      }
    } while (outputOffset < this.finalResultSize);
    return outputBuffer;
  }

  resize(buffer: Float32Array | Uint8Array) {
    return this.resizeHeight!(this.resizeWidth!(buffer as Float32Array));
  }

  bypassResizer(buffer: Float32Array | Uint8Array): Float32Array | Uint8Array {
    //Just return the buffer passsed:
    return buffer;
  }

  initializeFirstPassBuffers(BILINEARAlgo: boolean) {
    //Initialize the internal width pass buffers:
    this.widthBuffer = this.generateFloatBuffer(this.widthPassResultSize);
    if (!BILINEARAlgo) {
      this.outputWidthWorkBench = this.generateFloatBuffer(this.originalHeightMultipliedByChannels);
    }
  }

  initializeSecondPassBuffers(BILINEARAlgo: boolean) {
    //Initialize the internal height pass buffers:
    this.heightBuffer = this.generateUint8Buffer(this.finalResultSize);
    if (!BILINEARAlgo) {
      this.outputHeightWorkBench = this.generateFloatBuffer(this.targetWidthMultipliedByChannels);
    }
  }

  generateFloatBuffer(bufferLength: number): Float32Array {
    //Generate a float32 typed array buffer:
    return new Float32Array(bufferLength);
  }

  generateUint8Buffer(bufferLength: number): Uint8Array {
    //Generate a uint8 typed array buffer:
    return new Uint8Array(bufferLength);
  }
}
// End of js/other/resize.js file.

// Remaining files are in gbemu-part2.js, since they run in strict mode.

// ------ gbemu-part2 ------
class GameBoyCore {
  //Params, etc...
  canvas: GameBoyCanvas | null = null; 				//Canvas DOM object for drawing out the graphics to.
  drawContext: null = null; 					//LCD Context
  ROMImage: string; 					//The game's ROM.
  //CPU Registers and Flags:
  registerA = 0x01; 					//Register A (Accumulator)
  FZero: boolean = true; 				//Register F  - Result was zero
  FSubtract: boolean = false; 				//Register F  - Subtraction was executed
  FHalfCarry: boolean = true; 				//Register F  - Half carry or half borrow
  FCarry: boolean = true; 				//Register F  - Carry or borrow
  registerB: number = 0x00; 				//Register B
  registerC: number = 0x13; 				//Register C
  registerD: number = 0x00; 				//Register D
  registerE: number = 0xD8; 				//Register E
  registerF: number = 0; 				//Register F
  registersHL: number = 0x014D; 			//Registers H and L combined
  stackPointer: number = 0xFFFE; 			//Stack Pointer
  programCounter: number = 0x0100; 			//Program Counter
  //Some CPU Emulation State Variables:
  CPUCyclesTotal: number = 0; 				//Relative CPU clocking to speed set, rounded appropriately.
  CPUCyclesTotalBase: number = 0; 			//Relative CPU clocking to speed set base.
  CPUCyclesTotalCurrent: number = 0; 			//Relative CPU clocking to speed set, the directly used value.
  CPUCyclesTotalRoundoff: number = 0; 			//Clocking per iteration rounding catch.
  baseCPUCyclesPerIteration = 0; 			//CPU clocks per iteration at 1x speed.
  remainingClocks: number = 0; 				//HALT clocking overrun carry over.
  inBootstrap: boolean = true; 				//Whether we're in the GBC boot ROM.
  usedBootROM: boolean = false; 			//Updated upon ROM loading...
  usedGBCBootROM: boolean = false; 			//Did we boot to the GBC boot ROM?
  halt: boolean = false; 				//Has the CPU been suspended until the next interrupt?
  skipPCIncrement: boolean = false; 			//Did we trip the DMG Halt bug?
  stopEmulator: number = 3; 				//Has the emulation been paused or a frame has ended?
  IME: boolean = true; 					//Are interrupts enabled?
  IRQLineMatched: number = 0; 				//CPU IRQ assertion.
  interruptsRequested: number = 0; 			//IF Register
  interruptsEnabled: number = 0; 			//IE Register
  hdmaRunning: boolean = false; 			//HDMA Transfer Flag - GBC only
  CPUTicks: number = 0; 				//The number of clock cycles emulated.
  doubleSpeedShifter = 0; 				//GBC double speed clocking shifter.
  JoyPad: number = 0xFF; 				//Joypad State (two four-bit states actually)
  CPUStopped: boolean = false; 				//CPU STOP status.
  //Main RAM, MBC RAM, GBC Main RAM, VRAM, etc.
  memoryReader: Array<(parentObj: GameBoyCore, address: number) => number> = [];			//Array of functions mapped to read back memory
  memoryWriter: Array<(parentObj: GameBoyCore, address: number, data: number) => void> = [];		//Array of functions mapped to write to memory
  memoryHighReader: Array<(parentObj: GameBoyCore, address: number) => number> = [];			//Array of functions mapped to read back 0xFFXX memory
  memoryHighWriter: Array<(parentObj: GameBoyCore, address: number, data: number) => void> = [];	//Array of functions mapped to write to 0xFFXX memory
  ROM: TNextArray = new Int8Array();				//The full ROM file dumped to an array.
  memory: TNextArray = new Int8Array();									//Main Core Memory
  MBCRam: TNextArray = new Int8Array(); 			//Switchable RAM (Used by games for more RAM) for the main memory range 0xA000 - 0xC000.
  VRAM: TNextArray | null = new Int8Array(); 			//Extra VRAM bank for GBC.
  GBCMemory: TNextArray | null = new Int8Array(); 		//GBC main RAM Banks
  MBC1Mode: boolean = false; 				//MBC1 Type (4/32, 16/8)
  MBCRAMBanksEnabled: boolean = false; 			//MBC RAM Access Control.
  currMBCRAMBank: number = 0; 				//MBC Currently Indexed RAM Bank
  currMBCRAMBankPosition = -0xA000; 			//MBC Position Adder;
  cGBC: boolean = false; 				//GameBoy Color detection.
  gbcRamBank: number = 1; 				//Currently Switched GameBoy Color ram bank
  gbcRamBankPosition = -0xD000; 			//GBC RAM offset from address start.
  gbcRamBankPositionECHO = -0xF000; 			//GBC RAM (ECHO mirroring) offset from address start.
  RAMBanks: number[] = [0, 1, 2, 4, 16]; 		//Used to map the RAM banks to maximum size the MBC used can do.
  ROMBank1offs: number = 0; 				//Offset of the ROM bank switching.
  currentROMBank: number = 0; 				//The parsed current ROM bank selection.
  cartridgeType: number = 0; 				//Cartridge Type
  name: string = ""; 					//Name of the game
  gameCode: string = ""; 				//Game code (Suffix for older games)
  fromSaveState: boolean = false; 			//A boolean to see if this was loaded in as a save state.
  savedStateFileName = ""; 				//When loaded in as a save state, this will not be empty.
  STATTracker: number = 0; 				//Tracker for STAT triggering.
  modeSTAT: number = 0; 				//The scan line mode (for lines 1-144 it's 2-3-0, for 145-154 it's 1)
  spriteCount: number = 252; 				//Mode 3 extra clocking counter (Depends on how many sprites are on the current line.).
  LYCMatchTriggerSTAT: boolean = false; 		//Should we trigger an interrupt if LY==LYC?
  mode2TriggerSTAT: boolean = false; 			//Should we trigger an interrupt if in mode 2?
  mode1TriggerSTAT: boolean = false; 			//Should we trigger an interrupt if in mode 1?
  mode0TriggerSTAT: boolean = false; 			//Should we trigger an interrupt if in mode 0?
  LCDisOn: boolean = false; 				//Is the emulated LCD controller on?
  LINECONTROL: Array<(parentObj: GameBoyCore) => void> = [];		//Array of functions to handle each scan line we do (onscreen + offscreen)
  DISPLAYOFFCONTROL: Array<(parentObj: GameBoyCore) => void> = [(parentObj) => {
    //Array of line 0 function to handle the LCD controller when it's off (Do nothing!).
  }];
  LCDCONTROL: Array<(parentObj: GameBoyCore) => void> = []; //Pointer to either LINECONTROL or DISPLAYOFFCONTROL.
  //RTC (Real Time Clock for MBC3):
  RTCisLatched: boolean = false;
  latchedSeconds: number = 0; 				//RTC latched seconds.
  latchedMinutes: number = 0; 				//RTC latched minutes.
  latchedHours: number = 0; 				//RTC latched hours.
  latchedLDays: number = 0; 				//RTC latched lower 8-bits of the day counter.
  latchedHDays: number = 0; 				//RTC latched high-bit of the day counter.
  RTCSeconds: number = 0; 				//RTC seconds counter.
  RTCMinutes: number = 0; 				//RTC minutes counter.
  RTCHours: number = 0; 				//RTC hours counter.
  RTCDays: number = 0; 					//RTC days counter.
  RTCDayOverFlow: boolean = false; 			//Did the RTC overflow and wrap the day counter?
  RTCHALT: boolean = false; 				//Is the RTC allowed to clock up?
  //Gyro:
  highX: number = 127;
  lowX: number = 127;
  highY: number = 127;
  lowY: number = 127;
  //Sound variables:
  audioHandle: XAudioServer | null = null; 		//XAudioJS handle
  numSamplesTotal: number = 0; 				//Length of the sound buffers.
  sampleSize: number = 0; 				//Length of the sound buffer for one channel.
  dutyLookup: boolean[][] = [				//Map the duty values given to ones we can work with.
    [false, false, false, false, false, false, false, true],
    [true, false, false, false, false, false, false, true],
    [true, false, false, false, false, true, true, true],
    [false, true, true, true, true, true, true, false]
  ];
  currentBuffer: TNextArray = new Int8Array();		//The audio buffer we're working on.
  secondaryBuffer: TNextArray = new Int8Array();
  bufferContainAmount: number = 0; 								//Buffer maintenance metric.
  LSFR15Table: TNextArray | null = new Int8Array();
  LSFR7Table: TNextArray | null = new Int8Array();
  noiseSampleTable: TNextArray | null = new Int8Array();

  soundMasterEnabled: boolean = false; 								//As its name implies
  channel3PCM: TNextArray | null = new Int8Array(); 		//Channel 3 adjusted sample buffer.
  //Vin Shit:
  VinLeftChannelMasterVolume = 8; 								//Computed post-mixing volume.
  VinRightChannelMasterVolume = 8; 								//Computed post-mixing volume.
  //Channel paths enabled:
  leftChannel1: boolean = false;
  leftChannel2: boolean = false;
  leftChannel3: boolean = false;
  leftChannel4: boolean = false;
  rightChannel1: boolean = false;
  rightChannel2: boolean = false;
  rightChannel3: boolean = false;
  rightChannel4: boolean = false;
  //Channel output level caches:
  channel1currentSampleLeft: number = 0;
  channel1currentSampleRight: number = 0;
  channel2currentSampleLeft: number = 0;
  channel2currentSampleRight: number = 0;
  channel3currentSampleLeft: number = 0;
  channel3currentSampleRight: number = 0;
  channel4currentSampleLeft: number = 0;
  channel4currentSampleRight: number = 0;
  channel1currentSampleLeftSecondary: number = 0;
  channel1currentSampleRightSecondary: number = 0;
  channel2currentSampleLeftSecondary: number = 0;
  channel2currentSampleRightSecondary: number = 0;
  channel3currentSampleLeftSecondary: number = 0;
  channel3currentSampleRightSecondary: number = 0;
  channel4currentSampleLeftSecondary: number = 0;
  channel4currentSampleRightSecondary: number = 0;
  channel1currentSampleLeftTrimary: number = 0;
  channel1currentSampleRightTrimary: number = 0;
  channel2currentSampleLeftTrimary: number = 0;
  channel2currentSampleRightTrimary: number = 0;
  mixerOutputCache: number = 0;
  //Pre-multipliers to cache some calculations:
  machineOut: number = 0; 				//Premultiplier for audio samples per instruction.
  //Audio generation counters:
  audioTicks: number = 0; 				//Used to sample the audio system every x CPU instructions.
  audioIndex: number = 0; 				//Used to keep alignment on audio generation.
  rollover: number = 0; 				//Used to keep alignment on the number of samples to output (Realign from counter alias).
  //Timing Variables
  emulatorTicks: number = 0; 				//Times for how many instructions to execute before ending the loop.
  DIVTicks: number = 56; 				//DIV Ticks Counter (Invisible lower 8-bit)
  LCDTicks: number = 60; 				//Counter for how many instructions have been executed on a scanline so far.
  timerTicks: number = 0; 				//Counter for the TIMA timer.
  TIMAEnabled: boolean = false; 			//Is TIMA enabled?
  TACClocker: number = 1024; 				//Timer Max Ticks
  serialTimer: number = 0; 				//Serial IRQ Timer
  serialShiftTimer: number = 0; 			//Serial Transfer Shift Timer
  serialShiftTimerAllocated: number = 0; 		//Serial Transfer Shift Timer Refill
  IRQEnableDelay: number = 0; 				//Are the interrupts on queue to be enabled?
  lastIteration: number = new new_Date().getTime();       //The last time we iterated the main loop.
  firstIteration: number = new new_Date().getTime();      //The line is changed for benchmarking.
  iterations: number = 0;
  actualScanLine: number = 0; 				//Actual scan line...
  lastUnrenderedLine: number = 0; 			//Last rendered scan line...
  queuedScanLines: number = 0;
  totalLinesPassed: number = 0;
  haltPostClocks: number = 0; 				//Post-Halt clocking.
  //ROM Cartridge Components:
  cMBC1: boolean = false; 				//Does the cartridge use MBC1?
  cMBC2: boolean = false; 				//Does the cartridge use MBC2?
  cMBC3: boolean = false; 				//Does the cartridge use MBC3?
  cMBC5: boolean = false; 				//Does the cartridge use MBC5?
  cMBC7: boolean = false; 				//Does the cartridge use MBC7?
  cSRAM: boolean = false; 				//Does the cartridge use save RAM?
  cMMMO1: boolean = false; 				//...
  cRUMBLE: boolean = false; 				//Does the cartridge use the RUMBLE addressing (modified MBC5)?
  cCamera: boolean = false; 				//Is the cartridge actually a GameBoy Camera?
  cTAMA5: boolean = false; 				//Does the cartridge use TAMA5? (Tamagotchi Cartridge)
  cHuC3: boolean = false; 				//Does the cartridge use HuC3 (Hudson Soft / modified MBC3)?
  cHuC1: boolean = false; 				//Does the cartridge use HuC1 (Hudson Soft / modified MBC1)?
  cTIMER: boolean = false; 				//Does the cartridge have an RTC?
  ROMBanks: Map<number, number> = new Map([		//1 Bank = 16 KBytes = 256 Kbits
    [0, 2], [1, 4], [2, 8], [3, 16], [4, 32], [5, 64], [6, 128], [7, 256], [8, 512], [0x52, 72], [0x53, 80], [0x54, 96]
  ]);
  numRAMBanks: number = 0; 				//How many RAM banks were actually allocated?
  //Graphics Variables
  currVRAMBank: number = 0; 				//Current VRAM bank for GBC.
  backgroundX: number = 0; 				//Register SCX (X-Scroll)
  backgroundY: number = 0; 				//Register SCY (Y-Scroll)
  gfxWindowDisplay: boolean = false; 			//Is the windows enabled?
  gfxSpriteShow: boolean = false; 			//Are sprites enabled?
  gfxSpriteNormalHeight: boolean = true; 		//Are we doing 8x8 or 8x16 sprites?
  bgEnabled: boolean = true; 				//Is the BG enabled?
  BGPriorityEnabled: boolean = true; 			//Can we flag the BG for priority over sprites?
  gfxWindowCHRBankPosition: number = 0; 		//The current bank of the character map the window uses.
  gfxBackgroundCHRBankPosition: number = 0; 		//The current bank of the character map the BG uses.
  gfxBackgroundBankOffset = 0x80; 			//Fast mapping of the tile numbering/
  windowY: number = 0; 					//Current Y offset of the window.
  windowX: number = 0; 					//Current X offset of the window.
  drewBlank: number = 0; 				//To prevent the repeating of drawing a blank screen.
  drewFrame: boolean = false; 				//Throttle how many draws we can do to once per iteration.
  midScanlineOffset = -1; 				//mid-scanline rendering offset.
  pixelEnd: number = 0; 				//track the x-coord limit for line rendering (mid-scanline usage).
  currentX: number = 0; 				//The x-coord we left off at for mid-scanline rendering.
  //BG Tile Pointer Caches:
  BGCHRBank1: ArrayObject = new ArrayObject();
  BGCHRBank2: ArrayObject = new ArrayObject();
  BGCHRCurrentBank: ArrayObject | null = null;
  //Tile Data Cache:
  tileCache: Array<ArrayObject> | null = [];
  //Palettes:
  colors: number[] = [0xEFFFDE, 0xADD794, 0x529273, 0x183442]; 						//"Classic" GameBoy palette colors.
  OBJPalette: TNextArray | null = new Int32Array();
  BGPalette: TNextArray | null = new Int32Array();
  gbcOBJRawPalette: TNextArray | null = new Int32Array();
  gbcBGRawPalette: TNextArray | null = new Int32Array();
  gbOBJPalette: TNextArray | null = new Int32Array();
  gbBGPalette: TNextArray | null = new Int32Array();
  gbcOBJPalette: TNextArray | null = new Int32Array();
  gbcBGPalette: TNextArray | null = new Int32Array();
  gbBGColorizedPalette: TNextArray | null = new Int32Array();
  gbOBJColorizedPalette: TNextArray | null = new Int32Array();
  cachedBGPaletteConversion: TNextArray | null = new Int32Array();
  cachedOBJPaletteConversion: TNextArray | null = new Int32Array();
  updateGBBGPalette: ((data: number) => void) | null = null;
  updateGBOBJPalette: ((address: number, data: number) => void) | null = null;
  colorizedGBPalettes: boolean = false;
  BGLayerRender: ((data: number) => void) | null = null; 			//Reference to the BG rendering function.
  WindowLayerRender: ((data: number) => void) | null = null; 			//Reference to the window rendering function.
  SpriteLayerRender: ((data: number) => void) | null = null; 			//Reference to the OAM rendering function.
  frameBuffer: TNextArray = new Int8Array(); 			               //The internal frame-buffer.
  swizzledFrame: TNextArray | null = new Int8Array(); 				//The secondary gfx buffer that holds the converted RGBA values.
  canvasBuffer: GameBoyContextImageDataResult | null = null; 			//imageData handle
  pixelStart: number = 0; 						       //Temp variable for holding the current working framebuffer offset.
  //Variables used for scaling in JS:
  onscreenWidth: number = 160;
  offscreenWidth: number = 160
  onscreenHeight: number = 144
  offscreenHeight: number = 144;
  offscreenRGBCount: number = this.onscreenWidth * this.onscreenHeight * 4;

  // Start of code changed for benchmarking (removed ROM):
  GBBOOTROM: TNextArray = [] as Object as TNextArray;
  GBCBOOTROM: TNextArray = [] as Object as TNextArray;
  // End of code changed for benchmarking.

  ffxxDump: number[] = [//Dump of the post-BOOT I/O register state (From gambatte):
    0x0F, 0x00, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01,
    0x80, 0xBF, 0xF3, 0xFF, 0xBF, 0xFF, 0x3F, 0x00, 0xFF, 0xBF, 0x7F, 0xFF, 0x9F, 0xFF, 0xBF, 0xFF,
    0xFF, 0x00, 0x00, 0xBF, 0x77, 0xF3, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0x91, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7E, 0xFF, 0xFE,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xC1, 0x00, 0xFE, 0xFF, 0xFF, 0xFF,
    0xF8, 0xFF, 0x00, 0x00, 0x00, 0x8F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xCE, 0xED, 0x66, 0x66, 0xCC, 0x0D, 0x00, 0x0B, 0x03, 0x73, 0x00, 0x83, 0x00, 0x0C, 0x00, 0x0D,
    0x00, 0x08, 0x11, 0x1F, 0x88, 0x89, 0x00, 0x0E, 0xDC, 0xCC, 0x6E, 0xE6, 0xDD, 0xDD, 0xD9, 0x99,
    0xBB, 0xBB, 0x67, 0x63, 0x6E, 0x0E, 0xEC, 0xCC, 0xDD, 0xDC, 0x99, 0x9F, 0xBB, 0xB9, 0x33, 0x3E,
    0x45, 0xEC, 0x52, 0xFA, 0x08, 0xB7, 0x07, 0x5D, 0x01, 0xFD, 0xC0, 0xFF, 0x08, 0xFC, 0x00, 0xE5,
    0x0B, 0xF8, 0xC2, 0xCE, 0xF4, 0xF9, 0x0F, 0x7F, 0x45, 0x6D, 0x3D, 0xFE, 0x46, 0x97, 0x33, 0x5E,
    0x08, 0xEF, 0xF1, 0xFF, 0x86, 0x83, 0x24, 0x74, 0x12, 0xFC, 0x00, 0x9F, 0xB4, 0xB7, 0x06, 0xD5,
    0xD0, 0x7A, 0x00, 0x9E, 0x04, 0x5F, 0x41, 0x2F, 0x1D, 0x77, 0x36, 0x75, 0x81, 0xAA, 0x70, 0x3A,
    0x98, 0xD1, 0x71, 0x02, 0x4D, 0x01, 0xC1, 0xFF, 0x0D, 0x00, 0xD3, 0x05, 0xF9, 0x00, 0x0B, 0x00
  ];

  // other perpty
  channel1FrequencyTracker: number = 0x2000;
  channel1DutyTracker: number = 0;
  channel1CachedDuty: boolean[] = [];
  channel1totalLength: number = 0;
  channel1envelopeVolume: number = 0;
  channel1envelopeType: boolean = false;
  channel1envelopeSweeps: number = 0;
  channel1envelopeSweepsLast: number = 0;
  channel1consecutive: boolean = true;
  channel1frequency: number = 1985;
  channel1SweepFault: boolean = true;
  channel1ShadowFrequency: number = 1985;
  channel1timeSweep: number = 1;
  channel1lastTimeSweep: number = 0;
  channel1numSweep: number = 0;
  channel1frequencySweepDivider: number = 0;
  channel1decreaseSweep: boolean = false;
  channel2FrequencyTracker: number = 0x2000;
  channel2DutyTracker: number = 0;
  channel2CachedDuty: boolean[] = [];
  channel2totalLength: number = 0;
  channel2envelopeVolume: number = 0;
  channel2envelopeType: boolean = false;
  channel2envelopeSweeps: number = 0;
  channel2envelopeSweepsLast: number = 0;
  channel2consecutive: boolean = true;
  channel2frequency: number = 0;
  channel3canPlay: boolean = false;
  channel3totalLength: number = 0;
  channel3patternType: number = 4;
  channel3frequency: number = 0;
  channel3consecutive: boolean = true;
  channel3Counter: number = 0x418;
  channel4FrequencyPeriod: number = 8;
  channel4totalLength: number = 0;
  channel4envelopeVolume: number = 0;
  channel4currentVolume: number = 0;
  channel4envelopeType: boolean = false;
  channel4envelopeSweeps: number = 0;
  channel4envelopeSweepsLast: number = 0;
  channel4consecutive: boolean = true;
  channel4BitRange: number = 0x7FFF;
  channel4VolumeShifter: number = 15;
  channel1FrequencyCounter: number = 0x200;
  channel2FrequencyCounter: number = 0x200;
  channel3FrequencyPeriod: number = 0x800;
  channel3lastSampleLookup: number = 0;
  channel4lastSampleLookup: number = 0;
  sequencerClocks: number = 0x2000;
  sequencePosition: number = 0;
  channel4Counter: number = 8;
  cachedChannel3Sample: number = 0;
  cachedChannel4Sample: number = 0;
  channel1Enabled: boolean = false;
  channel2Enabled: boolean = false;
  channel3Enabled: boolean = false;
  channel4Enabled: boolean = false;
  channel1canPlay: boolean = false;
  channel2canPlay: boolean = false;
  channel4canPlay: boolean = false;
  ROMBankEdge: number = 0;
  cBATT: boolean = false;
  OAMAddressCache: TNextArray = new Int32Array(10);
  sortBuffer: TNextArray = new Int8Array(0x100);
  resizer: Resize | null = null;
  instructions: number = 0;
  totalInstructions: number = 0;
  drawContextOnscreen: GameBoyContext | null = null;
  drawContextOffscreen: GameBoyContext | null = null;
  canvasOffscreen: GameBoyCanvas | null = null;
  openMBC: (name: string) => number[] = (name: string): number[] => [];
  openRTC: (filename: string) => Array<number | boolean> = (filename: string): Array<number | boolean> => [];
  numROMBanks: number = 0;

  OPCODE: Array<(parentObj: GameBoyCore) => void> = [
  //NOP
  //#0x00:
    (parentObj) => {
      //Do Nothing...
    },
    //LD BC, nn
    //#0x01:
    (parentObj) => {
      parentObj.registerC = parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.registerB = parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF);
      parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
    },
    //LD (BC), A
    //#0x02:
    (parentObj) => {
      parentObj.memoryWrite((parentObj.registerB << 8) | parentObj.registerC, parentObj.registerA);
    },
    //INC BC
    //#0x03:
    (parentObj) => {
      let temp_var = ((parentObj.registerB << 8) | parentObj.registerC) + 1;
      parentObj.registerB = (temp_var >> 8) & 0xFF;
      parentObj.registerC = temp_var & 0xFF;
    },
    //INC B
    //#0x04:
    (parentObj) => {
      parentObj.registerB = (parentObj.registerB + 1) & 0xFF;
      parentObj.FZero = (parentObj.registerB == 0);
      parentObj.FHalfCarry = ((parentObj.registerB & 0xF) == 0);
      parentObj.FSubtract = false;
    },
    //DEC B
    //#0x05:
    (parentObj) => {
      parentObj.registerB = (parentObj.registerB - 1) & 0xFF;
      parentObj.FZero = (parentObj.registerB == 0);
      parentObj.FHalfCarry = ((parentObj.registerB & 0xF) == 0xF);
      parentObj.FSubtract = true;
    },
    //LD B, n
    //#0x06:
    (parentObj) => {
      parentObj.registerB = parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
    },
    //RLCA
    //#0x07:
    (parentObj) => {
      parentObj.FCarry = (parentObj.registerA > 0x7F);
      parentObj.registerA = ((parentObj.registerA << 1) & 0xFF) | (parentObj.registerA >> 7);
      parentObj.FZero = false;
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
    },
    //LD (nn), SP
    //#0x08:
    (parentObj) => {
      let temp_var = (parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
      parentObj.memoryWrite(temp_var, parentObj.stackPointer & 0xFF);
      parentObj.memoryWrite((temp_var + 1) & 0xFFFF, parentObj.stackPointer >> 8);
    },
    //ADD HL, BC
    //#0x09:
    (parentObj) => {
      let dirtySum = parentObj.registersHL + ((parentObj.registerB << 8) | parentObj.registerC);
      parentObj.FHalfCarry = ((parentObj.registersHL & 0xFFF) > (dirtySum & 0xFFF));
      parentObj.FCarry = (dirtySum > 0xFFFF);
      parentObj.registersHL = dirtySum & 0xFFFF;
      parentObj.FSubtract = false;
    },
    //LD A, (BC)
    //#0x0A:
    (parentObj) => {
      parentObj.registerA = parentObj.memoryRead((parentObj.registerB << 8) | parentObj.registerC);
    },
    //DEC BC
    //#0x0B:
    (parentObj) => {
      let temp_var = (((parentObj.registerB << 8) | parentObj.registerC) - 1) & 0xFFFF;
      parentObj.registerB = temp_var >> 8;
      parentObj.registerC = temp_var & 0xFF;
    },
    //INC C
    //#0x0C:
    (parentObj) => {
      parentObj.registerC = (parentObj.registerC + 1) & 0xFF;
      parentObj.FZero = (parentObj.registerC == 0);
      parentObj.FHalfCarry = ((parentObj.registerC & 0xF) == 0);
      parentObj.FSubtract = false;
    },
    //DEC C
    //#0x0D:
    (parentObj) => {
      parentObj.registerC = (parentObj.registerC - 1) & 0xFF;
      parentObj.FZero = (parentObj.registerC == 0);
      parentObj.FHalfCarry = ((parentObj.registerC & 0xF) == 0xF);
      parentObj.FSubtract = true;
    },
    //LD C, n
    //#0x0E:
    (parentObj) => {
      parentObj.registerC = parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
    },
    //RRCA
    //#0x0F:
    (parentObj) => {
      parentObj.registerA = (parentObj.registerA >> 1) | ((parentObj.registerA & 1) << 7);
      parentObj.FCarry = (parentObj.registerA > 0x7F);
      parentObj.FZero = false;
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
    },
    //STOP
    //#0x10:
    (parentObj) => {
      if (parentObj.cGBC) {
        if ((parentObj.memory[0xFF4D] & 0x01) == 0x01) { //Speed change requested.
          if (parentObj.memory[0xFF4D] > 0x7F) { //Go back to single speed mode.
            cout("Going into single clock speed mode.", 0);
            parentObj.doubleSpeedShifter = 0;
            parentObj.memory[0xFF4D] &= 0x7F; //Clear the double speed mode flag.
          }
          else { //Go to double speed mode.
            cout("Going into double clock speed mode.", 0);
            parentObj.doubleSpeedShifter = 1;
            parentObj.memory[0xFF4D] |= 0x80; //Set the double speed mode flag.
          }
          parentObj.memory[0xFF4D] &= 0xFE; //Reset the request bit.
        }
        else {
          parentObj.handleSTOP();
        }
      }
      else {
        parentObj.handleSTOP();
      }
    },
    //LD DE, nn
    //#0x11:
    (parentObj) => {
      parentObj.registerE = parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.registerD = parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF);
      parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
    },
    //LD (DE), A
    //#0x12:
    (parentObj) => {
      parentObj.memoryWrite((parentObj.registerD << 8) | parentObj.registerE, parentObj.registerA);
    },
    //INC DE
    //#0x13:
    (parentObj) => {
      let temp_var = ((parentObj.registerD << 8) | parentObj.registerE) + 1;
      parentObj.registerD = (temp_var >> 8) & 0xFF;
      parentObj.registerE = temp_var & 0xFF;
    },
    //INC D
    //#0x14:
    (parentObj) => {
      parentObj.registerD = (parentObj.registerD + 1) & 0xFF;
      parentObj.FZero = (parentObj.registerD == 0);
      parentObj.FHalfCarry = ((parentObj.registerD & 0xF) == 0);
      parentObj.FSubtract = false;
    },
    //DEC D
    //#0x15:
    (parentObj) => {
      parentObj.registerD = (parentObj.registerD - 1) & 0xFF;
      parentObj.FZero = (parentObj.registerD == 0);
      parentObj.FHalfCarry = ((parentObj.registerD & 0xF) == 0xF);
      parentObj.FSubtract = true;
    },
    //LD D, n
    //#0x16:
    (parentObj) => {
      parentObj.registerD = parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
    },
    //RLA
    //#0x17:
    (parentObj) => {
      let carry_flag = (parentObj.FCarry) ? 1 : 0;
      parentObj.FCarry = (parentObj.registerA > 0x7F);
      parentObj.registerA = ((parentObj.registerA << 1) & 0xFF) | carry_flag;
      parentObj.FZero = false;
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
    },
    //JR n
    //#0x18:
    (parentObj) => {
      parentObj.programCounter = (parentObj.programCounter + ((parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter) << 24) >> 24) + 1) & 0xFFFF;
    },
    //ADD HL, DE
    //#0x19:
    (parentObj) => {
      let dirtySum = parentObj.registersHL + ((parentObj.registerD << 8) | parentObj.registerE);
      parentObj.FHalfCarry = ((parentObj.registersHL & 0xFFF) > (dirtySum & 0xFFF));
      parentObj.FCarry = (dirtySum > 0xFFFF);
      parentObj.registersHL = dirtySum & 0xFFFF;
      parentObj.FSubtract = false;
    },
    //LD A, (DE)
    //#0x1A:
    (parentObj) => {
      parentObj.registerA = parentObj.memoryRead((parentObj.registerD << 8) | parentObj.registerE);
    },
    //DEC DE
    //#0x1B:
    (parentObj) => {
      let temp_var = (((parentObj.registerD << 8) | parentObj.registerE) - 1) & 0xFFFF;
      parentObj.registerD = temp_var >> 8;
      parentObj.registerE = temp_var & 0xFF;
    },
    //INC E
    //#0x1C:
    (parentObj) => {
      parentObj.registerE = (parentObj.registerE + 1) & 0xFF;
      parentObj.FZero = (parentObj.registerE == 0);
      parentObj.FHalfCarry = ((parentObj.registerE & 0xF) == 0);
      parentObj.FSubtract = false;
    },
    //DEC E
    //#0x1D:
    (parentObj) => {
      parentObj.registerE = (parentObj.registerE - 1) & 0xFF;
      parentObj.FZero = (parentObj.registerE == 0);
      parentObj.FHalfCarry = ((parentObj.registerE & 0xF) == 0xF);
      parentObj.FSubtract = true;
    },
    //LD E, n
    //#0x1E:
    (parentObj) => {
      parentObj.registerE = parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
    },
    //RRA
    //#0x1F:
    (parentObj) => {
      let carry_flag = (parentObj.FCarry) ? 0x80 : 0;
      parentObj.FCarry = ((parentObj.registerA & 1) == 1);
      parentObj.registerA = (parentObj.registerA >> 1) | carry_flag;
      parentObj.FZero = false;
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
    },
    //JR NZ, n
    //#0x20:
    (parentObj) => {
      if (!parentObj.FZero) {
        parentObj.programCounter = (parentObj.programCounter + ((parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter) << 24) >> 24) + 1) & 0xFFFF;
        parentObj.CPUTicks += 4;
      }
      else {
        parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      }
    },
    //LD HL, nn
    //#0x21:
    (parentObj) => {
      parentObj.registersHL = (parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
    },
    //LDI (HL), A
    //#0x22:
    (parentObj) => {
      parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.registerA);
      parentObj.registersHL = (parentObj.registersHL + 1) & 0xFFFF;
    },
    //INC HL
    //#0x23:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registersHL + 1) & 0xFFFF;
    },
    //INC H
    //#0x24:
    (parentObj) => {
      let H = ((parentObj.registersHL >> 8) + 1) & 0xFF;
      parentObj.FZero = (H == 0);
      parentObj.FHalfCarry = ((H & 0xF) == 0);
      parentObj.FSubtract = false;
      parentObj.registersHL = (H << 8) | (parentObj.registersHL & 0xFF);
    },
    //DEC H
    //#0x25:
    (parentObj) => {
      let H = ((parentObj.registersHL >> 8) - 1) & 0xFF;
      parentObj.FZero = (H == 0);
      parentObj.FHalfCarry = ((H & 0xF) == 0xF);
      parentObj.FSubtract = true;
      parentObj.registersHL = (H << 8) | (parentObj.registersHL & 0xFF);
    },
    //LD H, n
    //#0x26:
    (parentObj) => {
      parentObj.registersHL = (parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter) << 8) | (parentObj.registersHL & 0xFF);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
    },
    //DAA
    //#0x27:
    (parentObj) => {
      if (!parentObj.FSubtract) {
        if (parentObj.FCarry || parentObj.registerA > 0x99) {
          parentObj.registerA = (parentObj.registerA + 0x60) & 0xFF;
          parentObj.FCarry = true;
        }
        if (parentObj.FHalfCarry || (parentObj.registerA & 0xF) > 0x9) {
          parentObj.registerA = (parentObj.registerA + 0x06) & 0xFF;
          parentObj.FHalfCarry = false;
        }
      }
      else if (parentObj.FCarry && parentObj.FHalfCarry) {
        parentObj.registerA = (parentObj.registerA + 0x9A) & 0xFF;
        parentObj.FHalfCarry = false;
      }
      else if (parentObj.FCarry) {
        parentObj.registerA = (parentObj.registerA + 0xA0) & 0xFF;
      }
      else if (parentObj.FHalfCarry) {
        parentObj.registerA = (parentObj.registerA + 0xFA) & 0xFF;
        parentObj.FHalfCarry = false;
      }
      parentObj.FZero = (parentObj.registerA == 0);
    },
    //JR Z, n
    //#0x28:
    (parentObj) => {
      if (parentObj.FZero) {
        parentObj.programCounter = (parentObj.programCounter + ((parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter) << 24) >> 24) + 1) & 0xFFFF;
        parentObj.CPUTicks += 4;
      }
      else {
        parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      }
    },
    //ADD HL, HL
    //#0x29:
    (parentObj) => {
      parentObj.FHalfCarry = ((parentObj.registersHL & 0xFFF) > 0x7FF);
      parentObj.FCarry = (parentObj.registersHL > 0x7FFF);
      parentObj.registersHL = (parentObj.registersHL << 1) & 0xFFFF;
      parentObj.FSubtract = false;
    },
    //LDI A, (HL)
    //#0x2A:
    (parentObj) => {
      parentObj.registerA = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
      parentObj.registersHL = (parentObj.registersHL + 1) & 0xFFFF;
    },
    //DEC HL
    //#0x2B:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registersHL - 1) & 0xFFFF;
    },
    //INC L
    //#0x2C:
    (parentObj) => {
      let L = (parentObj.registersHL + 1) & 0xFF;
      parentObj.FZero = (L == 0);
      parentObj.FHalfCarry = ((L & 0xF) == 0);
      parentObj.FSubtract = false;
      parentObj.registersHL = (parentObj.registersHL & 0xFF00) | L;
    },
    //DEC L
    //#0x2D:
    (parentObj) => {
      let L = (parentObj.registersHL - 1) & 0xFF;
      parentObj.FZero = (L == 0);
      parentObj.FHalfCarry = ((L & 0xF) == 0xF);
      parentObj.FSubtract = true;
      parentObj.registersHL = (parentObj.registersHL & 0xFF00) | L;
    },
    //LD L, n
    //#0x2E:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registersHL & 0xFF00) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
    },
    //CPL
    //#0x2F:
    (parentObj) => {
      parentObj.registerA ^= 0xFF;
      parentObj.FSubtract =  true;
      parentObj.FHalfCarry = true;
    },
    //JR NC, n
    //#0x30:
    (parentObj) => {
      if (!parentObj.FCarry) {
        parentObj.programCounter = (parentObj.programCounter + ((parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter) << 24) >> 24) + 1) & 0xFFFF;
        parentObj.CPUTicks += 4;
      }
      else {
        parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      }
    },
    //LD SP, nn
    //#0x31:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
    },
    //LDD (HL), A
    //#0x32:
    (parentObj) => {
      parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.registerA);
      parentObj.registersHL = (parentObj.registersHL - 1) & 0xFFFF;
    },
    //INC SP
    //#0x33:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer + 1) & 0xFFFF;
    },
    //INC (HL)
    //#0x34:
    (parentObj) => {
      let temp_var = (parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) + 1) & 0xFF;
      parentObj.FZero = (temp_var == 0);
      parentObj.FHalfCarry = ((temp_var & 0xF) == 0);
      parentObj.FSubtract = false;
      parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, temp_var);
    },
    //DEC (HL)
    //#0x35:
    (parentObj) => {
      let temp_var = (parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) - 1) & 0xFF;
      parentObj.FZero = (temp_var == 0);
      parentObj.FHalfCarry = ((temp_var & 0xF) == 0xF);
      parentObj.FSubtract = true;
      parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, temp_var);
    },
    //LD (HL), n
    //#0x36:
    (parentObj) => {
      parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter));
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
    },
    //SCF
    //#0x37:
    (parentObj) => {
      parentObj.FCarry = true;
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
    },
    //JR C, n
    //#0x38:
    (parentObj) => {
      if (parentObj.FCarry) {
        parentObj.programCounter = (parentObj.programCounter + ((parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter) << 24) >> 24) + 1) & 0xFFFF;
        parentObj.CPUTicks += 4;
      }
      else {
        parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      }
    },
    //ADD HL, SP
    //#0x39:
    (parentObj) => {
      let dirtySum = parentObj.registersHL + parentObj.stackPointer;
      parentObj.FHalfCarry = ((parentObj.registersHL & 0xFFF) > (dirtySum & 0xFFF));
      parentObj.FCarry = (dirtySum > 0xFFFF);
      parentObj.registersHL = dirtySum & 0xFFFF;
      parentObj.FSubtract = false;
    },
    //LDD A, (HL)
    //#0x3A:
    (parentObj) => {
      parentObj.registerA = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
      parentObj.registersHL = (parentObj.registersHL - 1) & 0xFFFF;
    },
    //DEC SP
    //#0x3B:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
    },
    //INC A
    //#0x3C:
    (parentObj) => {
      parentObj.registerA = (parentObj.registerA + 1) & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) == 0);
      parentObj.FSubtract = false;
    },
    //DEC A
    //#0x3D:
    (parentObj) => {
      parentObj.registerA = (parentObj.registerA - 1) & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) == 0xF);
      parentObj.FSubtract = true;
    },
    //LD A, n
    //#0x3E:
    (parentObj) => {
      parentObj.registerA = parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
    },
    //CCF
    //#0x3F:
    (parentObj) => {
      parentObj.FCarry = !parentObj.FCarry;
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
    },
    //LD B, B
    //#0x40:
    (parentObj) => {
      //Do nothing...
    },
    //LD B, C
    //#0x41:
    (parentObj) => {
      parentObj.registerB = parentObj.registerC;
    },
    //LD B, D
    //#0x42:
    (parentObj) => {
      parentObj.registerB = parentObj.registerD;
    },
    //LD B, E
    //#0x43:
    (parentObj) => {
      parentObj.registerB = parentObj.registerE;
    },
    //LD B, H
    //#0x44:
    (parentObj) => {
      parentObj.registerB = parentObj.registersHL >> 8;
    },
    //LD B, L
    //#0x45:
    (parentObj) => {
      parentObj.registerB = parentObj.registersHL & 0xFF;
    },
    //LD B, (HL)
    //#0x46:
    (parentObj) => {
      parentObj.registerB = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    },
    //LD B, A
    //#0x47:
    (parentObj) => {
      parentObj.registerB = parentObj.registerA;
    },
    //LD C, B
    //#0x48:
    (parentObj) => {
      parentObj.registerC = parentObj.registerB;
    },
    //LD C, C
    //#0x49:
    (parentObj) => {
      //Do nothing...
    },
    //LD C, D
    //#0x4A:
    (parentObj) => {
      parentObj.registerC = parentObj.registerD;
    },
    //LD C, E
    //#0x4B:
    (parentObj) => {
      parentObj.registerC = parentObj.registerE;
    },
    //LD C, H
    //#0x4C:
    (parentObj) => {
      parentObj.registerC = parentObj.registersHL >> 8;
    },
    //LD C, L
    //#0x4D:
    (parentObj) => {
      parentObj.registerC = parentObj.registersHL & 0xFF;
    },
    //LD C, (HL)
    //#0x4E:
    (parentObj) => {
      parentObj.registerC = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    },
    //LD C, A
    //#0x4F:
    (parentObj) => {
      parentObj.registerC = parentObj.registerA;
    },
    //LD D, B
    //#0x50:
    (parentObj) => {
      parentObj.registerD = parentObj.registerB;
    },
    //LD D, C
    //#0x51:
    (parentObj) => {
      parentObj.registerD = parentObj.registerC;
    },
    //LD D, D
    //#0x52:
    (parentObj) => {
      //Do nothing...
    },
    //LD D, E
    //#0x53:
    (parentObj) => {
      parentObj.registerD = parentObj.registerE;
    },
    //LD D, H
    //#0x54:
    (parentObj) => {
      parentObj.registerD = parentObj.registersHL >> 8;
    },
    //LD D, L
    //#0x55:
    (parentObj) => {
      parentObj.registerD = parentObj.registersHL & 0xFF;
    },
    //LD D, (HL)
    //#0x56:
    (parentObj) => {
      parentObj.registerD = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    },
    //LD D, A
    //#0x57:
    (parentObj) => {
      parentObj.registerD = parentObj.registerA;
    },
    //LD E, B
    //#0x58:
    (parentObj) => {
      parentObj.registerE = parentObj.registerB;
    },
    //LD E, C
    //#0x59:
    (parentObj) => {
      parentObj.registerE = parentObj.registerC;
    },
    //LD E, D
    //#0x5A:
    (parentObj) => {
      parentObj.registerE = parentObj.registerD;
    },
    //LD E, E
    //#0x5B:
    (parentObj) => {
      //Do nothing...
    },
    //LD E, H
    //#0x5C:
    (parentObj) => {
      parentObj.registerE = parentObj.registersHL >> 8;
    },
    //LD E, L
    //#0x5D:
    (parentObj) => {
      parentObj.registerE = parentObj.registersHL & 0xFF;
    },
    //LD E, (HL)
    //#0x5E:
    (parentObj) => {
      parentObj.registerE = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    },
    //LD E, A
    //#0x5F:
    (parentObj) => {
      parentObj.registerE = parentObj.registerA;
    },
    //LD H, B
    //#0x60:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registerB << 8) | (parentObj.registersHL & 0xFF);
    },
    //LD H, C
    //#0x61:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registerC << 8) | (parentObj.registersHL & 0xFF);
    },
    //LD H, D
    //#0x62:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registerD << 8) | (parentObj.registersHL & 0xFF);
    },
    //LD H, E
    //#0x63:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registerE << 8) | (parentObj.registersHL & 0xFF);
    },
    //LD H, H
    //#0x64:
    (parentObj) => {
      //Do nothing...
    },
    //LD H, L
    //#0x65:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registersHL & 0xFF) * 0x101;
    },
    //LD H, (HL)
    //#0x66:
    (parentObj) => {
      parentObj.registersHL = (parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) << 8) | (parentObj.registersHL & 0xFF);
    },
    //LD H, A
    //#0x67:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registerA << 8) | (parentObj.registersHL & 0xFF);
    },
    //LD L, B
    //#0x68:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registersHL & 0xFF00) | parentObj.registerB;
    },
    //LD L, C
    //#0x69:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registersHL & 0xFF00) | parentObj.registerC;
    },
    //LD L, D
    //#0x6A:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registersHL & 0xFF00) | parentObj.registerD;
    },
    //LD L, E
    //#0x6B:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registersHL & 0xFF00) | parentObj.registerE;
    },
    //LD L, H
    //#0x6C:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registersHL & 0xFF00) | (parentObj.registersHL >> 8);
    },
    //LD L, L
    //#0x6D:
    (parentObj) => {
      //Do nothing...
    },
    //LD L, (HL)
    //#0x6E:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registersHL & 0xFF00) | parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    },
    //LD L, A
    //#0x6F:
    (parentObj) => {
      parentObj.registersHL = (parentObj.registersHL & 0xFF00) | parentObj.registerA;
    },
    //LD (HL), B
    //#0x70:
    (parentObj) => {
      parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.registerB);
    },
    //LD (HL), C
    //#0x71:
    (parentObj) => {
      parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.registerC);
    },
    //LD (HL), D
    //#0x72:
    (parentObj) => {
      parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.registerD);
    },
    //LD (HL), E
    //#0x73:
    (parentObj) => {
      parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.registerE);
    },
    //LD (HL), H
    //#0x74:
    (parentObj) => {
      parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.registersHL >> 8);
    },
    //LD (HL), L
    //#0x75:
    (parentObj) => {
      parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.registersHL & 0xFF);
    },
    //HALT
    //#0x76:
    (parentObj) => {
      //See if there's already an IRQ match:
      if ((parentObj.interruptsEnabled & parentObj.interruptsRequested & 0x1F) > 0) {
        if (!parentObj.cGBC && !parentObj.usedBootROM) {
          //HALT bug in the DMG CPU model (Program Counter fails to increment for one instruction after HALT):
          parentObj.skipPCIncrement = true;
        }
        else {
          //CGB gets around the HALT PC bug by doubling the hidden NOP.
          parentObj.CPUTicks += 4;
        }
      }
      else {
        //CPU is stalled until the next IRQ match:
        parentObj.calculateHALTPeriod();
      }
    },
    //LD (HL), A
    //#0x77:
    (parentObj) => {
      parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.registerA);
    },
    //LD A, B
    //#0x78:
    (parentObj) => {
      parentObj.registerA = parentObj.registerB;
    },
    //LD A, C
    //#0x79:
    (parentObj) => {
      parentObj.registerA = parentObj.registerC;
    },
    //LD A, D
    //#0x7A:
    (parentObj) => {
      parentObj.registerA = parentObj.registerD;
    },
    //LD A, E
    //#0x7B:
    (parentObj) => {
      parentObj.registerA = parentObj.registerE;
    },
    //LD A, H
    //#0x7C:
    (parentObj) => {
      parentObj.registerA = parentObj.registersHL >> 8;
    },
    //LD A, L
    //#0x7D:
    (parentObj) => {
      parentObj.registerA = parentObj.registersHL & 0xFF;
    },
    //LD, A, (HL)
    //#0x7E:
    (parentObj) => {
      parentObj.registerA = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    },
    //LD A, A
    //#0x7F:
    (parentObj) => {
      //Do Nothing...
    },
    //ADD A, B
    //#0x80:
    (parentObj) => {
      let dirtySum = parentObj.registerA + parentObj.registerB;
      parentObj.FHalfCarry = ((dirtySum & 0xF) < (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADD A, C
    //#0x81:
    (parentObj) => {
      let dirtySum = parentObj.registerA + parentObj.registerC;
      parentObj.FHalfCarry = ((dirtySum & 0xF) < (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADD A, D
    //#0x82:
    (parentObj) => {
      let dirtySum = parentObj.registerA + parentObj.registerD;
      parentObj.FHalfCarry = ((dirtySum & 0xF) < (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADD A, E
    //#0x83:
    (parentObj) => {
      let dirtySum = parentObj.registerA + parentObj.registerE;
      parentObj.FHalfCarry = ((dirtySum & 0xF) < (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADD A, H
    //#0x84:
    (parentObj) => {
      let dirtySum = parentObj.registerA + (parentObj.registersHL >> 8);
      parentObj.FHalfCarry = ((dirtySum & 0xF) < (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADD A, L
    //#0x85:
    (parentObj) => {
      let dirtySum = parentObj.registerA + (parentObj.registersHL & 0xFF);
      parentObj.FHalfCarry = ((dirtySum & 0xF) < (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADD A, (HL)
    //#0x86:
    (parentObj) => {
      let dirtySum = parentObj.registerA + parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
      parentObj.FHalfCarry = ((dirtySum & 0xF) < (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADD A, A
    //#0x87:
    (parentObj) => {
      parentObj.FHalfCarry = ((parentObj.registerA & 0x8) == 0x8);
      parentObj.FCarry = (parentObj.registerA > 0x7F);
      parentObj.registerA = (parentObj.registerA << 1) & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADC A, B
    //#0x88:
    (parentObj) => {
      let dirtySum = parentObj.registerA + parentObj.registerB + ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) + (parentObj.registerB & 0xF) + ((parentObj.FCarry) ? 1 : 0) > 0xF);
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADC A, C
    //#0x89:
    (parentObj) => {
      let dirtySum = parentObj.registerA + parentObj.registerC + ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) + (parentObj.registerC & 0xF) + ((parentObj.FCarry) ? 1 : 0) > 0xF);
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADC A, D
    //#0x8A:
    (parentObj) => {
      let dirtySum = parentObj.registerA + parentObj.registerD + ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) + (parentObj.registerD & 0xF) + ((parentObj.FCarry) ? 1 : 0) > 0xF);
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADC A, E
    //#0x8B:
    (parentObj) => {
      let dirtySum = parentObj.registerA + parentObj.registerE + ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) + (parentObj.registerE & 0xF) + ((parentObj.FCarry) ? 1 : 0) > 0xF);
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADC A, H
    //#0x8C:
    (parentObj) => {
      let tempValue = (parentObj.registersHL >> 8);
      let dirtySum = parentObj.registerA + tempValue + ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) + (tempValue & 0xF) + ((parentObj.FCarry) ? 1 : 0) > 0xF);
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADC A, L
    //#0x8D:
    (parentObj) => {
      let tempValue = (parentObj.registersHL & 0xFF);
      let dirtySum = parentObj.registerA + tempValue + ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) + (tempValue & 0xF) + ((parentObj.FCarry) ? 1 : 0) > 0xF);
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADC A, (HL)
    //#0x8E:
    (parentObj) => {
      let tempValue = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
      let dirtySum = parentObj.registerA + tempValue + ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) + (tempValue & 0xF) + ((parentObj.FCarry) ? 1 : 0) > 0xF);
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //ADC A, A
    //#0x8F:
    (parentObj) => {
      //shift left register A one bit for some ops here as an optimization:
      let dirtySum = (parentObj.registerA << 1) | ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((((parentObj.registerA << 1) & 0x1E) | ((parentObj.FCarry) ? 1 : 0)) > 0xF);
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //SUB A, B
    //#0x90:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.registerB;
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) < (dirtySum & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //SUB A, C
    //#0x91:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.registerC;
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) < (dirtySum & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //SUB A, D
    //#0x92:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.registerD;
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) < (dirtySum & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //SUB A, E
    //#0x93:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.registerE;
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) < (dirtySum & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //SUB A, H
    //#0x94:
    (parentObj) => {
      let dirtySum = parentObj.registerA - (parentObj.registersHL >> 8);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) < (dirtySum & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //SUB A, L
    //#0x95:
    (parentObj) => {
      let dirtySum = parentObj.registerA - (parentObj.registersHL & 0xFF);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) < (dirtySum & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //SUB A, (HL)
    //#0x96:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) < (dirtySum & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //SUB A, A
    //#0x97:
    (parentObj) => {
      //number - same number == 0
      parentObj.registerA = 0;
      parentObj.FHalfCarry = false;
      parentObj.FCarry = false;
      parentObj.FZero = true;
      parentObj.FSubtract = true;
    },
    //SBC A, B
    //#0x98:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.registerB - ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) - (parentObj.registerB & 0xF) - ((parentObj.FCarry) ? 1 : 0) < 0);
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = true;
    },
    //SBC A, C
    //#0x99:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.registerC - ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) - (parentObj.registerC & 0xF) - ((parentObj.FCarry) ? 1 : 0) < 0);
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = true;
    },
    //SBC A, D
    //#0x9A:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.registerD - ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) - (parentObj.registerD & 0xF) - ((parentObj.FCarry) ? 1 : 0) < 0);
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = true;
    },
    //SBC A, E
    //#0x9B:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.registerE - ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) - (parentObj.registerE & 0xF) - ((parentObj.FCarry) ? 1 : 0) < 0);
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = true;
    },
    //SBC A, H
    //#0x9C:
    (parentObj) => {
      let temp_var = parentObj.registersHL >> 8;
      let dirtySum = parentObj.registerA - temp_var - ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) - (temp_var & 0xF) - ((parentObj.FCarry) ? 1 : 0) < 0);
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = true;
    },
    //SBC A, L
    //#0x9D:
    (parentObj) => {
      let dirtySum = parentObj.registerA - (parentObj.registersHL & 0xFF) - ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) - (parentObj.registersHL & 0xF) - ((parentObj.FCarry) ? 1 : 0) < 0);
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = true;
    },
    //SBC A, (HL)
    //#0x9E:
    (parentObj) => {
      let temp_var = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
      let dirtySum = parentObj.registerA - temp_var - ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) - (temp_var & 0xF) - ((parentObj.FCarry) ? 1 : 0) < 0);
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = true;
    },
    //SBC A, A
    //#0x9F:
    (parentObj) => {
      //Optimized SBC A:
      if (parentObj.FCarry) {
        parentObj.FZero = false;
        parentObj.FSubtract = true;
        parentObj.FHalfCarry = true;
        parentObj.FCarry = true;
        parentObj.registerA = 0xFF;
      }
      else {
        parentObj.FHalfCarry = false;
        parentObj.FCarry = false;
        parentObj.FSubtract = true;
        parentObj.FZero = true;
        parentObj.registerA = 0;
      }
    },
    //AND B
    //#0xA0:
    (parentObj) => {
      parentObj.registerA &= parentObj.registerB;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FHalfCarry = true;
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
    },
    //AND C
    //#0xA1:
    (parentObj) => {
      parentObj.registerA &= parentObj.registerC;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FHalfCarry = true;
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
    },
    //AND D
    //#0xA2:
    (parentObj) => {
      parentObj.registerA &= parentObj.registerD;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FHalfCarry = true;
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
    },
    //AND E
    //#0xA3:
    (parentObj) => {
      parentObj.registerA &= parentObj.registerE;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FHalfCarry = true;
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
    },
    //AND H
    //#0xA4:
    (parentObj) => {
      parentObj.registerA &= (parentObj.registersHL >> 8);
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FHalfCarry = true;
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
    },
    //AND L
    //#0xA5:
    (parentObj) => {
      parentObj.registerA &= parentObj.registersHL;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FHalfCarry = true;
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
    },
    //AND (HL)
    //#0xA6:
    (parentObj) => {
      parentObj.registerA &= parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FHalfCarry = true;
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
    },
    //AND A
    //#0xA7:
    (parentObj) => {
      //number & same number = same number
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FHalfCarry = true;
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
    },
    //XOR B
    //#0xA8:
    (parentObj) => {
      parentObj.registerA ^= parentObj.registerB;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
      parentObj.FCarry = false;
    },
    //XOR C
    //#0xA9:
    (parentObj) => {
      parentObj.registerA ^= parentObj.registerC;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
      parentObj.FCarry = false;
    },
    //XOR D
    //#0xAA:
    (parentObj) => {
      parentObj.registerA ^= parentObj.registerD;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
      parentObj.FCarry = false;
    },
    //XOR E
    //#0xAB:
    (parentObj) => {
      parentObj.registerA ^= parentObj.registerE;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
      parentObj.FCarry = false;
    },
    //XOR H
    //#0xAC:
    (parentObj) => {
      parentObj.registerA ^= (parentObj.registersHL >> 8);
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
      parentObj.FCarry = false;
    },
    //XOR L
    //#0xAD:
    (parentObj) => {
      parentObj.registerA ^= (parentObj.registersHL & 0xFF);
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
      parentObj.FCarry = false;
    },
    //XOR (HL)
    //#0xAE:
    (parentObj) => {
      parentObj.registerA ^= parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
      parentObj.FCarry = false;
    },
    //XOR A
    //#0xAF:
    (parentObj) => {
      //number ^ same number == 0
      parentObj.registerA = 0;
      parentObj.FZero = true;
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
      parentObj.FCarry = false;
    },
    //OR B
    //#0xB0:
    (parentObj) => {
      parentObj.registerA |= parentObj.registerB;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
      parentObj.FHalfCarry = false;
    },
    //OR C
    //#0xB1:
    (parentObj) => {
      parentObj.registerA |= parentObj.registerC;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
      parentObj.FHalfCarry = false;
    },
    //OR D
    //#0xB2:
    (parentObj) => {
      parentObj.registerA |= parentObj.registerD;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
      parentObj.FHalfCarry = false;
    },
    //OR E
    //#0xB3:
    (parentObj) => {
      parentObj.registerA |= parentObj.registerE;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
      parentObj.FHalfCarry = false;
    },
    //OR H
    //#0xB4:
    (parentObj) => {
      parentObj.registerA |= (parentObj.registersHL >> 8);
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
      parentObj.FHalfCarry = false;
    },
    //OR L
    //#0xB5:
    (parentObj) => {
      parentObj.registerA |= (parentObj.registersHL & 0xFF);
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
      parentObj.FHalfCarry = false;
    },
    //OR (HL)
    //#0xB6:
    (parentObj) => {
      parentObj.registerA |= parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
      parentObj.FHalfCarry = false;
    },
    //OR A
    //#0xB7:
    (parentObj) => {
      //number | same number == same number
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
      parentObj.FHalfCarry = false;
    },
    //CP B
    //#0xB8:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.registerB;
      parentObj.FHalfCarry = ((dirtySum & 0xF) > (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //CP C
    //#0xB9:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.registerC;
      parentObj.FHalfCarry = ((dirtySum & 0xF) > (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //CP D
    //#0xBA:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.registerD;
      parentObj.FHalfCarry = ((dirtySum & 0xF) > (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //CP E
    //#0xBB:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.registerE;
      parentObj.FHalfCarry = ((dirtySum & 0xF) > (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //CP H
    //#0xBC:
    (parentObj) => {
      let dirtySum = parentObj.registerA - (parentObj.registersHL >> 8);
      parentObj.FHalfCarry = ((dirtySum & 0xF) > (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //CP L
    //#0xBD:
    (parentObj) => {
      let dirtySum = parentObj.registerA - (parentObj.registersHL & 0xFF);
      parentObj.FHalfCarry = ((dirtySum & 0xF) > (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //CP (HL)
    //#0xBE:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
      parentObj.FHalfCarry = ((dirtySum & 0xF) > (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //CP A
    //#0xBF:
    (parentObj) => {
      parentObj.FHalfCarry = false;
      parentObj.FCarry = false;
      parentObj.FZero = true;
      parentObj.FSubtract = true;
    },
    //RET !FZ
    //#0xC0:
    (parentObj) => {
      if (!parentObj.FZero) {
        parentObj.programCounter = (parentObj.memoryRead((parentObj.stackPointer + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.stackPointer](parentObj, parentObj.stackPointer);
        parentObj.stackPointer = (parentObj.stackPointer + 2) & 0xFFFF;
        parentObj.CPUTicks += 12;
      }
    },
    //POP BC
    //#0xC1:
    (parentObj) => {
      parentObj.registerC = parentObj.memoryReader[parentObj.stackPointer](parentObj, parentObj.stackPointer);
      parentObj.registerB = parentObj.memoryRead((parentObj.stackPointer + 1) & 0xFFFF);
      parentObj.stackPointer = (parentObj.stackPointer + 2) & 0xFFFF;
    },
    //JP !FZ, nn
    //#0xC2:
    (parentObj) => {
      if (!parentObj.FZero) {
        parentObj.programCounter = (parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
        parentObj.CPUTicks += 4;
      }
      else {
        parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
      }
    },
    //JP nn
    //#0xC3:
    (parentObj) => {
      parentObj.programCounter = (parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
    },
    //CALL !FZ, nn
    //#0xC4:
    (parentObj) => {
      if (!parentObj.FZero) {
        let temp_pc = (parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
        parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
        parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
        parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter >> 8);
        parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
        parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter & 0xFF);
        parentObj.programCounter = temp_pc;
        parentObj.CPUTicks += 12;
      }
      else {
        parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
      }
    },
    //PUSH BC
    //#0xC5:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.registerB);
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.registerC);
    },
    //ADD, n
    //#0xC6:
    (parentObj) => {
      let dirtySum = parentObj.registerA + parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      parentObj.FHalfCarry = ((dirtySum & 0xF) < (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //RST 0
    //#0xC7:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter >> 8);
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter & 0xFF);
      parentObj.programCounter = 0;
    },
    //RET FZ
    //#0xC8:
    (parentObj) => {
      if (parentObj.FZero) {
        parentObj.programCounter = (parentObj.memoryRead((parentObj.stackPointer + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.stackPointer](parentObj, parentObj.stackPointer);
        parentObj.stackPointer = (parentObj.stackPointer + 2) & 0xFFFF;
        parentObj.CPUTicks += 12;
      }
    },
    //RET
    //#0xC9:
    (parentObj) => {
      parentObj.programCounter = (parentObj.memoryRead((parentObj.stackPointer + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.stackPointer](parentObj, parentObj.stackPointer);
      parentObj.stackPointer = (parentObj.stackPointer + 2) & 0xFFFF;
    },
    //JP FZ, nn
    //#0xCA:
    (parentObj) => {
      if (parentObj.FZero) {
        parentObj.programCounter = (parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
        parentObj.CPUTicks += 4;
      }
      else {
        parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
      }
    },
    //Secondary OP Code Set:
    //#0xCB:
    (parentObj) => {
      let opcode = parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      //Increment the program counter to the next instruction:
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      //Get how many CPU cycles the current 0xCBXX op code counts for:
      parentObj.CPUTicks += parentObj.SecondaryTICKTable[opcode];
      //Execute secondary OP codes for the 0xCB OP code call.
      parentObj.CBOPCODE[opcode](parentObj);
    },
    //CALL FZ, nn
    //#0xCC:
    (parentObj) => {
      if (parentObj.FZero) {
        let temp_pc = (parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
        parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
        parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
        parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter >> 8);
        parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
        parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter & 0xFF);
        parentObj.programCounter = temp_pc;
        parentObj.CPUTicks += 12;
      }
      else {
        parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
      }
    },
    //CALL nn
    //#0xCD:
    (parentObj) => {
      let temp_pc = (parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter >> 8);
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter & 0xFF);
      parentObj.programCounter = temp_pc;
    },
    //ADC A, n
    //#0xCE:
    (parentObj) => {
      let tempValue = parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      let dirtySum = parentObj.registerA + tempValue + ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) + (tempValue & 0xF) + ((parentObj.FCarry) ? 1 : 0) > 0xF);
      parentObj.FCarry = (dirtySum > 0xFF);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
    },
    //RST 0x8
    //#0xCF:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter >> 8);
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter & 0xFF);
      parentObj.programCounter = 0x8;
    },
    //RET !FC
    //#0xD0:
    (parentObj) => {
      if (!parentObj.FCarry) {
        parentObj.programCounter = (parentObj.memoryRead((parentObj.stackPointer + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.stackPointer](parentObj, parentObj.stackPointer);
        parentObj.stackPointer = (parentObj.stackPointer + 2) & 0xFFFF;
        parentObj.CPUTicks += 12;
      }
    },
    //POP DE
    //#0xD1:
    (parentObj) => {
      parentObj.registerE = parentObj.memoryReader[parentObj.stackPointer](parentObj, parentObj.stackPointer);
      parentObj.registerD = parentObj.memoryRead((parentObj.stackPointer + 1) & 0xFFFF);
      parentObj.stackPointer = (parentObj.stackPointer + 2) & 0xFFFF;
    },
    //JP !FC, nn
    //#0xD2:
    (parentObj) => {
      if (!parentObj.FCarry) {
        parentObj.programCounter = (parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
        parentObj.CPUTicks += 4;
      }
      else {
        parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
      }
    },
    //0xD3 - Illegal
    //#0xD3:
    (parentObj) => {
      cout("Illegal op code 0xD3 called, pausing emulation.", 2);
      pausePlay();
    },
    //CALL !FC, nn
    //#0xD4:
    (parentObj) => {
      if (!parentObj.FCarry) {
        let temp_pc = (parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
        parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
        parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
        parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter >> 8);
        parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
        parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter & 0xFF);
        parentObj.programCounter = temp_pc;
        parentObj.CPUTicks += 12;
      }
      else {
        parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
      }
    },
    //PUSH DE
    //#0xD5:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.registerD);
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.registerE);
    },
    //SUB A, n
    //#0xD6:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) < (dirtySum & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //RST 0x10
    //#0xD7:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter >> 8);
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter & 0xFF);
      parentObj.programCounter = 0x10;
    },
    //RET FC
    //#0xD8:
    (parentObj) => {
      if (parentObj.FCarry) {
        parentObj.programCounter = (parentObj.memoryRead((parentObj.stackPointer + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.stackPointer](parentObj, parentObj.stackPointer);
        parentObj.stackPointer = (parentObj.stackPointer + 2) & 0xFFFF;
        parentObj.CPUTicks += 12;
      }
    },
    //RETI
    //#0xD9:
    (parentObj) => {
      parentObj.programCounter = (parentObj.memoryRead((parentObj.stackPointer + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.stackPointer](parentObj, parentObj.stackPointer);
      parentObj.stackPointer = (parentObj.stackPointer + 2) & 0xFFFF;
      //Immediate for HALT:
      parentObj.IRQEnableDelay = (parentObj.IRQEnableDelay == 2 || parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter) == 0x76) ? 1 : 2;
    },
    //JP FC, nn
    //#0xDA:
    (parentObj) => {
      if (parentObj.FCarry) {
        parentObj.programCounter = (parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
        parentObj.CPUTicks += 4;
      }
      else {
        parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
      }
    },
    //0xDB - Illegal
    //#0xDB:
    (parentObj) => {
      cout("Illegal op code 0xDB called, pausing emulation.", 2);
      pausePlay();
    },
    //CALL FC, nn
    //#0xDC:
    (parentObj) => {
      if (parentObj.FCarry) {
        let temp_pc = (parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
        parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
        parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
        parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter >> 8);
        parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
        parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter & 0xFF);
        parentObj.programCounter = temp_pc;
        parentObj.CPUTicks += 12;
      }
      else {
        parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
      }
    },
    //0xDD - Illegal
    //#0xDD:
    (parentObj) => {
      cout("Illegal op code 0xDD called, pausing emulation.", 2);
      pausePlay();
    },
    //SBC A, n
    //#0xDE:
    (parentObj) => {
      let temp_var = parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      let dirtySum = parentObj.registerA - temp_var - ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = ((parentObj.registerA & 0xF) - (temp_var & 0xF) - ((parentObj.FCarry) ? 1 : 0) < 0);
      parentObj.FCarry = (dirtySum < 0);
      parentObj.registerA = dirtySum & 0xFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = true;
    },
    //RST 0x18
    //#0xDF:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter >> 8);
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter & 0xFF);
      parentObj.programCounter = 0x18;
    },
    //LDH (n), A
    //#0xE0:
    (parentObj) => {
      parentObj.memoryHighWrite(parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter), parentObj.registerA);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
    },
    //POP HL
    //#0xE1:
    (parentObj) => {
      parentObj.registersHL = (parentObj.memoryRead((parentObj.stackPointer + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.stackPointer](parentObj, parentObj.stackPointer);
      parentObj.stackPointer = (parentObj.stackPointer + 2) & 0xFFFF;
    },
    //LD (0xFF00 + C), A
    //#0xE2:
    (parentObj) => {
      parentObj.memoryHighWriter[parentObj.registerC](parentObj, parentObj.registerC, parentObj.registerA);
    },
    //0xE3 - Illegal
    //#0xE3:
    (parentObj) => {
      cout("Illegal op code 0xE3 called, pausing emulation.", 2);
      pausePlay();
    },
    //0xE4 - Illegal
    //#0xE4:
    (parentObj) => {
      cout("Illegal op code 0xE4 called, pausing emulation.", 2);
      pausePlay();
    },
    //PUSH HL
    //#0xE5:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.registersHL >> 8);
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.registersHL & 0xFF);
    },
    //AND n
    //#0xE6:
    (parentObj) => {
      parentObj.registerA &= parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FHalfCarry = true;
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
    },
    //RST 0x20
    //#0xE7:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter >> 8);
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter & 0xFF);
      parentObj.programCounter = 0x20;
    },
    //ADD SP, n
    //#0xE8:
    (parentObj) => {
      let temp_value2 = (parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter) << 24) >> 24;
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      let temp_value = (parentObj.stackPointer + temp_value2) & 0xFFFF;
      temp_value2 = parentObj.stackPointer ^ temp_value2 ^ temp_value;
      parentObj.stackPointer = temp_value;
      parentObj.FCarry = ((temp_value2 & 0x100) == 0x100);
      parentObj.FHalfCarry = ((temp_value2 & 0x10) == 0x10);
      parentObj.FZero = false;
      parentObj.FSubtract = false;
    },
    //JP, (HL)
    //#0xE9:
    (parentObj) => {
      parentObj.programCounter = parentObj.registersHL;
    },
    //LD n, A
    //#0xEA:
    (parentObj) => {
      parentObj.memoryWrite((parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter), parentObj.registerA);
      parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
    },
    //0xEB - Illegal
    //#0xEB:
    (parentObj) => {
      cout("Illegal op code 0xEB called, pausing emulation.", 2);
      pausePlay();
    },
    //0xEC - Illegal
    //#0xEC:
    (parentObj) => {
      cout("Illegal op code 0xEC called, pausing emulation.", 2);
      pausePlay();
    },
    //0xED - Illegal
    //#0xED:
    (parentObj) => {
      cout("Illegal op code 0xED called, pausing emulation.", 2);
      pausePlay();
    },
    //XOR n
    //#0xEE:
    (parentObj) => {
      parentObj.registerA ^= parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.FSubtract = false;
      parentObj.FHalfCarry = false;
      parentObj.FCarry = false;
    },
    //RST 0x28
    //#0xEF:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter >> 8);
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter & 0xFF);
      parentObj.programCounter = 0x28;
    },
    //LDH A, (n)
    //#0xF0:
    (parentObj) => {
      parentObj.registerA = parentObj.memoryHighRead(parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter));
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
    },
    //POP AF
    //#0xF1:
    (parentObj) => {
      let temp_var = parentObj.memoryReader[parentObj.stackPointer](parentObj, parentObj.stackPointer);
      parentObj.FZero = (temp_var > 0x7F);
      parentObj.FSubtract = ((temp_var & 0x40) == 0x40);
      parentObj.FHalfCarry = ((temp_var & 0x20) == 0x20);
      parentObj.FCarry = ((temp_var & 0x10) == 0x10);
      parentObj.registerA = parentObj.memoryRead((parentObj.stackPointer + 1) & 0xFFFF);
      parentObj.stackPointer = (parentObj.stackPointer + 2) & 0xFFFF;
    },
    //LD A, (0xFF00 + C)
    //#0xF2:
    (parentObj) => {
      parentObj.registerA = parentObj.memoryHighReader[parentObj.registerC](parentObj, parentObj.registerC);
    },
    //DI
    //#0xF3:
    (parentObj) => {
      parentObj.IME = false;
      parentObj.IRQEnableDelay = 0;
    },
    //0xF4 - Illegal
    //#0xF4:
    (parentObj) => {
      cout("Illegal op code 0xF4 called, pausing emulation.", 2);
      pausePlay();
    },
    //PUSH AF
    //#0xF5:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.registerA);
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, ((parentObj.FZero) ? 0x80 : 0) | ((parentObj.FSubtract) ? 0x40 : 0) | ((parentObj.FHalfCarry) ? 0x20 : 0) | ((parentObj.FCarry) ? 0x10 : 0));
    },
    //OR n
    //#0xF6:
    (parentObj) => {
      parentObj.registerA |= parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.FZero = (parentObj.registerA == 0);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      parentObj.FSubtract = false;
      parentObj.FCarry = false;
      parentObj.FHalfCarry = false;
    },
    //RST 0x30
    //#0xF7:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter >> 8);
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter & 0xFF);
      parentObj.programCounter = 0x30;
    },
    //LDHL SP, n
    //#0xF8:
    (parentObj) => {
      let temp_var = (parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter) << 24) >> 24;
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      parentObj.registersHL = (parentObj.stackPointer + temp_var) & 0xFFFF;
      temp_var = parentObj.stackPointer ^ temp_var ^ parentObj.registersHL;
      parentObj.FCarry = ((temp_var & 0x100) == 0x100);
      parentObj.FHalfCarry = ((temp_var & 0x10) == 0x10);
      parentObj.FZero = false;
      parentObj.FSubtract = false;
    },
    //LD SP, HL
    //#0xF9:
    (parentObj) => {
      parentObj.stackPointer = parentObj.registersHL;
    },
    //LD A, (nn)
    //#0xFA:
    (parentObj) => {
      parentObj.registerA = parentObj.memoryRead((parentObj.memoryRead((parentObj.programCounter + 1) & 0xFFFF) << 8) | parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter));
      parentObj.programCounter = (parentObj.programCounter + 2) & 0xFFFF;
    },
    //EI
    //#0xFB:
    (parentObj) => {
      //Immediate for HALT:
      parentObj.IRQEnableDelay = (parentObj.IRQEnableDelay == 2 || parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter) == 0x76) ? 1 : 2;
    },
    //0xFC - Illegal
    //#0xFC:
    (parentObj) => {
      cout("Illegal op code 0xFC called, pausing emulation.", 2);
      pausePlay();
    },
    //0xFD - Illegal
    //#0xFD:
    (parentObj) => {
      cout("Illegal op code 0xFD called, pausing emulation.", 2);
      pausePlay();
    },
    //CP n
    //#0xFE:
    (parentObj) => {
      let dirtySum = parentObj.registerA - parentObj.memoryReader[parentObj.programCounter](parentObj, parentObj.programCounter);
      parentObj.programCounter = (parentObj.programCounter + 1) & 0xFFFF;
      parentObj.FHalfCarry = ((dirtySum & 0xF) > (parentObj.registerA & 0xF));
      parentObj.FCarry = (dirtySum < 0);
      parentObj.FZero = (dirtySum == 0);
      parentObj.FSubtract = true;
    },
    //RST 0x38
    //#0xFF:
    (parentObj) => {
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter >> 8);
      parentObj.stackPointer = (parentObj.stackPointer - 1) & 0xFFFF;
      parentObj.memoryWriter[parentObj.stackPointer](parentObj, parentObj.stackPointer, parentObj.programCounter & 0xFF);
      parentObj.programCounter = 0x38;
    }
  ];
  CBOPCODE: Array<(parentObj: GameBoyCore) => void> = [
  //RLC B
  //#0x00:
    (parentObj) => {
      parentObj.FCarry = (parentObj.registerB > 0x7F);
      parentObj.registerB = ((parentObj.registerB << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
      parentObj.FHalfCarry = false;
      parentObj.FSubtract = false;
      parentObj.FZero = (parentObj.registerB == 0);
    }
    //RLC C
    //#0x01:
    , (parentObj) => {
    parentObj.FCarry = (parentObj.registerC > 0x7F);
    parentObj.registerC = ((parentObj.registerC << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerC == 0);
  }
    //RLC D
    //#0x02:
    , (parentObj) => {
    parentObj.FCarry = (parentObj.registerD > 0x7F);
    parentObj.registerD = ((parentObj.registerD << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerD == 0);
  }
    //RLC E
    //#0x03:
    , (parentObj) => {
    parentObj.FCarry = (parentObj.registerE > 0x7F);
    parentObj.registerE = ((parentObj.registerE << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerE == 0);
  }
    //RLC H
    //#0x04:
    , (parentObj) => {
    parentObj.FCarry = (parentObj.registersHL > 0x7FFF);
    parentObj.registersHL = ((parentObj.registersHL << 1) & 0xFE00) | ((parentObj.FCarry) ? 0x100 : 0) | (parentObj.registersHL & 0xFF);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registersHL < 0x100);
  }
    //RLC L
    //#0x05:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registersHL & 0x80) == 0x80);
    parentObj.registersHL = (parentObj.registersHL & 0xFF00) | ((parentObj.registersHL << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0xFF) == 0);
  }
    //RLC (HL)
    //#0x06:
    , (parentObj) => {
    let temp_var = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    parentObj.FCarry = (temp_var > 0x7F);
    temp_var = ((temp_var << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, temp_var);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (temp_var == 0);
  }
    //RLC A
    //#0x07:
    , (parentObj) => {
    parentObj.FCarry = (parentObj.registerA > 0x7F);
    parentObj.registerA = ((parentObj.registerA << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerA == 0);
  }
    //RRC B
    //#0x08:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerB & 0x01) == 0x01);
    parentObj.registerB = ((parentObj.FCarry) ? 0x80 : 0) | (parentObj.registerB >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerB == 0);
  }
    //RRC C
    //#0x09:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerC & 0x01) == 0x01);
    parentObj.registerC = ((parentObj.FCarry) ? 0x80 : 0) | (parentObj.registerC >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerC == 0);
  }
    //RRC D
    //#0x0A:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerD & 0x01) == 0x01);
    parentObj.registerD = ((parentObj.FCarry) ? 0x80 : 0) | (parentObj.registerD >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerD == 0);
  }
    //RRC E
    //#0x0B:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerE & 0x01) == 0x01);
    parentObj.registerE = ((parentObj.FCarry) ? 0x80 : 0) | (parentObj.registerE >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerE == 0);
  }
    //RRC H
    //#0x0C:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registersHL & 0x0100) == 0x0100);
    parentObj.registersHL = ((parentObj.FCarry) ? 0x8000 : 0) | ((parentObj.registersHL >> 1) & 0xFF00) | (parentObj.registersHL & 0xFF);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registersHL < 0x100);
  }
    //RRC L
    //#0x0D:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registersHL & 0x01) == 0x01);
    parentObj.registersHL = (parentObj.registersHL & 0xFF00) | ((parentObj.FCarry) ? 0x80 : 0) | ((parentObj.registersHL & 0xFF) >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0xFF) == 0);
  }
    //RRC (HL)
    //#0x0E:
    , (parentObj) => {
    let temp_var = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    parentObj.FCarry = ((temp_var & 0x01) == 0x01);
    temp_var = ((parentObj.FCarry) ? 0x80 : 0) | (temp_var >> 1);
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, temp_var);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (temp_var == 0);
  }
    //RRC A
    //#0x0F:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerA & 0x01) == 0x01);
    parentObj.registerA = ((parentObj.FCarry) ? 0x80 : 0) | (parentObj.registerA >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerA == 0);
  }
    //RL B
    //#0x10:
    , (parentObj) => {
    let newFCarry = (parentObj.registerB > 0x7F);
    parentObj.registerB = ((parentObj.registerB << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerB == 0);
  }
    //RL C
    //#0x11:
    , (parentObj) => {
    let newFCarry = (parentObj.registerC > 0x7F);
    parentObj.registerC = ((parentObj.registerC << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerC == 0);
  }
    //RL D
    //#0x12:
    , (parentObj) => {
    let newFCarry = (parentObj.registerD > 0x7F);
    parentObj.registerD = ((parentObj.registerD << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerD == 0);
  }
    //RL E
    //#0x13:
    , (parentObj) => {
    let newFCarry = (parentObj.registerE > 0x7F);
    parentObj.registerE = ((parentObj.registerE << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerE == 0);
  }
    //RL H
    //#0x14:
    , (parentObj) => {
    let newFCarry = (parentObj.registersHL > 0x7FFF);
    parentObj.registersHL = ((parentObj.registersHL << 1) & 0xFE00) | ((parentObj.FCarry) ? 0x100 : 0) | (parentObj.registersHL & 0xFF);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registersHL < 0x100);
  }
    //RL L
    //#0x15:
    , (parentObj) => {
    let newFCarry = ((parentObj.registersHL & 0x80) == 0x80);
    parentObj.registersHL = (parentObj.registersHL & 0xFF00) | ((parentObj.registersHL << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0xFF) == 0);
  }
    //RL (HL)
    //#0x16:
    , (parentObj) => {
    let temp_var = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    let newFCarry = (temp_var > 0x7F);
    temp_var = ((temp_var << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
    parentObj.FCarry = newFCarry;
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, temp_var);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (temp_var == 0);
  }
    //RL A
    //#0x17:
    , (parentObj) => {
    let newFCarry = (parentObj.registerA > 0x7F);
    parentObj.registerA = ((parentObj.registerA << 1) & 0xFF) | ((parentObj.FCarry) ? 1 : 0);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerA == 0);
  }
    //RR B
    //#0x18:
    , (parentObj) => {
    let newFCarry = ((parentObj.registerB & 0x01) == 0x01);
    parentObj.registerB = ((parentObj.FCarry) ? 0x80 : 0) | (parentObj.registerB >> 1);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerB == 0);
  }
    //RR C
    //#0x19:
    , (parentObj) => {
    let newFCarry = ((parentObj.registerC & 0x01) == 0x01);
    parentObj.registerC = ((parentObj.FCarry) ? 0x80 : 0) | (parentObj.registerC >> 1);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerC == 0);
  }
    //RR D
    //#0x1A:
    , (parentObj) => {
    let newFCarry = ((parentObj.registerD & 0x01) == 0x01);
    parentObj.registerD = ((parentObj.FCarry) ? 0x80 : 0) | (parentObj.registerD >> 1);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerD == 0);
  }
    //RR E
    //#0x1B:
    , (parentObj) => {
    let newFCarry = ((parentObj.registerE & 0x01) == 0x01);
    parentObj.registerE = ((parentObj.FCarry) ? 0x80 : 0) | (parentObj.registerE >> 1);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerE == 0);
  }
    //RR H
    //#0x1C:
    , (parentObj) => {
    let newFCarry = ((parentObj.registersHL & 0x0100) == 0x0100);
    parentObj.registersHL = ((parentObj.FCarry) ? 0x8000 : 0) | ((parentObj.registersHL >> 1) & 0xFF00) | (parentObj.registersHL & 0xFF);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registersHL < 0x100);
  }
    //RR L
    //#0x1D:
    , (parentObj) => {
    let newFCarry = ((parentObj.registersHL & 0x01) == 0x01);
    parentObj.registersHL = (parentObj.registersHL & 0xFF00) | ((parentObj.FCarry) ? 0x80 : 0) | ((parentObj.registersHL & 0xFF) >> 1);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0xFF) == 0);
  }
    //RR (HL)
    //#0x1E:
    , (parentObj) => {
    let temp_var = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    let newFCarry = ((temp_var & 0x01) == 0x01);
    temp_var = ((parentObj.FCarry) ? 0x80 : 0) | (temp_var >> 1);
    parentObj.FCarry = newFCarry;
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, temp_var);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (temp_var == 0);
  }
    //RR A
    //#0x1F:
    , (parentObj) => {
    let newFCarry = ((parentObj.registerA & 0x01) == 0x01);
    parentObj.registerA = ((parentObj.FCarry) ? 0x80 : 0) | (parentObj.registerA >> 1);
    parentObj.FCarry = newFCarry;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerA == 0);
  }
    //SLA B
    //#0x20:
    , (parentObj) => {
    parentObj.FCarry = (parentObj.registerB > 0x7F);
    parentObj.registerB = (parentObj.registerB << 1) & 0xFF;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerB == 0);
  }
    //SLA C
    //#0x21:
    , (parentObj) => {
    parentObj.FCarry = (parentObj.registerC > 0x7F);
    parentObj.registerC = (parentObj.registerC << 1) & 0xFF;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerC == 0);
  }
    //SLA D
    //#0x22:
    , (parentObj) => {
    parentObj.FCarry = (parentObj.registerD > 0x7F);
    parentObj.registerD = (parentObj.registerD << 1) & 0xFF;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerD == 0);
  }
    //SLA E
    //#0x23:
    , (parentObj) => {
    parentObj.FCarry = (parentObj.registerE > 0x7F);
    parentObj.registerE = (parentObj.registerE << 1) & 0xFF;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerE == 0);
  }
    //SLA H
    //#0x24:
    , (parentObj) => {
    parentObj.FCarry = (parentObj.registersHL > 0x7FFF);
    parentObj.registersHL = ((parentObj.registersHL << 1) & 0xFE00) | (parentObj.registersHL & 0xFF);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registersHL < 0x100);
  }
    //SLA L
    //#0x25:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registersHL & 0x0080) == 0x0080);
    parentObj.registersHL = (parentObj.registersHL & 0xFF00) | ((parentObj.registersHL << 1) & 0xFF);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0xFF) == 0);
  }
    //SLA (HL)
    //#0x26:
    , (parentObj) => {
    let temp_var = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    parentObj.FCarry = (temp_var > 0x7F);
    temp_var = (temp_var << 1) & 0xFF;
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, temp_var);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (temp_var == 0);
  }
    //SLA A
    //#0x27:
    , (parentObj) => {
    parentObj.FCarry = (parentObj.registerA > 0x7F);
    parentObj.registerA = (parentObj.registerA << 1) & 0xFF;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerA == 0);
  }
    //SRA B
    //#0x28:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerB & 0x01) == 0x01);
    parentObj.registerB = (parentObj.registerB & 0x80) | (parentObj.registerB >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerB == 0);
  }
    //SRA C
    //#0x29:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerC & 0x01) == 0x01);
    parentObj.registerC = (parentObj.registerC & 0x80) | (parentObj.registerC >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerC == 0);
  }
    //SRA D
    //#0x2A:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerD & 0x01) == 0x01);
    parentObj.registerD = (parentObj.registerD & 0x80) | (parentObj.registerD >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerD == 0);
  }
    //SRA E
    //#0x2B:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerE & 0x01) == 0x01);
    parentObj.registerE = (parentObj.registerE & 0x80) | (parentObj.registerE >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerE == 0);
  }
    //SRA H
    //#0x2C:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registersHL & 0x0100) == 0x0100);
    parentObj.registersHL = ((parentObj.registersHL >> 1) & 0xFF00) | (parentObj.registersHL & 0x80FF);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registersHL < 0x100);
  }
    //SRA L
    //#0x2D:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registersHL & 0x0001) == 0x0001);
    parentObj.registersHL = (parentObj.registersHL & 0xFF80) | ((parentObj.registersHL & 0xFF) >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0xFF) == 0);
  }
    //SRA (HL)
    //#0x2E:
    , (parentObj) => {
    let temp_var = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    parentObj.FCarry = ((temp_var & 0x01) == 0x01);
    temp_var = (temp_var & 0x80) | (temp_var >> 1);
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, temp_var);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (temp_var == 0);
  }
    //SRA A
    //#0x2F:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerA & 0x01) == 0x01);
    parentObj.registerA = (parentObj.registerA & 0x80) | (parentObj.registerA >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerA == 0);
  }
    //SWAP B
    //#0x30:
    , (parentObj) => {
    parentObj.registerB = ((parentObj.registerB & 0xF) << 4) | (parentObj.registerB >> 4);
    parentObj.FZero = (parentObj.registerB == 0);
    parentObj.FCarry = false;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
  }
    //SWAP C
    //#0x31:
    , (parentObj) => {
    parentObj.registerC = ((parentObj.registerC & 0xF) << 4) | (parentObj.registerC >> 4);
    parentObj.FZero = (parentObj.registerC == 0);
    parentObj.FCarry = false;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
  }
    //SWAP D
    //#0x32:
    , (parentObj) => {
    parentObj.registerD = ((parentObj.registerD & 0xF) << 4) | (parentObj.registerD >> 4);
    parentObj.FZero = (parentObj.registerD == 0);
    parentObj.FCarry = false;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
  }
    //SWAP E
    //#0x33:
    , (parentObj) => {
    parentObj.registerE = ((parentObj.registerE & 0xF) << 4) | (parentObj.registerE >> 4);
    parentObj.FZero = (parentObj.registerE == 0);
    parentObj.FCarry = false;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
  }
    //SWAP H
    //#0x34:
    , (parentObj) => {
    parentObj.registersHL = ((parentObj.registersHL & 0xF00) << 4) | ((parentObj.registersHL & 0xF000) >> 4) | (parentObj.registersHL & 0xFF);
    parentObj.FZero = (parentObj.registersHL < 0x100);
    parentObj.FCarry = false;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
  }
    //SWAP L
    //#0x35:
    , (parentObj) => {
    parentObj.registersHL = (parentObj.registersHL & 0xFF00) | ((parentObj.registersHL & 0xF) << 4) | ((parentObj.registersHL & 0xF0) >> 4);
    parentObj.FZero = ((parentObj.registersHL & 0xFF) == 0);
    parentObj.FCarry = false;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
  }
    //SWAP (HL)
    //#0x36:
    , (parentObj) => {
    let temp_var = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    temp_var = ((temp_var & 0xF) << 4) | (temp_var >> 4);
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, temp_var);
    parentObj.FZero = (temp_var == 0);
    parentObj.FCarry = false;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
  }
    //SWAP A
    //#0x37:
    , (parentObj) => {
    parentObj.registerA = ((parentObj.registerA & 0xF) << 4) | (parentObj.registerA >> 4);
    parentObj.FZero = (parentObj.registerA == 0);
    parentObj.FCarry = false;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
  }
    //SRL B
    //#0x38:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerB & 0x01) == 0x01);
    parentObj.registerB >>= 1;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerB == 0);
  }
    //SRL C
    //#0x39:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerC & 0x01) == 0x01);
    parentObj.registerC >>= 1;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerC == 0);
  }
    //SRL D
    //#0x3A:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerD & 0x01) == 0x01);
    parentObj.registerD >>= 1;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerD == 0);
  }
    //SRL E
    //#0x3B:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerE & 0x01) == 0x01);
    parentObj.registerE >>= 1;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerE == 0);
  }
    //SRL H
    //#0x3C:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registersHL & 0x0100) == 0x0100);
    parentObj.registersHL = ((parentObj.registersHL >> 1) & 0xFF00) | (parentObj.registersHL & 0xFF);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registersHL < 0x100);
  }
    //SRL L
    //#0x3D:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registersHL & 0x0001) == 0x0001);
    parentObj.registersHL = (parentObj.registersHL & 0xFF00) | ((parentObj.registersHL & 0xFF) >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0xFF) == 0);
  }
    //SRL (HL)
    //#0x3E:
    , (parentObj) => {
    let temp_var = parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL);
    parentObj.FCarry = ((temp_var & 0x01) == 0x01);
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, temp_var >> 1);
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (temp_var < 2);
  }
    //SRL A
    //#0x3F:
    , (parentObj) => {
    parentObj.FCarry = ((parentObj.registerA & 0x01) == 0x01);
    parentObj.registerA >>= 1;
    parentObj.FHalfCarry = false;
    parentObj.FSubtract = false;
    parentObj.FZero = (parentObj.registerA == 0);
  }
    //BIT 0, B
    //#0x40:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerB & 0x01) == 0);
  }
    //BIT 0, C
    //#0x41:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerC & 0x01) == 0);
  }
    //BIT 0, D
    //#0x42:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerD & 0x01) == 0);
  }
    //BIT 0, E
    //#0x43:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerE & 0x01) == 0);
  }
    //BIT 0, H
    //#0x44:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x0100) == 0);
  }
    //BIT 0, L
    //#0x45:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x0001) == 0);
  }
    //BIT 0, (HL)
    //#0x46:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0x01) == 0);
  }
    //BIT 0, A
    //#0x47:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerA & 0x01) == 0);
  }
    //BIT 1, B
    //#0x48:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerB & 0x02) == 0);
  }
    //BIT 1, C
    //#0x49:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerC & 0x02) == 0);
  }
    //BIT 1, D
    //#0x4A:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerD & 0x02) == 0);
  }
    //BIT 1, E
    //#0x4B:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerE & 0x02) == 0);
  }
    //BIT 1, H
    //#0x4C:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x0200) == 0);
  }
    //BIT 1, L
    //#0x4D:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x0002) == 0);
  }
    //BIT 1, (HL)
    //#0x4E:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0x02) == 0);
  }
    //BIT 1, A
    //#0x4F:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerA & 0x02) == 0);
  }
    //BIT 2, B
    //#0x50:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerB & 0x04) == 0);
  }
    //BIT 2, C
    //#0x51:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerC & 0x04) == 0);
  }
    //BIT 2, D
    //#0x52:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerD & 0x04) == 0);
  }
    //BIT 2, E
    //#0x53:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerE & 0x04) == 0);
  }
    //BIT 2, H
    //#0x54:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x0400) == 0);
  }
    //BIT 2, L
    //#0x55:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x0004) == 0);
  }
    //BIT 2, (HL)
    //#0x56:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0x04) == 0);
  }
    //BIT 2, A
    //#0x57:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerA & 0x04) == 0);
  }
    //BIT 3, B
    //#0x58:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerB & 0x08) == 0);
  }
    //BIT 3, C
    //#0x59:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerC & 0x08) == 0);
  }
    //BIT 3, D
    //#0x5A:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerD & 0x08) == 0);
  }
    //BIT 3, E
    //#0x5B:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerE & 0x08) == 0);
  }
    //BIT 3, H
    //#0x5C:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x0800) == 0);
  }
    //BIT 3, L
    //#0x5D:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x0008) == 0);
  }
    //BIT 3, (HL)
    //#0x5E:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0x08) == 0);
  }
    //BIT 3, A
    //#0x5F:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerA & 0x08) == 0);
  }
    //BIT 4, B
    //#0x60:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerB & 0x10) == 0);
  }
    //BIT 4, C
    //#0x61:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerC & 0x10) == 0);
  }
    //BIT 4, D
    //#0x62:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerD & 0x10) == 0);
  }
    //BIT 4, E
    //#0x63:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerE & 0x10) == 0);
  }
    //BIT 4, H
    //#0x64:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x1000) == 0);
  }
    //BIT 4, L
    //#0x65:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x0010) == 0);
  }
    //BIT 4, (HL)
    //#0x66:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0x10) == 0);
  }
    //BIT 4, A
    //#0x67:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerA & 0x10) == 0);
  }
    //BIT 5, B
    //#0x68:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerB & 0x20) == 0);
  }
    //BIT 5, C
    //#0x69:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerC & 0x20) == 0);
  }
    //BIT 5, D
    //#0x6A:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerD & 0x20) == 0);
  }
    //BIT 5, E
    //#0x6B:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerE & 0x20) == 0);
  }
    //BIT 5, H
    //#0x6C:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x2000) == 0);
  }
    //BIT 5, L
    //#0x6D:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x0020) == 0);
  }
    //BIT 5, (HL)
    //#0x6E:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0x20) == 0);
  }
    //BIT 5, A
    //#0x6F:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerA & 0x20) == 0);
  }
    //BIT 6, B
    //#0x70:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerB & 0x40) == 0);
  }
    //BIT 6, C
    //#0x71:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerC & 0x40) == 0);
  }
    //BIT 6, D
    //#0x72:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerD & 0x40) == 0);
  }
    //BIT 6, E
    //#0x73:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerE & 0x40) == 0);
  }
    //BIT 6, H
    //#0x74:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x4000) == 0);
  }
    //BIT 6, L
    //#0x75:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x0040) == 0);
  }
    //BIT 6, (HL)
    //#0x76:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0x40) == 0);
  }
    //BIT 6, A
    //#0x77:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerA & 0x40) == 0);
  }
    //BIT 7, B
    //#0x78:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerB & 0x80) == 0);
  }
    //BIT 7, C
    //#0x79:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerC & 0x80) == 0);
  }
    //BIT 7, D
    //#0x7A:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerD & 0x80) == 0);
  }
    //BIT 7, E
    //#0x7B:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerE & 0x80) == 0);
  }
    //BIT 7, H
    //#0x7C:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x8000) == 0);
  }
    //BIT 7, L
    //#0x7D:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registersHL & 0x0080) == 0);
  }
    //BIT 7, (HL)
    //#0x7E:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0x80) == 0);
  }
    //BIT 7, A
    //#0x7F:
    , (parentObj) => {
    parentObj.FHalfCarry = true;
    parentObj.FSubtract = false;
    parentObj.FZero = ((parentObj.registerA & 0x80) == 0);
  }
    //RES 0, B
    //#0x80:
    , (parentObj) => {
    parentObj.registerB &= 0xFE;
  }
    //RES 0, C
    //#0x81:
    , (parentObj) => {
    parentObj.registerC &= 0xFE;
  }
    //RES 0, D
    //#0x82:
    , (parentObj) => {
    parentObj.registerD &= 0xFE;
  }
    //RES 0, E
    //#0x83:
    , (parentObj) => {
    parentObj.registerE &= 0xFE;
  }
    //RES 0, H
    //#0x84:
    , (parentObj) => {
    parentObj.registersHL &= 0xFEFF;
  }
    //RES 0, L
    //#0x85:
    , (parentObj) => {
    parentObj.registersHL &= 0xFFFE;
  }
    //RES 0, (HL)
    //#0x86:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0xFE);
  }
    //RES 0, A
    //#0x87:
    , (parentObj) => {
    parentObj.registerA &= 0xFE;
  }
    //RES 1, B
    //#0x88:
    , (parentObj) => {
    parentObj.registerB &= 0xFD;
  }
    //RES 1, C
    //#0x89:
    , (parentObj) => {
    parentObj.registerC &= 0xFD;
  }
    //RES 1, D
    //#0x8A:
    , (parentObj) => {
    parentObj.registerD &= 0xFD;
  }
    //RES 1, E
    //#0x8B:
    , (parentObj) => {
    parentObj.registerE &= 0xFD;
  }
    //RES 1, H
    //#0x8C:
    , (parentObj) => {
    parentObj.registersHL &= 0xFDFF;
  }
    //RES 1, L
    //#0x8D:
    , (parentObj) => {
    parentObj.registersHL &= 0xFFFD;
  }
    //RES 1, (HL)
    //#0x8E:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0xFD);
  }
    //RES 1, A
    //#0x8F:
    , (parentObj) => {
    parentObj.registerA &= 0xFD;
  }
    //RES 2, B
    //#0x90:
    , (parentObj) => {
    parentObj.registerB &= 0xFB;
  }
    //RES 2, C
    //#0x91:
    , (parentObj) => {
    parentObj.registerC &= 0xFB;
  }
    //RES 2, D
    //#0x92:
    , (parentObj) => {
    parentObj.registerD &= 0xFB;
  }
    //RES 2, E
    //#0x93:
    , (parentObj) => {
    parentObj.registerE &= 0xFB;
  }
    //RES 2, H
    //#0x94:
    , (parentObj) => {
    parentObj.registersHL &= 0xFBFF;
  }
    //RES 2, L
    //#0x95:
    , (parentObj) => {
    parentObj.registersHL &= 0xFFFB;
  }
    //RES 2, (HL)
    //#0x96:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0xFB);
  }
    //RES 2, A
    //#0x97:
    , (parentObj) => {
    parentObj.registerA &= 0xFB;
  }
    //RES 3, B
    //#0x98:
    , (parentObj) => {
    parentObj.registerB &= 0xF7;
  }
    //RES 3, C
    //#0x99:
    , (parentObj) => {
    parentObj.registerC &= 0xF7;
  }
    //RES 3, D
    //#0x9A:
    , (parentObj) => {
    parentObj.registerD &= 0xF7;
  }
    //RES 3, E
    //#0x9B:
    , (parentObj) => {
    parentObj.registerE &= 0xF7;
  }
    //RES 3, H
    //#0x9C:
    , (parentObj) => {
    parentObj.registersHL &= 0xF7FF;
  }
    //RES 3, L
    //#0x9D:
    , (parentObj) => {
    parentObj.registersHL &= 0xFFF7;
  }
    //RES 3, (HL)
    //#0x9E:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0xF7);
  }
    //RES 3, A
    //#0x9F:
    , (parentObj) => {
    parentObj.registerA &= 0xF7;
  }
    //RES 3, B
    //#0xA0:
    , (parentObj) => {
    parentObj.registerB &= 0xEF;
  }
    //RES 4, C
    //#0xA1:
    , (parentObj) => {
    parentObj.registerC &= 0xEF;
  }
    //RES 4, D
    //#0xA2:
    , (parentObj) => {
    parentObj.registerD &= 0xEF;
  }
    //RES 4, E
    //#0xA3:
    , (parentObj) => {
    parentObj.registerE &= 0xEF;
  }
    //RES 4, H
    //#0xA4:
    , (parentObj) => {
    parentObj.registersHL &= 0xEFFF;
  }
    //RES 4, L
    //#0xA5:
    , (parentObj) => {
    parentObj.registersHL &= 0xFFEF;
  }
    //RES 4, (HL)
    //#0xA6:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0xEF);
  }
    //RES 4, A
    //#0xA7:
    , (parentObj) => {
    parentObj.registerA &= 0xEF;
  }
    //RES 5, B
    //#0xA8:
    , (parentObj) => {
    parentObj.registerB &= 0xDF;
  }
    //RES 5, C
    //#0xA9:
    , (parentObj) => {
    parentObj.registerC &= 0xDF;
  }
    //RES 5, D
    //#0xAA:
    , (parentObj) => {
    parentObj.registerD &= 0xDF;
  }
    //RES 5, E
    //#0xAB:
    , (parentObj) => {
    parentObj.registerE &= 0xDF;
  }
    //RES 5, H
    //#0xAC:
    , (parentObj) => {
    parentObj.registersHL &= 0xDFFF;
  }
    //RES 5, L
    //#0xAD:
    , (parentObj) => {
    parentObj.registersHL &= 0xFFDF;
  }
    //RES 5, (HL)
    //#0xAE:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0xDF);
  }
    //RES 5, A
    //#0xAF:
    , (parentObj) => {
    parentObj.registerA &= 0xDF;
  }
    //RES 6, B
    //#0xB0:
    , (parentObj) => {
    parentObj.registerB &= 0xBF;
  }
    //RES 6, C
    //#0xB1:
    , (parentObj) => {
    parentObj.registerC &= 0xBF;
  }
    //RES 6, D
    //#0xB2:
    , (parentObj) => {
    parentObj.registerD &= 0xBF;
  }
    //RES 6, E
    //#0xB3:
    , (parentObj) => {
    parentObj.registerE &= 0xBF;
  }
    //RES 6, H
    //#0xB4:
    , (parentObj) => {
    parentObj.registersHL &= 0xBFFF;
  }
    //RES 6, L
    //#0xB5:
    , (parentObj) => {
    parentObj.registersHL &= 0xFFBF;
  }
    //RES 6, (HL)
    //#0xB6:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0xBF);
  }
    //RES 6, A
    //#0xB7:
    , (parentObj) => {
    parentObj.registerA &= 0xBF;
  }
    //RES 7, B
    //#0xB8:
    , (parentObj) => {
    parentObj.registerB &= 0x7F;
  }
    //RES 7, C
    //#0xB9:
    , (parentObj) => {
    parentObj.registerC &= 0x7F;
  }
    //RES 7, D
    //#0xBA:
    , (parentObj) => {
    parentObj.registerD &= 0x7F;
  }
    //RES 7, E
    //#0xBB:
    , (parentObj) => {
    parentObj.registerE &= 0x7F;
  }
    //RES 7, H
    //#0xBC:
    , (parentObj) => {
    parentObj.registersHL &= 0x7FFF;
  }
    //RES 7, L
    //#0xBD:
    , (parentObj) => {
    parentObj.registersHL &= 0xFF7F;
  }
    //RES 7, (HL)
    //#0xBE:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) & 0x7F);
  }
    //RES 7, A
    //#0xBF:
    , (parentObj) => {
    parentObj.registerA &= 0x7F;
  }
    //SET 0, B
    //#0xC0:
    , (parentObj) => {
    parentObj.registerB |= 0x01;
  }
    //SET 0, C
    //#0xC1:
    , (parentObj) => {
    parentObj.registerC |= 0x01;
  }
    //SET 0, D
    //#0xC2:
    , (parentObj) => {
    parentObj.registerD |= 0x01;
  }
    //SET 0, E
    //#0xC3:
    , (parentObj) => {
    parentObj.registerE |= 0x01;
  }
    //SET 0, H
    //#0xC4:
    , (parentObj) => {
    parentObj.registersHL |= 0x0100;
  }
    //SET 0, L
    //#0xC5:
    , (parentObj) => {
    parentObj.registersHL |= 0x01;
  }
    //SET 0, (HL)
    //#0xC6:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) | 0x01);
  }
    //SET 0, A
    //#0xC7:
    , (parentObj) => {
    parentObj.registerA |= 0x01;
  }
    //SET 1, B
    //#0xC8:
    , (parentObj) => {
    parentObj.registerB |= 0x02;
  }
    //SET 1, C
    //#0xC9:
    , (parentObj) => {
    parentObj.registerC |= 0x02;
  }
    //SET 1, D
    //#0xCA:
    , (parentObj) => {
    parentObj.registerD |= 0x02;
  }
    //SET 1, E
    //#0xCB:
    , (parentObj) => {
    parentObj.registerE |= 0x02;
  }
    //SET 1, H
    //#0xCC:
    , (parentObj) => {
    parentObj.registersHL |= 0x0200;
  }
    //SET 1, L
    //#0xCD:
    , (parentObj) => {
    parentObj.registersHL |= 0x02;
  }
    //SET 1, (HL)
    //#0xCE:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) | 0x02);
  }
    //SET 1, A
    //#0xCF:
    , (parentObj) => {
    parentObj.registerA |= 0x02;
  }
    //SET 2, B
    //#0xD0:
    , (parentObj) => {
    parentObj.registerB |= 0x04;
  }
    //SET 2, C
    //#0xD1:
    , (parentObj) => {
    parentObj.registerC |= 0x04;
  }
    //SET 2, D
    //#0xD2:
    , (parentObj) => {
    parentObj.registerD |= 0x04;
  }
    //SET 2, E
    //#0xD3:
    , (parentObj) => {
    parentObj.registerE |= 0x04;
  }
    //SET 2, H
    //#0xD4:
    , (parentObj) => {
    parentObj.registersHL |= 0x0400;
  }
    //SET 2, L
    //#0xD5:
    , (parentObj) => {
    parentObj.registersHL |= 0x04;
  }
    //SET 2, (HL)
    //#0xD6:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) | 0x04);
  }
    //SET 2, A
    //#0xD7:
    , (parentObj) => {
    parentObj.registerA |= 0x04;
  }
    //SET 3, B
    //#0xD8:
    , (parentObj) => {
    parentObj.registerB |= 0x08;
  }
    //SET 3, C
    //#0xD9:
    , (parentObj) => {
    parentObj.registerC |= 0x08;
  }
    //SET 3, D
    //#0xDA:
    , (parentObj) => {
    parentObj.registerD |= 0x08;
  }
    //SET 3, E
    //#0xDB:
    , (parentObj) => {
    parentObj.registerE |= 0x08;
  }
    //SET 3, H
    //#0xDC:
    , (parentObj) => {
    parentObj.registersHL |= 0x0800;
  }
    //SET 3, L
    //#0xDD:
    , (parentObj) => {
    parentObj.registersHL |= 0x08;
  }
    //SET 3, (HL)
    //#0xDE:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) | 0x08);
  }
    //SET 3, A
    //#0xDF:
    , (parentObj) => {
    parentObj.registerA |= 0x08;
  }
    //SET 4, B
    //#0xE0:
    , (parentObj) => {
    parentObj.registerB |= 0x10;
  }
    //SET 4, C
    //#0xE1:
    , (parentObj) => {
    parentObj.registerC |= 0x10;
  }
    //SET 4, D
    //#0xE2:
    , (parentObj) => {
    parentObj.registerD |= 0x10;
  }
    //SET 4, E
    //#0xE3:
    , (parentObj) => {
    parentObj.registerE |= 0x10;
  }
    //SET 4, H
    //#0xE4:
    , (parentObj) => {
    parentObj.registersHL |= 0x1000;
  }
    //SET 4, L
    //#0xE5:
    , (parentObj) => {
    parentObj.registersHL |= 0x10;
  }
    //SET 4, (HL)
    //#0xE6:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) | 0x10);
  }
    //SET 4, A
    //#0xE7:
    , (parentObj) => {
    parentObj.registerA |= 0x10;
  }
    //SET 5, B
    //#0xE8:
    , (parentObj) => {
    parentObj.registerB |= 0x20;
  }
    //SET 5, C
    //#0xE9:
    , (parentObj) => {
    parentObj.registerC |= 0x20;
  }
    //SET 5, D
    //#0xEA:
    , (parentObj) => {
    parentObj.registerD |= 0x20;
  }
    //SET 5, E
    //#0xEB:
    , (parentObj) => {
    parentObj.registerE |= 0x20;
  }
    //SET 5, H
    //#0xEC:
    , (parentObj) => {
    parentObj.registersHL |= 0x2000;
  }
    //SET 5, L
    //#0xED:
    , (parentObj) => {
    parentObj.registersHL |= 0x20;
  }
    //SET 5, (HL)
    //#0xEE:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) | 0x20);
  }
    //SET 5, A
    //#0xEF:
    , (parentObj) => {
    parentObj.registerA |= 0x20;
  }
    //SET 6, B
    //#0xF0:
    , (parentObj) => {
    parentObj.registerB |= 0x40;
  }
    //SET 6, C
    //#0xF1:
    , (parentObj) => {
    parentObj.registerC |= 0x40;
  }
    //SET 6, D
    //#0xF2:
    , (parentObj) => {
    parentObj.registerD |= 0x40;
  }
    //SET 6, E
    //#0xF3:
    , (parentObj) => {
    parentObj.registerE |= 0x40;
  }
    //SET 6, H
    //#0xF4:
    , (parentObj) => {
    parentObj.registersHL |= 0x4000;
  }
    //SET 6, L
    //#0xF5:
    , (parentObj) => {
    parentObj.registersHL |= 0x40;
  }
    //SET 6, (HL)
    //#0xF6:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) | 0x40);
  }
    //SET 6, A
    //#0xF7:
    , (parentObj) => {
    parentObj.registerA |= 0x40;
  }
    //SET 7, B
    //#0xF8:
    , (parentObj) => {
    parentObj.registerB |= 0x80;
  }
    //SET 7, C
    //#0xF9:
    , (parentObj) => {
    parentObj.registerC |= 0x80;
  }
    //SET 7, D
    //#0xFA:
    , (parentObj) => {
    parentObj.registerD |= 0x80;
  }
    //SET 7, E
    //#0xFB:
    , (parentObj) => {
    parentObj.registerE |= 0x80;
  }
    //SET 7, H
    //#0xFC:
    , (parentObj) => {
    parentObj.registersHL |= 0x8000;
  }
    //SET 7, L
    //#0xFD:
    , (parentObj) => {
    parentObj.registersHL |= 0x80;
  }
    //SET 7, (HL)
    //#0xFE:
    , (parentObj) => {
    parentObj.memoryWriter[parentObj.registersHL](parentObj, parentObj.registersHL, parentObj.memoryReader[parentObj.registersHL](parentObj, parentObj.registersHL) | 0x80);
  }
    //SET 7, A
    //#0xFF:
    , (parentObj) => {
    parentObj.registerA |= 0x80;
  }
  ];
  TICKTable: TNextArray | number[] = [//Number of machine cycles for each instruction:
    4, 12,  8,  8,  4,  4,  8,  4,     20,  8,  8, 8,  4,  4, 8,  4,        //0
    4, 12,  8,  8,  4,  4,  8,  4,     12,  8,  8, 8,  4,  4, 8,  4,        //1
    8, 12,  8,  8,  4,  4,  8,  4,      8,  8,  8, 8,  4,  4, 8,  4,        //2
    8, 12,  8,  8, 12, 12, 12,  4,      8,  8,  8, 8,  4,  4, 8,  4,        //3

    4,  4,  4,  4,  4,  4,  8,  4,      4,  4,  4, 4,  4,  4, 8,  4,        //4
    4,  4,  4,  4,  4,  4,  8,  4,      4,  4,  4, 4,  4,  4, 8,  4,        //5
    4,  4,  4,  4,  4,  4,  8,  4,      4,  4,  4, 4,  4,  4, 8,  4,        //6
    8,  8,  8,  8,  8,  8,  4,  8,      4,  4,  4, 4,  4,  4, 8,  4,        //7

    4,  4,  4,  4,  4,  4,  8,  4,      4,  4,  4, 4,  4,  4, 8,  4,        //8
    4,  4,  4,  4,  4,  4,  8,  4,      4,  4,  4, 4,  4,  4, 8,  4,        //9
    4,  4,  4,  4,  4,  4,  8,  4,      4,  4,  4, 4,  4,  4, 8,  4,        //A
    4,  4,  4,  4,  4,  4,  8,  4,      4,  4,  4, 4,  4,  4, 8,  4,        //B

    8, 12, 12, 16, 12, 16,  8, 16,      8, 16, 12, 0, 12, 24, 8, 16,        //C
    8, 12, 12,  4, 12, 16,  8, 16,      8, 16, 12, 4, 12,  4, 8, 16,        //D
    12, 12,  8,  4,  4, 16,  8, 16,     16,  4, 16, 4,  4,  4, 8, 16,       //E
    12, 12,  8,  4,  4, 16,  8, 16,     12,  8, 16, 4,  0,  4, 8, 16        //F
  ];
  SecondaryTICKTable: TNextArray | number[] = [//Number of machine cycles for each 0xCBXX instruction:
    8, 8, 8, 8, 8, 8, 16, 8,        8, 8, 8, 8, 8, 8, 16, 8,                //0
    8, 8, 8, 8, 8, 8, 16, 8,        8, 8, 8, 8, 8, 8, 16, 8,                //1
    8, 8, 8, 8, 8, 8, 16, 8,        8, 8, 8, 8, 8, 8, 16, 8,                //2
    8, 8, 8, 8, 8, 8, 16, 8,        8, 8, 8, 8, 8, 8, 16, 8,                //3

    8, 8, 8, 8, 8, 8, 12, 8,        8, 8, 8, 8, 8, 8, 12, 8,                //4
    8, 8, 8, 8, 8, 8, 12, 8,        8, 8, 8, 8, 8, 8, 12, 8,                //5
    8, 8, 8, 8, 8, 8, 12, 8,        8, 8, 8, 8, 8, 8, 12, 8,                //6
    8, 8, 8, 8, 8, 8, 12, 8,        8, 8, 8, 8, 8, 8, 12, 8,                //7

    8, 8, 8, 8, 8, 8, 16, 8,        8, 8, 8, 8, 8, 8, 16, 8,                //8
    8, 8, 8, 8, 8, 8, 16, 8,        8, 8, 8, 8, 8, 8, 16, 8,                //9
    8, 8, 8, 8, 8, 8, 16, 8,        8, 8, 8, 8, 8, 8, 16, 8,                //A
    8, 8, 8, 8, 8, 8, 16, 8,        8, 8, 8, 8, 8, 8, 16, 8,                //B

    8, 8, 8, 8, 8, 8, 16, 8,        8, 8, 8, 8, 8, 8, 16, 8,                //C
    8, 8, 8, 8, 8, 8, 16, 8,        8, 8, 8, 8, 8, 8, 16, 8,                //D
    8, 8, 8, 8, 8, 8, 16, 8,        8, 8, 8, 8, 8, 8, 16, 8,                //E
    8, 8, 8, 8, 8, 8, 16, 8,        8, 8, 8, 8, 8, 8, 16, 8                 //F
  ];

  constructor(canvas: GameBoyCanvas, ROMImage: string) {
    this.canvas = canvas;                                 //Canvas DOM object for drawing out the graphics to.
    this.ROMImage = ROMImage;
    this.updateGBBGPalette = this.updateGBColorizedBGPalette;
    this.updateGBOBJPalette = this.updateGBRegularOBJPalette;
    //Compile the LCD controller functions.
    this.initializeLCDController();
    this.initializeAudioStartState();
    this.initializeTiming();
    //Initialize the white noise cache tables ahead of time:
    this.intializeWhiteNoise();
  }
  returnFromRTCState() {
    //deBugLog("This is returnFromRTCState");
    if (typeof this.openRTC == "function" && this.cTIMER) {
      let rtcData: Array<number | boolean> = this.openRTC(this.name);
      let index: number = 0;
      this.lastIteration = rtcData[index++] as number;
      this.RTCisLatched = rtcData[index++] as boolean;
      this.latchedSeconds = rtcData[index++] as number;
      this.latchedMinutes = rtcData[index++] as number;
      this.latchedHours = rtcData[index++] as number;
      this.latchedLDays = rtcData[index++] as number;
      this.latchedHDays = rtcData[index++] as number;
      this.RTCSeconds = rtcData[index++] as number;
      this.RTCMinutes = rtcData[index++] as number;
      this.RTCHours = rtcData[index++] as number;
      this.RTCDays = rtcData[index++] as number;
      this.RTCDayOverFlow = rtcData[index++] as boolean;
      this.RTCHALT = rtcData[index] as boolean;
    }
  }
  start() {
    //deBugLog("This is GameBoyCore-start");
    this.initMemory(); //Write the startup memory.
    this.ROMLoad(); //Load the ROM into memory and get cartridge information from it.
    this.initLCD(); //Initialize the graphics.
    this.initSound(); //Sound object initialization.
    this.run(); //Start the emulation.
  }
  initMemory() {
    //deBugLog("This is initMemory");
    //Initialize the RAM:
    this.memory = this.getTypedArray(0x10000, 0, "uint8");
    this.frameBuffer = this.getTypedArray(23040, 0xF8F8F8, "int32");
    this.BGCHRBank1.array = this.getTypedArray(0x800, 0, "uint8");
    this.TICKTable = this.toTypedArray(this.TICKTable as TNextArray, "uint8");
    this.SecondaryTICKTable = this.toTypedArray(this.SecondaryTICKTable as TNextArray, "uint8");
    this.channel3PCM = this.getTypedArray(0x20, 0, "int8");
  }
  generateCacheArray(tileAmount: number): Array<ArrayObject> {
    //deBugLog("This is generateCacheArray");
    let tileArray: Array<ArrayObject> = [];
    let tileNumber: number = 0;
    while (tileNumber < tileAmount) {
      let object = new ArrayObject();
      object.array = this.getTypedArray(64, 0, "uint8");
      tileArray[tileNumber] = object;
      tileNumber += 1;
    }
    return tileArray;
  }
  initSkipBootstrap() {
    //deBugLog("This is initSkipBootstrap");
    let index: number = 0xFF;
    while (index >= 0) {
      if (index >= 0x30 && index < 0x40) {
        this.memoryWrite(0xFF00 | index, this.ffxxDump[index]);
      }
      else {
        switch (index) {
          case 0x00:
          case 0x01:
          case 0x02:
          case 0x05:
          case 0x07:
          case 0x0F:
          case 0xFF:
            this.memoryWrite(0xFF00 | index, this.ffxxDump[index]);
            break;
          default:
            this.memory[0xFF00 | index] = this.ffxxDump[index];
        }
      }
      index -= 1;
    }
    if (this.cGBC) {
      this.memory[0xFF6C] = 0xFE;
      this.memory[0xFF74] = 0xFE;
    }
    else {
      this.memory[0xFF48] = 0xFF;
      this.memory[0xFF49] = 0xFF;
      this.memory[0xFF6C] = 0xFF;
      this.memory[0xFF74] = 0xFF;
    }
    //Start as an unset device:
    cout("Starting without the GBC boot ROM.", 0);
    this.registerA = (this.cGBC) ? 0x11 : 0x1;
    this.registerB = 0;
    this.registerC = 0x13;
    this.registerD = 0;
    this.registerE = 0xD8;
    this.FZero = true;
    this.FSubtract = false;
    this.FHalfCarry = true;
    this.FCarry = true;
    this.registersHL = 0x014D;
    this.LCDCONTROL = this.LINECONTROL;
    this.IME = false;
    this.IRQLineMatched = 0;
    this.interruptsRequested = 225;
    this.interruptsEnabled = 0;
    this.hdmaRunning = false;
    this.CPUTicks = 12;
    this.STATTracker = 0;
    this.modeSTAT = 1;
    this.spriteCount = 252;
    this.LYCMatchTriggerSTAT = false;
    this.mode2TriggerSTAT = false;
    this.mode1TriggerSTAT = false;
    this.mode0TriggerSTAT = false;
    this.LCDisOn = true;
    this.channel1FrequencyTracker = 0x2000;
    this.channel1DutyTracker = 0;
    this.channel1CachedDuty = this.dutyLookup[2];
    this.channel1totalLength = 0;
    this.channel1envelopeVolume = 0;
    this.channel1envelopeType = false;
    this.channel1envelopeSweeps = 0;
    this.channel1envelopeSweepsLast = 0;
    this.channel1consecutive = true;
    this.channel1frequency = 1985;
    this.channel1SweepFault = true;
    this.channel1ShadowFrequency = 1985;
    this.channel1timeSweep = 1;
    this.channel1lastTimeSweep = 0;
    this.channel1numSweep = 0;
    this.channel1frequencySweepDivider = 0;
    this.channel1decreaseSweep = false;
    this.channel2FrequencyTracker = 0x2000;
    this.channel2DutyTracker = 0;
    this.channel2CachedDuty = this.dutyLookup[2];
    this.channel2totalLength = 0;
    this.channel2envelopeVolume = 0;
    this.channel2envelopeType = false;
    this.channel2envelopeSweeps = 0;
    this.channel2envelopeSweepsLast = 0;
    this.channel2consecutive = true;
    this.channel2frequency = 0;
    this.channel3canPlay = false;
    this.channel3totalLength = 0;
    this.channel3patternType = 4;
    this.channel3frequency = 0;
    this.channel3consecutive = true;
    this.channel3Counter = 0x418;
    this.channel4FrequencyPeriod = 8;
    this.channel4totalLength = 0;
    this.channel4envelopeVolume = 0;
    this.channel4currentVolume = 0;
    this.channel4envelopeType = false;
    this.channel4envelopeSweeps = 0;
    this.channel4envelopeSweepsLast = 0;
    this.channel4consecutive = true;
    this.channel4BitRange = 0x7FFF;
    this.channel4VolumeShifter = 15;
    this.channel1FrequencyCounter = 0x200;
    this.channel2FrequencyCounter = 0x200;
    this.channel3Counter = 0x800;
    this.channel3FrequencyPeriod = 0x800;
    this.channel3lastSampleLookup = 0;
    this.channel4lastSampleLookup = 0;
    this.VinLeftChannelMasterVolume = 1;
    this.VinRightChannelMasterVolume = 1;
    this.soundMasterEnabled = true;
    this.leftChannel1 = true;
    this.leftChannel2 = true;
    this.leftChannel3 = true;
    this.leftChannel4 = true;
    this.rightChannel1 = true;
    this.rightChannel2 = true;
    this.rightChannel3 = false;
    this.rightChannel4 = false;
    this.DIVTicks = 27044;
    this.LCDTicks = 160;
    this.timerTicks = 0;
    this.TIMAEnabled = false;
    this.TACClocker = 1024;
    this.serialTimer = 0;
    this.serialShiftTimer = 0;
    this.serialShiftTimerAllocated = 0;
    this.IRQEnableDelay = 0;
    this.actualScanLine = 144;
    this.lastUnrenderedLine = 0;
    this.gfxWindowDisplay = false;
    this.gfxSpriteShow = false;
    this.gfxSpriteNormalHeight = true;
    this.bgEnabled = true;
    this.BGPriorityEnabled = true;
    this.gfxWindowCHRBankPosition = 0;
    this.gfxBackgroundCHRBankPosition = 0;
    this.gfxBackgroundBankOffset = 0;
    this.windowY = 0;
    this.windowX = 0;
    this.drewBlank = 0;
    this.midScanlineOffset = -1;
    this.currentX = 0;
  }
  initBootstrap() {
    //deBugLog("This is initBootstrap")
    //Start as an unset device:
    cout("Starting the selected boot ROM.", 0);
    this.programCounter = 0;
    this.stackPointer = 0;
    this.IME = false;
    this.LCDTicks = 0;
    this.DIVTicks = 0;
    this.registerA = 0;
    this.registerB = 0;
    this.registerC = 0;
    this.registerD = 0;
    this.registerE = 0;
    this.FZero = false;
    this.FSubtract = false;
    this.FHalfCarry = false;
    this.FCarry = false;
    this.registersHL = 0;
    this.leftChannel1 = false;
    this.leftChannel2 = false;
    this.leftChannel3 = false;
    this.leftChannel4 = false;
    this.rightChannel1 = false;
    this.rightChannel2 = false;
    this.rightChannel3 = false;
    this.rightChannel4 = false;
    this.channel2frequency = 0;
    this.channel1frequency = 0;
    this.channel4consecutive = false;
    this.channel2consecutive = false;
    this.channel1consecutive = false;
    this.VinLeftChannelMasterVolume = 8;
    this.VinRightChannelMasterVolume = 8;
    this.memory[0xFF00] = 0xF; //Set the joypad state.
  }
  ROMLoad() {
    //deBugLog("This is ROMLoad");
    //Load the first two ROM banks (0x0000 - 0x7FFF) into regular gameboy memory:
    this.ROM = [] as Object as TNextArray;
    this.usedBootROM = settings[1] as boolean;
    let maxLength: number = this.ROMImage.length;
    if (maxLength < 0x4000) {
      return;
    }
    this.ROM = this.getTypedArray(maxLength, 0, "uint8");
    let romIndex: number = 0;
    if (this.usedBootROM) {
      if (!settings[11]) {
        //Patch in the GBC boot ROM into the memory map:
        while (romIndex < 0x100) {
          this.memory[romIndex] = this.GBCBOOTROM[romIndex]; //Load in the GameBoy Color BOOT ROM.
          this.ROM[romIndex] = (this.ROMImage.charCodeAt(romIndex) & 0xFF); //Decode the ROM binary for the switch out.
          romIndex += 1;
        }
        while (romIndex < 0x200) {
          this.ROM[romIndex] = (this.ROMImage.charCodeAt(romIndex) & 0xFF); //Load in the game ROM.
          this.memory[romIndex] = this.ROM[romIndex];
          romIndex += 1;
        }
        while (romIndex < 0x900) {
          this.memory[romIndex] = this.GBCBOOTROM[romIndex - 0x100]; //Load in the GameBoy Color BOOT ROM.
          this.ROM[romIndex] = (this.ROMImage.charCodeAt(romIndex) & 0xFF); //Decode the ROM binary for the switch out.
          romIndex += 1;
        }
        this.usedGBCBootROM = true;
      }
      else {
        //Patch in the GBC boot ROM into the memory map:
        while (romIndex < 0x100) {
          this.memory[romIndex] = this.GBBOOTROM[romIndex]; //Load in the GameBoy Color BOOT ROM.
          this.ROM[romIndex] = (this.ROMImage.charCodeAt(romIndex) & 0xFF); //Decode the ROM binary for the switch out.
          romIndex += 1;
        }
      }
      while (romIndex < 0x4000) {
        this.ROM[romIndex] = (this.ROMImage.charCodeAt(romIndex) & 0xFF); //Load in the game ROM.
        this.memory[romIndex] = this.ROM[romIndex]
        romIndex += 1;
      }
    }
    else {
      //Don't load in the boot ROM:
      while (romIndex < 0x4000) {
        this.ROM[romIndex] = (this.ROMImage.charCodeAt(romIndex) & 0xFF); //Load in the game ROM.
        this.memory[romIndex] = this.ROM[romIndex];
        romIndex += 1;
      }
    }
    //Finish the decoding of the ROM binary:
    while (romIndex < maxLength) {
      this.ROM[romIndex] = (this.ROMImage.charCodeAt(romIndex) & 0xFF);
      romIndex += 1;
    }
    this.ROMBankEdge = Math.floor(this.ROM.length / 0x4000);
    //Set up the emulator for the cartidge specifics:
    this.interpretCartridge();
    //Check for IRQ matching upon initialization:
    this.checkIRQMatching();
  }
  getROMImage(): string | number {
    //Return the binary version of the ROM image currently running:
    if (this.ROMImage.length > 0) {
      return this.ROMImage.length;
    }
    let length = this.ROM.length;
    for (let index = 0; index < length; index++) {
      this.ROMImage += String.fromCharCode(this.ROM[index]);
    }
    return this.ROMImage;
  }
  interpretCartridge() {
    //deBugLog("This is interpretCartridge");
    // ROM name
    for (let index = 0x134; index < 0x13F; index++) {
      if (this.ROMImage.charCodeAt(index) > 0) {
        this.name += this.ROMImage[index];
      }
    }
    // ROM game code (for newer games)
    for (let index = 0x13F; index < 0x143; index++) {
      if (this.ROMImage.charCodeAt(index) > 0) {
        this.gameCode += this.ROMImage[index];
      }
    }
    cout("Game Code: " + this.gameCode, 0);
    // Cartridge type
    this.cartridgeType = this.ROM[0x147];
    cout("Cartridge type #" + this.cartridgeType, 0);
    //Map out ROM cartridge sub-types.
    let MBCType = "";
    switch (this.cartridgeType) {
      case 0x00:
      //ROM w/o bank switching
        if (!settings[9]) {
          MBCType = "ROM";
          break;
        }
      case 0x01:
        this.cMBC1 = true;
        MBCType = "MBC1";
        break;
      case 0x02:
        this.cMBC1 = true;
        this.cSRAM = true;
        MBCType = "MBC1 + SRAM";
        break;
      case 0x03:
        this.cMBC1 = true;
        this.cSRAM = true;
        this.cBATT = true;
        MBCType = "MBC1 + SRAM + BATT";
        break;
      case 0x05:
        this.cMBC2 = true;
        MBCType = "MBC2";
        break;
      case 0x06:
        this.cMBC2 = true;
        this.cBATT = true;
        MBCType = "MBC2 + BATT";
        break;
      case 0x08:
        this.cSRAM = true;
        MBCType = "ROM + SRAM";
        break;
      case 0x09:
        this.cSRAM = true;
        this.cBATT = true;
        MBCType = "ROM + SRAM + BATT";
        break;
      case 0x0B:
        this.cMMMO1 = true;
        MBCType = "MMMO1";
        break;
      case 0x0C:
        this.cMMMO1 = true;
        this.cSRAM = true;
        MBCType = "MMMO1 + SRAM";
        break;
      case 0x0D:
        this.cMMMO1 = true;
        this.cSRAM = true;
        this.cBATT = true;
        MBCType = "MMMO1 + SRAM + BATT";
        break;
      case 0x0F:
        this.cMBC3 = true;
        this.cTIMER = true;
        this.cBATT = true;
        MBCType = "MBC3 + TIMER + BATT";
        break;
      case 0x10:
        this.cMBC3 = true;
        this.cTIMER = true;
        this.cBATT = true;
        this.cSRAM = true;
        MBCType = "MBC3 + TIMER + BATT + SRAM";
        break;
      case 0x11:
        this.cMBC3 = true;
        MBCType = "MBC3";
        break;
      case 0x12:
        this.cMBC3 = true;
        this.cSRAM = true;
        MBCType = "MBC3 + SRAM";
        break;
      case 0x13:
        this.cMBC3 = true;
        this.cSRAM = true;
        this.cBATT = true;
        MBCType = "MBC3 + SRAM + BATT";
        break;
      case 0x19:
        this.cMBC5 = true;
        MBCType = "MBC5";
        break;
      case 0x1A:
        this.cMBC5 = true;
        this.cSRAM = true;
        MBCType = "MBC5 + SRAM";
        break;
      case 0x1B:
        this.cMBC5 = true;
        this.cSRAM = true;
        this.cBATT = true;
        MBCType = "MBC5 + SRAM + BATT";
        break;
      case 0x1C:
        this.cRUMBLE = true;
        MBCType = "RUMBLE";
        break;
      case 0x1D:
        this.cRUMBLE = true;
        this.cSRAM = true;
        MBCType = "RUMBLE + SRAM";
        break;
      case 0x1E:
        this.cRUMBLE = true;
        this.cSRAM = true;
        this.cBATT = true;
        MBCType = "RUMBLE + SRAM + BATT";
        break;
      case 0x1F:
        this.cCamera = true;
        MBCType = "GameBoy Camera";
        break;
      case 0x22:
        this.cMBC7 = true;
        this.cSRAM = true;
        this.cBATT = true;
        MBCType = "MBC7 + SRAM + BATT";
        break;
      case 0xFD:
        this.cTAMA5 = true;
        MBCType = "TAMA5";
        break;
      case 0xFE:
        this.cHuC3 = true;
        MBCType = "HuC3";
        break;
      case 0xFF:
        this.cHuC1 = true;
        MBCType = "HuC1";
        break;
      default:
        MBCType = "Unknown";
        cout("Cartridge type is unknown.", 2);
        pausePlay();
    }
    cout("Cartridge Type: " + MBCType + ".", 0);
    // ROM and RAM banks
    this.numROMBanks = this.ROMBanks.get(this.ROM[0x148]) as number;
    cout(this.numROMBanks + " ROM banks.", 0);
    switch (this.RAMBanks[this.ROM[0x149]]) {
      case 0:
        cout("No RAM banking requested for allocation or MBC is of type 2.", 0);
        break;
      case 2:
        cout("1 RAM bank requested for allocation.", 0);
        break;
      case 3:
        cout("4 RAM banks requested for allocation.", 0);
        break;
      case 4:
        cout("16 RAM banks requested for allocation.", 0);
        break;
      default:
        cout("RAM bank amount requested is unknown, will use maximum allowed by specified MBC type.", 0);
    }
    //Check the GB/GBC mode byte:
    if (!this.usedBootROM) {
      switch (this.ROM[0x143]) {
        case 0x00: //Only GB mode
          this.cGBC = false;
          cout("Only GB mode detected.", 0);
          break;
        case 0x32: //Exception to the GBC identifying code:
          if (!settings[2] && this.name + this.gameCode + this.ROM[0x143] == "Game and Watch 50") {
            this.cGBC = true;
            cout("Created a boot exception for Game and Watch Gallery 2 (GBC ID byte is wrong on the cartridge).", 1);
          }
          else {
            this.cGBC = false;
          }
          break;
        case 0x80: //Both GB + GBC modes
          this.cGBC = !settings[2];
          cout("GB and GBC mode detected.", 0);
          break;
        case 0xC0: //Only GBC mode
          this.cGBC = true;
          cout("Only GBC mode detected.", 0);
          break;
        default:
          this.cGBC = false;
          cout("Unknown GameBoy game type code #" + this.ROM[0x143] + ", defaulting to GB mode (Old games don't have a type code).", 1);
      }
      this.inBootstrap = false;
      this.setupRAM(); //CPU/(V)RAM initialization.
      this.initSkipBootstrap();
      this.initializeAudioStartState(); // Line added for benchmarking.
    }
    else {
      this.cGBC = this.usedGBCBootROM; //Allow the GBC boot ROM to run in GBC mode...
      this.setupRAM(); //CPU/(V)RAM initialization.
      this.initBootstrap();
    }
    this.initializeModeSpecificArrays();
    //License Code Lookup:
    let cOldLicense = this.ROM[0x14B];
    let cNewLicense = (this.ROM[0x144] & 0xFF00) | (this.ROM[0x145] & 0xFF);
    if (cOldLicense != 0x33) {
      //Old Style License Header
      cout("Old style license code: " + cOldLicense, 0);
    }
    else {
      //New Style License Header
      cout("New style license code: " + cNewLicense, 0);
    }
    this.ROMImage = ""; //Memory consumption reduction.
  }
  disableBootROM() {
    //deBugLog("This is disableBootROM");
    //Remove any traces of the boot ROM from ROM memory.
    for (let index = 0; index < 0x100; ++index) {
      this.memory[index] = this.ROM[index]; //Replace the GameBoy or GameBoy Color boot ROM with the game ROM.
    }
    if (this.usedGBCBootROM) {
      //Remove any traces of the boot ROM from ROM memory.
      for (let index = 0x200; index < 0x900; ++index) {
        this.memory[index] = this.ROM[index]; //Replace the GameBoy Color boot ROM with the game ROM.
      }
      if (!this.cGBC) {
        //Clean up the post-boot (GB mode only) state:
        this.GBCtoGBModeAdjust();
      }
      else {
        this.recompileBootIOWriteHandling();
      }
    }
    else {
      this.recompileBootIOWriteHandling();
    }
  }
  initializeTiming() {
    //deBugLog("This is initializeTiming");
    //Emulator Timing:
    this.baseCPUCyclesPerIteration = 0x80000 / 0x7D * (settings[6] as number);
    this.CPUCyclesTotalRoundoff = this.baseCPUCyclesPerIteration % 4;
    this.CPUCyclesTotal = (this.baseCPUCyclesPerIteration - this.CPUCyclesTotalRoundoff) | 0;
    this.CPUCyclesTotalBase = this.CPUCyclesTotal;
    this.CPUCyclesTotalCurrent = 0;
  }
  setupRAM() {
    //deBugLog("This is setupRAM");
    //Setup the auxilliary/switchable RAM:
    if (this.cMBC2) {
      this.numRAMBanks = 1 / 16;
    }
    else if (this.cMBC1 || this.cRUMBLE || this.cMBC3 || this.cHuC3) {
      this.numRAMBanks = 4;
    }
    else if (this.cMBC5) {
      this.numRAMBanks = 16;
    }
    else if (this.cSRAM) {
      this.numRAMBanks = 1;
    }
    if (this.numRAMBanks > 0) {
      if (!this.MBCRAMUtilized()) {
        //For ROM and unknown MBC cartridges using the external RAM:
        this.MBCRAMBanksEnabled = true;
      }
      //Switched RAM Used
      let MBCRam: Object[] = (typeof this.openMBC == "function") ? this.openMBC(this.name) : [];
      if (MBCRam.length > 0) {
        //Flash the SRAM into memory:
        this.MBCRam = this.toTypedArray(MBCRam as Object as TNextArray, "uint8");
      }
      else {
        this.MBCRam = this.getTypedArray(this.numRAMBanks * 0x2000, 0, "uint8");
      }
    }
    cout("Actual bytes of MBC RAM allocated: " + (this.numRAMBanks * 0x2000), 0);
    this.returnFromRTCState();
    //Setup the RAM for GBC mode.
    if (this.cGBC) {
      this.VRAM = this.getTypedArray(0x2000, 0, "uint8");
      this.GBCMemory = this.getTypedArray(0x7000, 0, "uint8");
    }
    this.memoryReadJumpCompile();
    this.memoryWriteJumpCompile();
  }
  MBCRAMUtilized(): boolean {
    //deBugLog("This is MBCRAMUtilized");
    return this.cMBC1 || this.cMBC2 || this.cMBC3 || this.cMBC5 || this.cMBC7 || this.cRUMBLE;
  }
  recomputeDimension() {
    //deBugLog("This is recomputeDimension");
    initNewCanvas();
    //Cache some dimension info:
    this.onscreenWidth = this.canvas!.width;
    this.onscreenHeight = this.canvas!.height;
    // The following line was modified for benchmarking:
    if (GameBoyWindow.mozRequestAnimationFrame) {
      //Firefox slowness hack:
      this.onscreenWidth = (!settings[12]) ? 160 : this.canvas!.width;
      this.canvas!.width = this.onscreenWidth;
      this.onscreenHeight = (!settings[12]) ? 144 : this.canvas!.height;
      this.canvas!.height = this.onscreenHeight;
    }
    else {
      this.onscreenWidth = this.canvas!.width;
      this.onscreenHeight = this.canvas!.height;
    }
    this.offscreenWidth = (!settings[12]) ? 160 : this.canvas!.width;
    this.offscreenHeight = (!settings[12]) ? 144 : this.canvas!.height;
    this.offscreenRGBCount = this.offscreenWidth * this.offscreenHeight * 4;
  }
  initLCD() {
    //deBugLog("This is initLCD");
    this.recomputeDimension();
    if (this.offscreenRGBCount != 92160) {
      //Only create the resizer handle if we need it:
      this.compileResizeFrameBufferFunction();
    }
    else {
      //Resizer not needed:
      this.resizer = null;
    }
    this.canvasOffscreen = new GameBoyCanvas(); // Line modified for benchmarking.
    this.canvasOffscreen.width = this.offscreenWidth;
    this.canvasOffscreen.height = this.offscreenHeight;
    this.drawContextOffscreen = this.canvasOffscreen.getContext("2d");
    this.drawContextOnscreen = this.canvas!.getContext("2d");
    //Get a CanvasPixelArray buffer:
    this.canvasBuffer = this.drawContextOffscreen.createImageData(this.offscreenWidth, this.offscreenHeight);
    let index = this.offscreenRGBCount;
    while (index > 0) {
      index -= 4;
      this.canvasBuffer.data[index] = 0xF8;
      this.canvasBuffer.data[index + 1] = 0xF8;
      this.canvasBuffer.data[index + 2] = 0xF8;
      this.canvasBuffer.data[index + 3] = 0xFF;
    }
    this.graphicsBlit();
    this.canvas!.style.visibility = "visible";
    if (this.swizzledFrame == null || this.swizzledFrame.length == 0) {
      this.swizzledFrame = this.getTypedArray(69120, 0xFF, "uint8");
    }
    //Test the draw system and browser vblank latching:
    this.drewFrame = true; //Copy the latest graphics to buffer.
    this.requestDraw();
  }
  graphicsBlit() {
    //deBugLog("This is graphicsBlit");
    if (this.offscreenWidth == this.onscreenWidth && this.offscreenHeight == this.onscreenHeight) {
      this.drawContextOnscreen!.putImageData(this.canvasBuffer as GameBoyContextImageDataResult, 0, 0);
    }
    else {
      this.drawContextOffscreen!.putImageData(this.canvasBuffer as GameBoyContextImageDataResult, 0, 0);
      this.drawContextOnscreen!.drawImage(this.canvasOffscreen as GameBoyCanvas, 0, 0, this.onscreenWidth, this.onscreenHeight);
    }
  }
  JoyPadEvent(key: number, down: boolean) {
    if (down) {
      this.JoyPad &= 0xFF ^ (1 << key);
      if (!this.cGBC && (!this.usedBootROM || !this.usedGBCBootROM)) {
        this.interruptsRequested |= 0x10; //A real GBC doesn't set this!
        this.remainingClocks = 0;
        this.checkIRQMatching();
      }
    }
    else {
      this.JoyPad |= (1 << key);
    }
    this.memory[0xFF00] = (this.memory[0xFF00] & 0x30) + ((((this.memory[0xFF00] & 0x20) == 0) ? (this.JoyPad >> 4) : 0xF) & (((this.memory[0xFF00] & 0x10) == 0) ? (this.JoyPad & 0xF) : 0xF));
    this.CPUStopped = false;
  }
  GyroEvent(xTemp: number, yTemp: number) {
    let x = xTemp;
    let y = yTemp;
    x *= -100;
    x += 2047;
    this.highX = x >> 8;
    this.lowX = x & 0xFF;
    y *= -100;
    y += 2047;
    this.highY = y >> 8;
    this.lowY = y & 0xFF;
  }
  initSound() {
    //deBugLog("This is initSound");
    this.sampleSize = 0x400000 / 1000 * (settings[6] as number);
    this.machineOut = settings[13] as number;
    if (settings[0]) {
      let __ = this;
      this.audioHandle = new XAudioServer(2, 0x400000 / (settings[13] as number), 0, Math.max(this.sampleSize * (settings[8] as number) / (settings[13] as number), 8192) << 1, null, settings[14] as number);
      this.initAudioBuffer();
    }
    else if (this.audioHandle) {
      //Mute the audio output, as it has an immediate silencing effect:
      this.audioHandle.changeVolume(0);
    }
  }
  changeVolume() {
    if (settings[0] && this.audioHandle) {
      this.audioHandle.changeVolume(settings[14] as number);
    }
  }
  initAudioBuffer() {
    //deBugLog("This is initAudioBuffer");
    this.audioIndex = 0;
    this.bufferContainAmount = Math.max((this.sampleSize * (settings[7] as number)) / (settings[13] as number), 4096) << 1;
    this.numSamplesTotal = (this.sampleSize - (this.sampleSize % (settings[13] as number))) | 0;
    this.currentBuffer = this.getTypedArray(this.numSamplesTotal, 0xF0F0, "int32");
    this.secondaryBuffer = this.getTypedArray((this.numSamplesTotal << 1) / (settings[13] as number), 0, "float32");
  }
  intializeWhiteNoise() {
    //deBugLog("This is intializeWhiteNoise");
    //Noise Sample Tables:
    let randomFactor: number = 1;
    //15-bit LSFR Cache Generation:
    this.LSFR15Table = this.getTypedArray(0x80000, 0, "int8");
    let LSFR: number = 0x7FFF; //Seed value has all its bits set.
    let LSFRShifted: number = 0x3FFF;
    for (let index = 0; index < 0x8000; ++index) {
      //Normalize the last LSFR value for usage:
      randomFactor = 1 - (LSFR & 1); //Docs say it's the inverse.
      //Cache the different volume level results:
      this.LSFR15Table[0x08000 | index] = randomFactor;
      this.LSFR15Table[0x10000 | index] = randomFactor * 0x2;
      this.LSFR15Table[0x18000 | index] = randomFactor * 0x3;
      this.LSFR15Table[0x20000 | index] = randomFactor * 0x4;
      this.LSFR15Table[0x28000 | index] = randomFactor * 0x5;
      this.LSFR15Table[0x30000 | index] = randomFactor * 0x6;
      this.LSFR15Table[0x38000 | index] = randomFactor * 0x7;
      this.LSFR15Table[0x40000 | index] = randomFactor * 0x8;
      this.LSFR15Table[0x48000 | index] = randomFactor * 0x9;
      this.LSFR15Table[0x50000 | index] = randomFactor * 0xA;
      this.LSFR15Table[0x58000 | index] = randomFactor * 0xB;
      this.LSFR15Table[0x60000 | index] = randomFactor * 0xC;
      this.LSFR15Table[0x68000 | index] = randomFactor * 0xD;
      this.LSFR15Table[0x70000 | index] = randomFactor * 0xE;
      this.LSFR15Table[0x78000 | index] = randomFactor * 0xF;
      //Recompute the LSFR algorithm:
      LSFRShifted = LSFR >> 1;
      LSFR = LSFRShifted | (((LSFRShifted ^ LSFR) & 0x1) << 14);
    }
    //7-bit LSFR Cache Generation:
    this.LSFR7Table = this.getTypedArray(0x800, 0, "int8");
    LSFR = 0x7F; //Seed value has all its bits set.
    for (let index = 0; index < 0x80; ++index) {
      //Normalize the last LSFR value for usage:
      randomFactor = 1 - (LSFR & 1); //Docs say it's the inverse.
      //Cache the different volume level results:
      this.LSFR7Table[0x080 | index] = randomFactor;
      this.LSFR7Table[0x100 | index] = randomFactor * 0x2;
      this.LSFR7Table[0x180 | index] = randomFactor * 0x3;
      this.LSFR7Table[0x200 | index] = randomFactor * 0x4;
      this.LSFR7Table[0x280 | index] = randomFactor * 0x5;
      this.LSFR7Table[0x300 | index] = randomFactor * 0x6;
      this.LSFR7Table[0x380 | index] = randomFactor * 0x7;
      this.LSFR7Table[0x400 | index] = randomFactor * 0x8;
      this.LSFR7Table[0x480 | index] = randomFactor * 0x9;
      this.LSFR7Table[0x500 | index] = randomFactor * 0xA;
      this.LSFR7Table[0x580 | index] = randomFactor * 0xB;
      this.LSFR7Table[0x600 | index] = randomFactor * 0xC;
      this.LSFR7Table[0x680 | index] = randomFactor * 0xD;
      this.LSFR7Table[0x700 | index] = randomFactor * 0xE;
      this.LSFR7Table[0x780 | index] = randomFactor * 0xF;
      //Recompute the LSFR algorithm:
      LSFRShifted = LSFR >> 1;
      LSFR = LSFRShifted | (((LSFRShifted ^ LSFR) & 0x1) << 6);
    }
    if (!this.noiseSampleTable && this.memory.length == 0x10000) {
      //If enabling audio for the first time after a game is already running, set up the internal table reference:
      this.noiseSampleTable = (this.memory[0xFF22] & 0x8) == 0x8 ? this.LSFR7Table : this.LSFR15Table;
    }
  };
  audioUnderrunAdjustment() {
    //deBugLog("This is audioUnderrunAdjustment");
    if (settings[0]) {
      let underrunAmount = this.bufferContainAmount - this.audioHandle!.remainingBuffer();
      if (underrunAmount > 0) {
        this.CPUCyclesTotalCurrent += (underrunAmount >> 1) * this.machineOut;
        this.recalculateIterationClockLimit();
      }
    }
  };
  initializeAudioStartState() {
    //deBugLog("This is initializeAudioStartState");
    this.channel1FrequencyTracker = 0x2000;
    this.channel1DutyTracker = 0;
    this.channel1CachedDuty = this.dutyLookup[2];
    this.channel1totalLength = 0;
    this.channel1envelopeVolume = 0;
    this.channel1envelopeType = false;
    this.channel1envelopeSweeps = 0;
    this.channel1envelopeSweepsLast = 0;
    this.channel1consecutive = true;
    this.channel1frequency = 0;
    this.channel1SweepFault = false;
    this.channel1ShadowFrequency = 0;
    this.channel1timeSweep = 1;
    this.channel1lastTimeSweep = 0;
    this.channel1numSweep = 0;
    this.channel1frequencySweepDivider = 0;
    this.channel1decreaseSweep = false;
    this.channel2FrequencyTracker = 0x2000;
    this.channel2DutyTracker = 0;
    this.channel2CachedDuty = this.dutyLookup[2];
    this.channel2totalLength = 0;
    this.channel2envelopeVolume = 0;
    this.channel2envelopeType = false;
    this.channel2envelopeSweeps = 0;
    this.channel2envelopeSweepsLast = 0;
    this.channel2consecutive = true;
    this.channel2frequency = 0;
    this.channel3canPlay = false;
    this.channel3totalLength = 0;
    this.channel3patternType = 4;
    this.channel3frequency = 0;
    this.channel3consecutive = true;
    this.channel3Counter = 0x800;
    this.channel4FrequencyPeriod = 8;
    this.channel4totalLength = 0;
    this.channel4envelopeVolume = 0;
    this.channel4currentVolume = 0;
    this.channel4envelopeType = false;
    this.channel4envelopeSweeps = 0;
    this.channel4envelopeSweepsLast = 0;
    this.channel4consecutive = true;
    this.channel4BitRange = 0x7FFF;
    this.noiseSampleTable = this.LSFR15Table;
    this.channel4VolumeShifter = 15;
    this.channel1FrequencyCounter = 0x2000;
    this.channel2FrequencyCounter = 0x2000;
    this.channel3Counter = 0x800;
    this.channel3FrequencyPeriod = 0x800;
    this.channel3lastSampleLookup = 0;
    this.channel4lastSampleLookup = 0;
    this.VinLeftChannelMasterVolume = 8;
    this.VinRightChannelMasterVolume = 8;
    this.mixerOutputCache = 0;
    this.sequencerClocks = 0x2000;
    this.sequencePosition = 0;
    this.channel4FrequencyPeriod = 8;
    this.channel4Counter = 8;
    this.cachedChannel3Sample = 0;
    this.cachedChannel4Sample = 0;
    this.channel1Enabled = false;
    this.channel2Enabled = false;
    this.channel3Enabled = false;
    this.channel4Enabled = false;
    this.channel1canPlay = false;
    this.channel2canPlay = false;
    this.channel4canPlay = false;
    this.channel1OutputLevelCache();
    this.channel2OutputLevelCache();
    this.channel3OutputLevelCache();
    this.channel4OutputLevelCache();
  };
  outputAudio() {
    //deBugLog("This is outputAudio");
    let sampleFactor: number = 0;
    let dirtySample: number = 0;
    let averageL: number = 0;
    let averageR: number = 0;
    let destinationPosition: number = 0;
    let divisor1: number = settings[13] as number;
    let divisor2: number = divisor1 * 0xF0;
    let sourcePosition: number = 0;
    while (sourcePosition < this.numSamplesTotal) {
      sampleFactor = 0;
      averageL = 0;
      averageR = 0;
      while (sampleFactor < divisor1) {
        dirtySample = this.currentBuffer[sourcePosition++];
        averageL += dirtySample >> 9;
        averageR += dirtySample & 0x1FF;
        sampleFactor += 1;
      }
      this.secondaryBuffer[destinationPosition++] = averageL / divisor2 - 1;
      this.secondaryBuffer[destinationPosition++] = averageR / divisor2 - 1;
    }
    this.audioHandle!.writeAudioNoCallback(this.secondaryBuffer as Float32Array);
  };
  //Below are the audio generation functions timed against the CPU:
  generateAudio(numSamplesTemp: number) {
    //deBugLog("This is generateAudio");
    let numSamples = numSamplesTemp;
    if (this.soundMasterEnabled && !this.CPUStopped) {
      let samplesToGenerate = 0;
      while (numSamples > 0) {
        samplesToGenerate = numSamples < this.sequencerClocks ? numSamples : this.sequencerClocks;
        this.sequencerClocks -= samplesToGenerate;
        numSamples -= samplesToGenerate;
                samplesToGenerate -= 1;
        while (samplesToGenerate > -1) {
          this.computeAudioChannels();
          this.currentBuffer[this.audioIndex++] = this.mixerOutputCache;
          if (this.audioIndex == this.numSamplesTotal) {
            this.audioIndex = 0;
            this.outputAudio();
          }
          samplesToGenerate -= 1;
        }
        if (this.sequencerClocks == 0) {
          this.audioComputeSequencer();
          this.sequencerClocks = 0x2000;
        }
      }
    }
    else {
      //SILENT OUTPUT:
      numSamples -= 1;
      while (numSamples > -1) {
        numSamples -= 1;
        this.currentBuffer[this.audioIndex++] = 0xF0F0;
        if (this.audioIndex == this.numSamplesTotal) {
          this.audioIndex = 0;
          this.outputAudio();
        }
      }
    }
  };
  //Generate audio, but don't actually output it (Used for when sound is disabled by user/browser):
  generateAudioFake(numSamplesTemp: number) {
    //deBugLog("This is generateAudioFake");
    if (this.soundMasterEnabled && !this.CPUStopped) {
      let numSamples = numSamplesTemp - 1;
      while (numSamples > -1) {
        this.computeAudioChannels();
        this.sequencerClocks -= 1;
        if (this.sequencerClocks == 0) {
          this.audioComputeSequencer();
          this.sequencerClocks = 0x2000;
        }
        numSamples -= 1;
      }
    }
  };
  audioJIT() {
    //deBugLog("This is audioJIT");
    //Audio Sample Generation Timing:
    if (settings[0]) {
      this.generateAudio(this.audioTicks);
    }
    else {
      this.generateAudioFake(this.audioTicks);
    }
    this.audioTicks = 0;
  };
  audioComputeSequencer() {
    //deBugLog("This is audioComputeSequencer");
    switch (this.sequencePosition++) {
      case 0:
        this.clockAudioLength();
        break;
      case 2:
        this.clockAudioLength();
        this.clockAudioSweep();
        break;
      case 4:
        this.clockAudioLength();
        break;
      case 6:
        this.clockAudioLength();
        this.clockAudioSweep();
        break;
      case 7:
        this.clockAudioEnvelope();
        this.sequencePosition = 0;
      default:
         break;
    }
  };
  clockAudioLength() {
    //Channel 1:
    if (this.channel1totalLength > 1) {
      this.channel1totalLength -= 1;
    } 
    else if (this.channel1totalLength == 1) {
      this.channel1totalLength = 0;
      this.channel1EnableCheck();
      this.memory[0xFF26] &= 0xFE; //Channel #1 On Flag Off
    }
    //Channel 2:
    if (this.channel2totalLength > 1) {
      this.channel2totalLength -= 1;
    } 
    else if (this.channel2totalLength == 1) {
      this.channel2totalLength = 0;
      this.channel2EnableCheck();
      this.memory[0xFF26] &= 0xFD; //Channel #2 On Flag Off
    }
    //Channel 3:
    if (this.channel3totalLength > 1) {
      this.channel3totalLength -= 1;
    } 
    else if (this.channel3totalLength == 1) {
      this.channel3totalLength = 0;
      this.channel3EnableCheck();
      this.memory[0xFF26] &= 0xFB; //Channel #3 On Flag Off
    }
    //Channel 4:
    if (this.channel4totalLength > 1) {
      this.channel4totalLength -= 1;
    }
    else if (this.channel4totalLength == 1) {
      this.channel4totalLength = 0;
      this.channel4EnableCheck();
      this.memory[0xFF26] &= 0xF7; //Channel #4 On Flag Off
    }
  };
  clockAudioSweep() {
    //Channel 1:
    if (!this.channel1SweepFault && this.channel1timeSweep > 0) {
      this.channel1timeSweep -= 1;
      if (this.channel1timeSweep == 0) {
        this.runAudioSweep();
      }
    }
  };
  runAudioSweep() {
    //deBugLog("This is runAudioSweep");
    //Channel 1:
    if (this.channel1lastTimeSweep > 0) {
      if (this.channel1frequencySweepDivider > 0) {
        if (this.channel1numSweep > 0) {
          this.channel1numSweep -= 1;
          if (this.channel1decreaseSweep) {
            this.channel1ShadowFrequency -= this.channel1ShadowFrequency >> this.channel1frequencySweepDivider;
            this.channel1frequency = this.channel1ShadowFrequency & 0x7FF;
            this.channel1FrequencyTracker = (0x800 - this.channel1frequency) << 2;
          }
          else {
            this.channel1ShadowFrequency += this.channel1ShadowFrequency >> this.channel1frequencySweepDivider;
            this.channel1frequency = this.channel1ShadowFrequency;
            if (this.channel1ShadowFrequency <= 0x7FF) {
              this.channel1FrequencyTracker = (0x800 - this.channel1frequency) << 2;
              //Run overflow check twice:
              if (this.channel1ShadowFrequency + (this.channel1ShadowFrequency >> this.channel1frequencySweepDivider) > 0x7ff) {
                this.channel1SweepFault = true;
                this.channel1EnableCheck();
                this.memory[0xFF26] &= 0xFE; //Channel #1 On Flag Off
              }
            }
            else {
              this.channel1frequency &= 0x7FF;
              this.channel1SweepFault = true;
              this.channel1EnableCheck();
              this.memory[0xFF26] &= 0xFE; //Channel #1 On Flag Off
            }
          }
        }
        this.channel1timeSweep = this.channel1lastTimeSweep;
      }
      else {
        //Channel has sweep disabled and timer becomes a length counter:
        this.channel1SweepFault = true;
        this.channel1EnableCheck();
      }
    }
  };
  clockAudioEnvelope() {
    //deBugLog("This is clockAudioEnvelope");
    //Channel 1:
    if (this.channel1envelopeSweepsLast > -1) {
      if (this.channel1envelopeSweeps > 0) {
        this.channel1envelopeSweeps -= 1;
      }
      else {
        if (!this.channel1envelopeType) {
          if (this.channel1envelopeVolume > 0) {
            this.channel1envelopeVolume -= 1;
            this.channel1envelopeSweeps = this.channel1envelopeSweepsLast;
            this.channel1OutputLevelCache();
          }
          else {
            this.channel1envelopeSweepsLast = -1;
          }
        }
        else if (this.channel1envelopeVolume < 0xF) {
          this.channel1envelopeVolume += 1;
          this.channel1envelopeSweeps = this.channel1envelopeSweepsLast;
          this.channel1OutputLevelCache();
        }
        else {
          this.channel1envelopeSweepsLast = -1;
        }
      }
    }
    //Channel 2:
    if (this.channel2envelopeSweepsLast > -1) {
      if (this.channel2envelopeSweeps > 0) {
        this.channel2envelopeSweeps -= 1;
      }
      else {
        if (!this.channel2envelopeType) {
          if (this.channel2envelopeVolume > 0) {
            this.channel2envelopeVolume -= 1;
            this.channel2envelopeSweeps = this.channel2envelopeSweepsLast;
            this.channel2OutputLevelCache();
          }
          else {
            this.channel2envelopeSweepsLast = -1;
          }
        } 
	else if (this.channel2envelopeVolume < 0xf) {
          this.channel2envelopeVolume += 1;
          this.channel2envelopeSweeps = this.channel2envelopeSweepsLast;
          this.channel2OutputLevelCache();
        }
        else {
          this.channel2envelopeSweepsLast = -1;
        }
      }
    }
    //Channel 4:
    if (this.channel4envelopeSweepsLast > -1) {
      if (this.channel4envelopeSweeps > 0) {
        this.channel4envelopeSweeps -= 1;
      }
      else {
        if (!this.channel4envelopeType) {
          if (this.channel4envelopeVolume > 0) {
            this.channel4envelopeVolume -= 1;
            this.channel4currentVolume = this.channel4envelopeVolume << this.channel4VolumeShifter;
            this.channel4envelopeSweeps = this.channel4envelopeSweepsLast;
            this.channel4UpdateCache();
          }
          else {
            this.channel4envelopeSweepsLast = -1;
          }
        }
        else if (this.channel4envelopeVolume < 0xF) {
          this.channel4envelopeVolume += 1;
          this.channel4currentVolume =  this.channel4envelopeVolume << this.channel4VolumeShifter;
          this.channel4envelopeSweeps = this.channel4envelopeSweepsLast;
          this.channel4UpdateCache();
        }
        else {
          this.channel4envelopeSweepsLast = -1;
        }
      }
    }
  };
  computeAudioChannels() {
    //Channel 1 counter:
    this.channel1FrequencyCounter -= 1;
    if (this.channel1FrequencyCounter == 0) {
      this.channel1FrequencyCounter = this.channel1FrequencyTracker;
      this.channel1DutyTracker = (this.channel1DutyTracker + 1) & 0x7;
      this.channel1OutputLevelTrimaryCache();
    }
    //Channel 2 counter:
    this.channel2FrequencyCounter -= 1;
    if (this.channel2FrequencyCounter == 0) {
      this.channel2FrequencyCounter = this.channel2FrequencyTracker;
      this.channel2DutyTracker = (this.channel2DutyTracker + 1) & 0x7;
      this.channel2OutputLevelTrimaryCache();
    }
    //Channel 3 counter:
    this.channel3Counter -= 1;
    if (this.channel3Counter == 0) {
      if (this.channel3canPlay) {
        this.channel3lastSampleLookup = (this.channel3lastSampleLookup + 1) & 0x1f;
      }
      this.channel3Counter = this.channel3FrequencyPeriod;
      this.channel3UpdateCache();
    }
    //Channel 4 counter:
    this.channel4Counter -= 1;
    if (this.channel4Counter == 0) {
      this.channel4lastSampleLookup = (this.channel4lastSampleLookup + 1) & this.channel4BitRange;
      this.channel4Counter = this.channel4FrequencyPeriod;
      this.channel4UpdateCache();
    }
  };
  channel1EnableCheck() {
    this.channel1Enabled = (this.channel1consecutive || this.channel1totalLength > 0) && !this.channel1SweepFault && this.channel1canPlay;
    this.channel1OutputLevelSecondaryCache();
  };
  channel1VolumeEnableCheck() {
    this.channel1canPlay = this.memory[0xFF12] > 7;
    this.channel1EnableCheck();
    this.channel1OutputLevelSecondaryCache();
  };
  channel1OutputLevelCache() {
    //deBugLog("This is channel1OutputLevelCache");
    this.channel1currentSampleLeft = this.leftChannel1 ? this.channel1envelopeVolume : 0;
    this.channel1currentSampleRight = this.rightChannel1 ? this.channel1envelopeVolume : 0;
    this.channel1OutputLevelSecondaryCache();
  };
  channel1OutputLevelSecondaryCache() {
    //deBugLog("This is channel1OutputLevelSecondaryCache");
    if (this.channel1Enabled) {
      this.channel1currentSampleLeftSecondary = this.channel1currentSampleLeft;
      this.channel1currentSampleRightSecondary = this.channel1currentSampleRight;
    }
    else {
      this.channel1currentSampleLeftSecondary = 0;
      this.channel1currentSampleRightSecondary = 0;
    }
    this.channel1OutputLevelTrimaryCache();
  };
  channel1OutputLevelTrimaryCache() {
    //deBugLog("This is channel1OutputLevelTrimaryCache");
    if (this.channel1CachedDuty[this.channel1DutyTracker]) {
      this.channel1currentSampleLeftTrimary = this.channel1currentSampleLeftSecondary;
      this.channel1currentSampleRightTrimary = this.channel1currentSampleRightSecondary;
    }
    else {
      this.channel1currentSampleLeftTrimary = 0;
      this.channel1currentSampleRightTrimary = 0;
    }
    this.mixerOutputLevelCache();
  };
  channel2EnableCheck() {
    this.channel2Enabled = (this.channel2consecutive || this.channel2totalLength > 0) && this.channel2canPlay;
    this.channel2OutputLevelSecondaryCache();
  };
  channel2VolumeEnableCheck() {
    this.channel2canPlay = this.memory[0xFF17] > 7;
    this.channel2EnableCheck();
    this.channel2OutputLevelSecondaryCache();
  };
  channel2OutputLevelCache() {
    //deBugLog("This is channel2OutputLevelCache");
    this.channel2currentSampleLeft = this.leftChannel2 ? this.channel2envelopeVolume : 0;
    this.channel2currentSampleRight = this.rightChannel2 ? this.channel2envelopeVolume : 0;
    this.channel2OutputLevelSecondaryCache();
  };
  channel2OutputLevelSecondaryCache() {
    //deBugLog("This is channel2OutputLevelSecondaryCache");
    if (this.channel2Enabled) {
      this.channel2currentSampleLeftSecondary = this.channel2currentSampleLeft;
      this.channel2currentSampleRightSecondary = this.channel2currentSampleRight;
    }
    else {
      this.channel2currentSampleLeftSecondary = 0;
      this.channel2currentSampleRightSecondary = 0;
    }
    this.channel2OutputLevelTrimaryCache();
  };
  channel2OutputLevelTrimaryCache() {
    //deBugLog("This is channel2OutputLevelTrimaryCache");
    if (this.channel2CachedDuty[this.channel2DutyTracker]) {
      this.channel2currentSampleLeftTrimary = this.channel2currentSampleLeftSecondary;
      this.channel2currentSampleRightTrimary = this.channel2currentSampleRightSecondary;
    }
    else {
      this.channel2currentSampleLeftTrimary = 0;
      this.channel2currentSampleRightTrimary = 0;
    }
    this.mixerOutputLevelCache();
  };
  channel3EnableCheck() {
    this.channel3Enabled = /*this.channel3canPlay && */ this.channel3consecutive || this.channel3totalLength > 0;
    this.channel3OutputLevelSecondaryCache();
  };
  channel3OutputLevelCache() {
    this.channel3currentSampleLeft = this.leftChannel3 ? this.cachedChannel3Sample : 0;
    this.channel3currentSampleRight = this.rightChannel3 ? this.cachedChannel3Sample : 0;
    this.channel3OutputLevelSecondaryCache();
  };
  channel3OutputLevelSecondaryCache() {
    if (this.channel3Enabled) {
      this.channel3currentSampleLeftSecondary = this.channel3currentSampleLeft;
      this.channel3currentSampleRightSecondary = this.channel3currentSampleRight;
    }
    else {
      this.channel3currentSampleLeftSecondary = 0;
      this.channel3currentSampleRightSecondary = 0;
    }
    this.mixerOutputLevelCache();
  };
  channel4EnableCheck() {
    this.channel4Enabled = (this.channel4consecutive || this.channel4totalLength > 0) && this.channel4canPlay;
    this.channel4OutputLevelSecondaryCache();
  };
  channel4VolumeEnableCheck() {
    this.channel4canPlay = this.memory[0xFF21] > 7;
    this.channel4EnableCheck();
    this.channel4OutputLevelSecondaryCache();
  };
  channel4OutputLevelCache() {
    this.channel4currentSampleLeft = this.leftChannel4 ? this.cachedChannel4Sample : 0;
    this.channel4currentSampleRight = this.rightChannel4 ? this.cachedChannel4Sample : 0;
    this.channel4OutputLevelSecondaryCache();
  };
  channel4OutputLevelSecondaryCache() {
    if (this.channel4Enabled) {
      this.channel4currentSampleLeftSecondary = this.channel4currentSampleLeft;
      this.channel4currentSampleRightSecondary = this.channel4currentSampleRight;
    }
    else {
      this.channel4currentSampleLeftSecondary = 0;
      this.channel4currentSampleRightSecondary = 0;
    }
    this.mixerOutputLevelCache();
  };
  mixerOutputLevelCache() {
    this.mixerOutputCache = (((this.channel1currentSampleLeftTrimary + this.channel2currentSampleLeftTrimary + this.channel3currentSampleLeftSecondary + this.channel4currentSampleLeftSecondary) * this.VinLeftChannelMasterVolume) << 9) +
        (this.channel1currentSampleRightTrimary + this.channel2currentSampleRightTrimary + this.channel3currentSampleRightSecondary + this.channel4currentSampleRightSecondary) * this.VinRightChannelMasterVolume;
  };
  channel3UpdateCache() {
    this.cachedChannel3Sample = (this.channel3PCM as TNextArray)[this.channel3lastSampleLookup] >> this.channel3patternType;
    this.channel3OutputLevelCache();
  };
  channel3WriteRAM(addressTemp: number, data: number) {
    let address = addressTemp;
    if (this.channel3canPlay) {
      this.audioJIT();
      //address = this.channel3lastSampleLookup >> 1;
    }
    this.memory[0xFF30 | address] = data;
    address <<= 1;
    (this.channel3PCM as TNextArray)[address] = data >> 4;
    (this.channel3PCM as TNextArray)[address | 1] = data & 0xF;
  };
  channel4UpdateCache() {
    this.cachedChannel4Sample = (this.noiseSampleTable as TNextArray)[this.channel4currentVolume | this.channel4lastSampleLookup];
    this.channel4OutputLevelCache();
  };
  run() {
    //deBugLog("This is GameBoyCore run");
    //The preprocessing before the actual iteration loop:
    if ((this.stopEmulator & 2) == 0) {
      if ((this.stopEmulator & 1) == 1) {
        if (!this.CPUStopped) {
          this.stopEmulator = 0;
          this.drewFrame = false;
          this.audioUnderrunAdjustment();
          this.clockUpdate(); //RTC clocking.
          if (!this.halt) {
            this.executeIteration();
          }
          else {     //Finish the HALT rundown execution.
            this.CPUTicks = 0;
            this.calculateHALTPeriod();
            if (this.halt) {
              this.updateCoreFull();
            }
            else {
              this.executeIteration();
            }
          }
          //Request the graphics target to be updated:
          this.requestDraw();
        }
        else {
          this.audioUnderrunAdjustment();
          this.audioTicks += this.CPUCyclesTotal;
          this.audioJIT();
          this.stopEmulator |= 1; //End current loop.
        }
      }
      else {
        //We can only get here if there was an internal error, but the loop was restarted.
        cout("Iterator restarted a faulted core.", 2);
        pausePlay();
      }
    }
  };
  executeIteration() {
    //deBugLog("This is executeIteration");
    //Iterate the interpreter loop:
    let opcodeToExecute = 0;
    let timedTicks = 0;
    while (this.stopEmulator == 0) {
      //Interrupt Arming:
      switch (this.IRQEnableDelay) {
        case 1:
          this.IME = true;
          this.checkIRQMatching();
        case 2:
          this.IRQEnableDelay -= 1;
        default:
          break
      }
      //Is an IRQ set to fire?:
      if (this.IRQLineMatched > 0) {
        //IME is true and and interrupt was matched:
        this.launchIRQ();
      }
      //Fetch the current opcode:
      opcodeToExecute = this.memoryReader[this.programCounter](this, this.programCounter);
      //Increment the program counter to the next instruction:
      this.programCounter = (this.programCounter + 1) & 0xFFFF;
      //Check for the program counter quirk:
      if (this.skipPCIncrement) {
        this.programCounter = (this.programCounter - 1) & 0xFFFF;
        this.skipPCIncrement = false;
      }
      //Get how many CPU cycles the current instruction counts for:
      this.CPUTicks = this.TICKTable[opcodeToExecute];
      //Execute the current instruction:
      this.OPCODE[opcodeToExecute](this);
      //Update the state (Inlined updateCoreFull manually here):
      //Update the clocking for the LCD emulation:
      this.LCDTicks += this.CPUTicks >> this.doubleSpeedShifter; //LCD Timing
      this.LCDCONTROL[this.actualScanLine](this); //Scan Line and STAT Mode Control
      //Single-speed relative timing for A/V emulation:
      timedTicks = this.CPUTicks >> this.doubleSpeedShifter; //CPU clocking can be updated from the LCD handling.
      this.audioTicks += timedTicks; //Audio Timing
      this.emulatorTicks += timedTicks; //Emulator Timing
      //CPU Timers:
      this.DIVTicks += this.CPUTicks; //DIV Timing
      if (this.TIMAEnabled) {  //TIMA Timing
        this.timerTicks += this.CPUTicks;
        while (this.timerTicks >= this.TACClocker) {
          this.timerTicks -= this.TACClocker;
          this.memory[0xFF05] += 1;
          if (this.memory[0xFF05] == 0x100) {
            this.memory[0xFF05] = this.memory[0xFF06];
            this.interruptsRequested |= 0x4;
            this.checkIRQMatching();
          }
        }
      }
      if (this.serialTimer > 0) {               //Serial Timing
        //IRQ Counter:
        this.serialTimer -= this.CPUTicks;
        if (this.serialTimer <= 0) {
          this.interruptsRequested |= 0x8;
          this.checkIRQMatching();
        }
        //Bit Shit Counter:
        this.serialShiftTimer -= this.CPUTicks;
        if (this.serialShiftTimer <= 0) {
          this.serialShiftTimer = this.serialShiftTimerAllocated;
          this.memory[0xFF01] = ((this.memory[0xFF01] << 1) & 0xFE) | 0x01; //We could shift in actual link data here if we were to implement such!!!
        }
      }
      //End of iteration routine:
      if (this.emulatorTicks >= this.CPUCyclesTotal) {
        this.iterationEndRoutine();
      }
      // Start of code added for benchmarking:
      this.instructions += 1;
      if (this.instructions > this.totalInstructions) {
        this.iterationEndRoutine();
        this.stopEmulator |= 2;
        checkFinalState();
      }
      // End of code added for benchmarking.
    }
  };
  iterationEndRoutine() {
    //deBugLog("This is iterationEndRoutine");
    if ((this.stopEmulator & 0x1) == 0) {
      this.audioJIT(); //Make sure we at least output once per iteration.
      //Update DIV Alignment (Integer overflow safety):
      this.memory[0xFF04] = (this.memory[0xFF04] + (this.DIVTicks >> 8)) & 0xFF;
      this.DIVTicks &= 0xFF;
      //Update emulator flags:
      this.stopEmulator |= 1; //End current loop.
      this.emulatorTicks -= this.CPUCyclesTotal;
      this.CPUCyclesTotalCurrent += this.CPUCyclesTotalRoundoff;
      this.recalculateIterationClockLimit();
    }
  };
  handleSTOP() {
    //deBugLog("This is handleSTOP");
    this.CPUStopped = true; //Stop CPU until joypad input changes.
    this.iterationEndRoutine();
    if (this.emulatorTicks < 0) {
      this.audioTicks -= this.emulatorTicks;
      this.audioJIT();
    }
  };
  recalculateIterationClockLimit() {
    //deBugLog("This is recalculateIterationClockLimit");
    let endModulus = this.CPUCyclesTotalCurrent % 4;
    this.CPUCyclesTotal = this.CPUCyclesTotalBase + this.CPUCyclesTotalCurrent - endModulus;
    this.CPUCyclesTotalCurrent = endModulus;
  };
  scanLineMode2() {  //OAM Search Period
    if (this.STATTracker != 1) {
      if (this.mode2TriggerSTAT) {
        this.interruptsRequested |= 0x2;
        this.checkIRQMatching();
      }
      this.STATTracker = 1;
      this.modeSTAT = 2;
    }
  };
  scanLineMode3() {  //Scan Line Drawing Period
    if (this.modeSTAT != 3) {
      if (this.STATTracker == 0 && this.mode2TriggerSTAT) {
        this.interruptsRequested |= 0x2;
        this.checkIRQMatching();
      }
      this.STATTracker = 1;
      this.modeSTAT = 3;
    }
  };
  scanLineMode0() {    //Horizontal Blanking Period
    if (this.modeSTAT != 0) {
      if (this.STATTracker != 2) {
        if (this.STATTracker == 0) {
          if (this.mode2TriggerSTAT) {
            this.interruptsRequested |= 0x2;
            this.checkIRQMatching();
          }
          this.modeSTAT = 3;
        }
        this.incrementScanLineQueue();
        this.updateSpriteCount(this.actualScanLine);
        this.STATTracker = 2;
      }
      if (this.LCDTicks >= this.spriteCount) {
        if (this.hdmaRunning) {
          this.executeHDMA();
        }
        if (this.mode0TriggerSTAT) {
          this.interruptsRequested |= 0x2;
          this.checkIRQMatching();
        }
        this.STATTracker = 3;
        this.modeSTAT = 0;
      }
    }
  }
  clocksUntilLYCMatch(): number {
    //deBugLog("This is clocksUntilLYCMatch");
    if (this.memory[0xFF45] != 0) {
      if (this.memory[0xFF45] > this.actualScanLine) {
        return 456 * (this.memory[0xFF45] - this.actualScanLine);
      }
      return 456 * (154 - this.actualScanLine + this.memory[0xFF45]);
    }
    return 456 * (this.actualScanLine == 153 && this.memory[0xFF44] == 0 ? 154 : 153 - this.actualScanLine) + 8;
  };
  clocksUntilMode0(): number {
    //deBugLog("This is clocksUntilMode0");
    switch (this.modeSTAT) {
      case 0:
        if (this.actualScanLine == 143) {
          this.updateSpriteCount(0);
          return this.spriteCount + 5016;
        }
        this.updateSpriteCount(this.actualScanLine + 1);
        return this.spriteCount + 456;
      case 2:
      case 3:
        this.updateSpriteCount(this.actualScanLine);
        return this.spriteCount;
      case 1:
        this.updateSpriteCount(0);
        return this.spriteCount + 456 * (154 - this.actualScanLine);
      default:
        return 0
    }
  };
  updateSpriteCount(line: number) {
    this.spriteCount = 252;
    if (this.cGBC && this.gfxSpriteShow) {  //Is the window enabled and are we in CGB mode?
      let lineAdjusted = line + 0x10;
      let yoffset = 0;
      let yCap = this.gfxSpriteNormalHeight ? 0x8 : 0x10;
      let OAMAddress: number = 0xFE00;
      while (OAMAddress < 0xFEA0 && this.spriteCount < 312) {
        yoffset = lineAdjusted - this.memory[OAMAddress];
        if (yoffset > -1 && yoffset < yCap) {
          this.spriteCount += 6;
        }
        OAMAddress += 4;
      }
    }
  };
  matchLYC(): void {    //LYC Register Compare
    //deBugLog("This is matchLYC");
    if (this.memory[0xFF44] == this.memory[0xFF45]) {
      this.memory[0xFF41] |= 0x04;
      if (this.LYCMatchTriggerSTAT) {
        this.interruptsRequested |= 0x2;
        this.checkIRQMatching();
      }
    }
    else {
      this.memory[0xFF41] &= 0x7B;
    }
  };
  updateCore() {
    //deBugLog("This is updateCore");
    //Update the clocking for the LCD emulation:
    this.LCDTicks += this.CPUTicks >> this.doubleSpeedShifter; //LCD Timing
    this.LCDCONTROL[this.actualScanLine](this); //Scan Line and STAT Mode Control
    //Single-speed relative timing for A/V emulation:
    let timedTicks = this.CPUTicks >> this.doubleSpeedShifter; //CPU clocking can be updated from the LCD handling.
    this.audioTicks += timedTicks; //Audio Timing
    this.emulatorTicks += timedTicks; //Emulator Timing
    //CPU Timers:
    this.DIVTicks += this.CPUTicks; //DIV Timing
    if (this.TIMAEnabled) {   //TIMA Timing
      this.timerTicks += this.CPUTicks;
      while (this.timerTicks >= this.TACClocker) {
        this.timerTicks -= this.TACClocker;
        this.memory[0xFF05] += 1;
        if (this.memory[0xFF05] == 0x100) {
          this.memory[0xFF05] = this.memory[0xFF06];
          this.interruptsRequested |= 0x4;
          this.checkIRQMatching();
        }
      }
    }
    if (this.serialTimer > 0) {   //Serial Timing
      //IRQ Counter:
      this.serialTimer -= this.CPUTicks;
      if (this.serialTimer <= 0) {
        this.interruptsRequested |= 0x8;
        this.checkIRQMatching();
      }
      //Bit Shit Counter:
      this.serialShiftTimer -= this.CPUTicks;
      if (this.serialShiftTimer <= 0) {
        this.serialShiftTimer = this.serialShiftTimerAllocated;
        this.memory[0xFF01] = ((this.memory[0xFF01] << 1) & 0xFE) | 0x01; //We could shift in actual link data here if we were to implement such!!!
      }
    }
  };
  updateCoreFull() {
    //deBugLog("This is updateCoreFull");
    //Update the state machine:
    this.updateCore();
    //End of iteration routine:
    if (this.emulatorTicks >= this.CPUCyclesTotal) {
      this.iterationEndRoutine();
    }
  };
  initializeLCDController() {
    //deBugLog("This is initializeLCDController");
    //Display on hanlding:
    let line = 0;
    while (line < 154) {
      if (line < 143) {
        //We're on a normal scan line:
        this.LINECONTROL[line] = (parentObj: GameBoyCore) => {
          if (parentObj.LCDTicks < 80) {
            parentObj.scanLineMode2();
          } 
	  else if (parentObj.LCDTicks < 252) {
            parentObj.scanLineMode3();
          } 
	  else if (parentObj.LCDTicks < 456) {
            parentObj.scanLineMode0();
          } 
	  else {
            //We're on a new scan line:
            parentObj.LCDTicks -= 456;
            if (parentObj.STATTracker != 3) {
              //Make sure the mode 0 handler was run at least once per scan line:
              if (parentObj.STATTracker != 2) {
                if (parentObj.STATTracker == 0 && parentObj.mode2TriggerSTAT) {
                  parentObj.interruptsRequested |= 0x2;
                }
                parentObj.incrementScanLineQueue();
              }
              if (parentObj.hdmaRunning) {
                parentObj.executeHDMA();
              }
              if (parentObj.mode0TriggerSTAT) {
                parentObj.interruptsRequested |= 0x2;
              }
            }
            //Update the scanline registers and assert the LYC counter:
            parentObj.memory[0xFF44] += 1;
            parentObj.actualScanLine = parentObj.memory[0xFF44];
            //Perform a LYC counter assert:
            if (parentObj.actualScanLine == parentObj.memory[0xFF45]) {
              parentObj.memory[0xFF41] |= 0x04;
              if (parentObj.LYCMatchTriggerSTAT) {
                parentObj.interruptsRequested |= 0x2;
              }
            }
            else {
              parentObj.memory[0xFF41] &= 0x7B;
            }
            parentObj.checkIRQMatching();
            //Reset our mode contingency variables:
            parentObj.STATTracker = 0;
            parentObj.modeSTAT = 2;
            parentObj.LINECONTROL[parentObj.actualScanLine](parentObj); //Scan Line and STAT Mode Control.
          }
        };
      } 
      else if (line == 143) {
        //We're on the last visible scan line of the LCD screen:
        this.LINECONTROL[143] = (parentObj: GameBoyCore) => {
          if (parentObj.LCDTicks < 80) {
            parentObj.scanLineMode2();
          } 
	  else if (parentObj.LCDTicks < 252) {
            parentObj.scanLineMode3();
          } 
	  else if (parentObj.LCDTicks < 456) {
            parentObj.scanLineMode0();
          }
          else {
            //Starting V-Blank:
            //Just finished the last visible scan line:
            parentObj.LCDTicks -= 456;
            if (parentObj.STATTracker != 3) {
              //Make sure the mode 0 handler was run at least once per scan line:
              if (parentObj.STATTracker != 2) {
                if (parentObj.STATTracker == 0 && parentObj.mode2TriggerSTAT) {
                  parentObj.interruptsRequested |= 0x2;
                }
                parentObj.incrementScanLineQueue();
              }
              if (parentObj.hdmaRunning) {
                parentObj.executeHDMA();
              }
              if (parentObj.mode0TriggerSTAT) {
                parentObj.interruptsRequested |= 0x2;
              }
            }
            //Update the scanline registers and assert the LYC counter:
            parentObj.actualScanLine = 144;
	    parentObj.memory[0xFF44] = 144;
            //Perform a LYC counter assert:
            if (parentObj.memory[0xFF45] == 144) {
              parentObj.memory[0xFF41] |= 0x04;
              if (parentObj.LYCMatchTriggerSTAT) {
                parentObj.interruptsRequested |= 0x2;
              }
            }
            else {
              parentObj.memory[0xFF41] &= 0x7B;
            }
            //Reset our mode contingency variables:
            parentObj.STATTracker = 0;
            //Update our state for v-blank:
            parentObj.modeSTAT = 1;
            parentObj.interruptsRequested |= parentObj.mode1TriggerSTAT ? 0x3 : 0x1;
            parentObj.checkIRQMatching();
            //Attempt to blit out to our canvas:
            if (parentObj.drewBlank == 0) {
              //Ensure JIT framing alignment:
              if (parentObj.totalLinesPassed < 144 || (parentObj.totalLinesPassed == 144 && parentObj.midScanlineOffset > -1)) {
                //Make sure our gfx are up-to-date:
                parentObj.graphicsJITVBlank();
                //Draw the frame:
                parentObj.prepareFrame();
              }
            }
            else {
              //LCD off takes at least 2 frames:
              parentObj.drewBlank -= 1;
            }
            parentObj.LINECONTROL[144](parentObj); //Scan Line and STAT Mode Control.
          }
        };
      }
      else if (line < 153) {
        //In VBlank
        this.LINECONTROL[line] = (parentObj: GameBoyCore) => {
          if (parentObj.LCDTicks >= 456) {
            //We're on a new scan line:
            parentObj.LCDTicks -= 456;
            parentObj.memory[0xFF44] += 1;
            parentObj.actualScanLine = parentObj.memory[0xFF44];
            //Perform a LYC counter assert:
            if (parentObj.actualScanLine == parentObj.memory[0xFF45]) {
              parentObj.memory[0xFF41] |= 0x04;
              if (parentObj.LYCMatchTriggerSTAT) {
                parentObj.interruptsRequested |= 0x2;
                parentObj.checkIRQMatching();
              }
            }
            else {
              parentObj.memory[0xFF41] &= 0x7B;
            }
            parentObj.LINECONTROL[parentObj.actualScanLine](parentObj); //Scan Line and STAT Mode Control.
          }
        };
      }
      else {
        //VBlank Ending (We're on the last actual scan line)
        this.LINECONTROL[153] = (parentObj: GameBoyCore) => {
          if (parentObj.LCDTicks >= 8) {
            if (parentObj.STATTracker != 4 && parentObj.memory[0xFF44] == 153) {
              parentObj.memory[0xFF44] = 0; //LY register resets to 0 early.
              //Perform a LYC counter assert:
              if (parentObj.memory[0xFF45] == 0) {
                parentObj.memory[0xFF41] |= 0x04;
                if (parentObj.LYCMatchTriggerSTAT) {
                  parentObj.interruptsRequested |= 0x2;
                  parentObj.checkIRQMatching();
                }
              }
              else {
                parentObj.memory[0xFF41] &= 0x7B;
              }
              parentObj.STATTracker = 4;
            }
            if (parentObj.LCDTicks >= 456) {
              //We reset back to the beginning:
              parentObj.LCDTicks -= 456;
              parentObj.STATTracker = 0;
	      parentObj.actualScanLine = 0;
              parentObj.LINECONTROL[0](parentObj); //Scan Line and STAT Mode Control.
            }
          }
        };
      }
      line += 1;
    }
  };
  DisplayShowOff() {
    //deBugLog('This is DisplayShowOff')
    if (this.drewBlank == 0) {
      //Output a blank screen to the output framebuffer:
      this.clearFrameBuffer();
      this.drewFrame = true;
    }
    this.drewBlank = 2;
  };
  executeHDMA() {
    this.DMAWrite(1);
    if (this.halt) {
      if (this.LCDTicks - this.spriteCount < ((4 >> this.doubleSpeedShifter) | 0x20)) {
        //HALT clocking correction:
        this.CPUTicks = 4 + ((0x20 + this.spriteCount) << this.doubleSpeedShifter);
        this.LCDTicks = this.spriteCount + ((4 >> this.doubleSpeedShifter) | 0x20);
      }
    }
    else {
      this.LCDTicks += (4 >> this.doubleSpeedShifter) | 0x20; //LCD Timing Update For HDMA.
    }
    if (this.memory[0xFF55] == 0) {
      this.hdmaRunning = false;
      this.memory[0xFF55] = 0xFF; //Transfer completed ("Hidden last step," since some ROMs don't imply this, but most do).
    }
    else {
      this.memory[0xFF55] -= 1;
    }
  };
  clockUpdate() {
    //deBugLog("This is clockUpdate");
    if (this.cTIMER) {
      let dateObj = new new_Date(); // The line is changed for benchmarking.
      let newTime = dateObj.getTime();
      let timeElapsed = newTime - this.lastIteration; //Get the numnber of milliseconds since this last executed.
      this.lastIteration = newTime;
      if (this.cTIMER && !this.RTCHALT) {
        //Update the MBC3 RTC:
        this.RTCSeconds += timeElapsed / 1000;
        while (this.RTCSeconds >= 60) { //System can stutter, so the seconds difference can get large, thus the "while".
          this.RTCSeconds -= 60;
          this.RTCMinutes += 1;
          if (this.RTCMinutes >= 60) {
            this.RTCMinutes -= 60;
            this.RTCHours += 1;
            if (this.RTCHours >= 24) {
              this.RTCHours -= 24;
              this.RTCDays += 1;
              if (this.RTCDays >= 512) {
                this.RTCDays -= 512;
                this.RTCDayOverFlow = true;
              }
            }
          }
        }
      }
    }
  };
  prepareFrame() {
    //deBugLog("This is prepareFrame");
    //Copy the internal frame buffer to the output buffer:
    this.swizzleFrameBuffer();
    this.drewFrame = true;
  };
  requestDraw() {
    //deBugLog("This is requestDraw");
    if (this.drewFrame) {
      this.dispatchDraw();
    }
  };
  dispatchDraw() {
    //deBugLog("This is dispatchDraw");
    let canvasRGBALength = this.offscreenRGBCount;
    if (canvasRGBALength > 0) {
      //We actually updated the graphics internally, so copy out:
      let frameBuffer = canvasRGBALength == 92160 ? this.swizzledFrame : this.resizeFrameBuffer();
      let canvasData = this.canvasBuffer!.data;
      let bufferIndex = 0;
      let canvasIndex = 0;
      while (canvasIndex < canvasRGBALength) {
        canvasData[canvasIndex++] = (frameBuffer as TNextArray)[bufferIndex++];
        canvasData[canvasIndex++] = (frameBuffer as TNextArray)[bufferIndex++];
        canvasData[canvasIndex++] = (frameBuffer as TNextArray)[bufferIndex++];
        canvasIndex += 1;
      }
      this.graphicsBlit();
    }
  };
  swizzleFrameBuffer() {
    //deBugLog("This is swizzleFrameBuffer");
    //Convert our dirty 24-bit (24-bit, with internal render flags above it) framebuffer to an 8-bit buffer with separate indices for the RGB channels:
    let frameBuffer = this.frameBuffer;
    let bufferIndex = 0;
    let canvasIndex: number = 0;
    while (canvasIndex < 69120) {
      (this.swizzledFrame as TNextArray)[canvasIndex++] = (frameBuffer[bufferIndex] >> 16) & 0xFF; //Red
      (this.swizzledFrame as TNextArray)[canvasIndex++] = (frameBuffer[bufferIndex] >> 8) & 0xFF; //Green
      (this.swizzledFrame as TNextArray)[canvasIndex++] = frameBuffer[bufferIndex++] & 0xFF; //Blue
    }
  };
  clearFrameBuffer() {
    //deBugLog("This is clearFrameBuffer");
    let bufferIndex = 0;
    if (this.cGBC || this.colorizedGBPalettes) {
      while (bufferIndex < 69120) {
        this.swizzledFrame![bufferIndex++] = 248;
      }
    }
    else {
      while (bufferIndex < 69120) {
        this.swizzledFrame![bufferIndex++] = 239;
        this.swizzledFrame![bufferIndex++] = 255;
        this.swizzledFrame![bufferIndex++] = 222;
      }
    }
  };
  resizeFrameBuffer(): TNextArray {
    //deBugLog("This is resizeFrameBuffer");
    //Return a reference to the generated resized framebuffer:
    return this.resizer!.resize(this.swizzledFrame as Float32Array | Uint8Array);
  };
  compileResizeFrameBufferFunction() {
    //deBugLog("This is compileResizeFrameBufferFunction");
    if (this.offscreenRGBCount > 0) {
      this.resizer = new Resize(160, 144, this.offscreenWidth, this.offscreenHeight, false, true);
    }
  };
  renderScanLine(scanlineToRender: number) {
    this.pixelStart = scanlineToRender * 160;
    if (this.bgEnabled) {
      this.pixelEnd = 160;
      this.BGLayerRender!(scanlineToRender);
      this.WindowLayerRender!(scanlineToRender);
    }
    else {
      let pixelLine = (scanlineToRender + 1) * 160;
      let defaultColor = this.cGBC || this.colorizedGBPalettes ? 0xF8F8F8 : 0xEFFFDE;
      let pixelPosition: number = scanlineToRender * 160 + this.currentX;
      while (pixelPosition < pixelLine) {
        this.frameBuffer[pixelPosition] = defaultColor;
        pixelPosition += 1;
      }
    }
    this.SpriteLayerRender!(scanlineToRender);
    this.currentX = 0;
    this.midScanlineOffset = -1;
  };
  renderMidScanLine() {
    if (this.actualScanLine < 144 && this.modeSTAT == 3) {
      //TODO: Get this accurate:
      if (this.midScanlineOffset == -1) {
        this.midScanlineOffset = this.backgroundX & 0x7;
      }
      if (this.LCDTicks >= 82) {
        this.pixelEnd = this.LCDTicks - 74;
        this.pixelEnd = Math.min(this.pixelEnd - this.midScanlineOffset - (this.pixelEnd % 0x8), 160);
        if (this.bgEnabled) {
          this.pixelStart = this.lastUnrenderedLine * 160;
          this.BGLayerRender!(this.lastUnrenderedLine);
          this.WindowLayerRender!(this.lastUnrenderedLine);
          //TODO: Do midscanline JIT for sprites...
        }
        else {
          let pixelLine = this.lastUnrenderedLine * 160 + this.pixelEnd;
          let defaultColor = this.cGBC || this.colorizedGBPalettes ? 0xF8F8F8 : 0xEFFFDE;
          let pixelPosition: number = this.lastUnrenderedLine * 160 + this.currentX;
          while (pixelPosition < pixelLine) {
            this.frameBuffer[pixelPosition] = defaultColor;
            pixelPosition += 1;
          }
        }
        this.currentX = this.pixelEnd;
      }
    }
  };
  initializeModeSpecificArrays() {
    //deBugLog("This is initializeModeSpecificArrays");
    this.LCDCONTROL = this.LCDisOn ? this.LINECONTROL : this.DISPLAYOFFCONTROL;
    if (this.cGBC) {
      this.gbcOBJRawPalette = this.getTypedArray(0x40, 0, "uint8");
      this.gbcBGRawPalette = this.getTypedArray(0x40, 0, "uint8");
      this.gbcOBJPalette = this.getTypedArray(0x20, 0x1000000, "int32");
      this.gbcBGPalette = this.getTypedArray(0x40, 0, "int32");
      this.BGCHRBank2.array = this.getTypedArray(0x800, 0, "uint8");
      this.BGCHRCurrentBank = this.currVRAMBank > 0 ? this.BGCHRBank2 : this.BGCHRBank1;
      this.tileCache = this.generateCacheArray(0xf80);
    }
    else {
      this.gbOBJPalette = this.getTypedArray(8, 0, "int32");
      this.gbBGPalette = this.getTypedArray(4, 0, "int32");
      this.BGPalette = this.gbBGPalette;
      this.OBJPalette = this.gbOBJPalette;
      this.tileCache = this.generateCacheArray(0x700);
      this.sortBuffer = this.getTypedArray(0x100, 0, "uint8");
      this.OAMAddressCache = this.getTypedArray(10, 0, "int32");
    }
    this.renderPathBuild();
  };
  GBCtoGBModeAdjust() {
    //deBugLog("This is GBCtoGBModeAdjust");
    cout("Stepping down from GBC mode.", 0);
    this.BGCHRBank2.array = new Int32Array();
    this.VRAM = new Int32Array();
    this.GBCMemory = new Int32Array();
    this.BGCHRCurrentBank!.array = new Int32Array();
    this.tileCache!.length = 0x700;
    if (settings[4]) {
      this.gbBGColorizedPalette = this.getTypedArray(4, 0, "int32");
      this.gbOBJColorizedPalette = this.getTypedArray(8, 0, "int32");
      this.cachedBGPaletteConversion = this.getTypedArray(4, 0, "int32");
      this.cachedOBJPaletteConversion = this.getTypedArray(8, 0, "int32");
      this.BGPalette = this.gbBGColorizedPalette;
      this.OBJPalette = this.gbOBJColorizedPalette;
      this.gbOBJPalette = null;
      this.gbBGPalette = null;
      this.getGBCColor();
    }
    else {
      this.gbOBJPalette = this.getTypedArray(8, 0, "int32");
      this.gbBGPalette = this.getTypedArray(4, 0, "int32");
      this.BGPalette = this.gbBGPalette;
      this.OBJPalette = this.gbOBJPalette;
    }
    this.sortBuffer = this.getTypedArray(0x100, 0, "uint8");
    this.OAMAddressCache = this.getTypedArray(10, 0, "int32");
    this.renderPathBuild();
    this.memoryReadJumpCompile();
    this.memoryWriteJumpCompile();
  };
  renderPathBuild() {
    //deBugLog("This is renderPathBuild");
    if (!this.cGBC) {
      this.BGLayerRender = this.BGGBLayerRender;
      this.WindowLayerRender = this.WindowGBLayerRender;
      this.SpriteLayerRender = this.SpriteGBLayerRender;
    }
    else {
      this.priorityFlaggingPathRebuild();
      this.SpriteLayerRender = this.SpriteGBCLayerRender;
    }
  };
  priorityFlaggingPathRebuild(): void {
    //deBugLog("This is priorityFlaggingPathRebuild");
    if (this.BGPriorityEnabled) {
      this.BGLayerRender = this.BGGBCLayerRender;
      this.WindowLayerRender = this.WindowGBCLayerRender;
    }
    else {
      this.BGLayerRender = this.BGGBCLayerRenderNoPriorityFlagging;
      this.WindowLayerRender = this.WindowGBCLayerRenderNoPriorityFlagging;
    }
  };
  RGBTint(value: number): number {
    //Adjustment for the GBC's tinting (According to Gambatte):
    let r = value & 0x1f;
    let g = (value >> 5) & 0x1f;
    let b = (value >> 10) & 0x1f;
    return (((r * 13 + g * 2 + b) >> 1) << 16) | ((g * 3 + b) << 9) | ((r * 3 + g * 2 + b * 11) >> 1);
  };
  getGBCColor() {
    //deBugLog("This is getGBCColor");
    //GBC Colorization of DMG ROMs:
    //BG
    let counter: number = 0;
    while (counter < 4) {
      let adjustedIndex = counter << 1;
      //BG
      this.cachedBGPaletteConversion![counter] = this.RGBTint((this.gbcBGRawPalette![adjustedIndex | 1] << 8) | this.gbcBGRawPalette![adjustedIndex]);
      //OBJ 1
      this.cachedOBJPaletteConversion![counter] = this.RGBTint((this.gbcOBJRawPalette![adjustedIndex | 1] << 8) | this.gbcOBJRawPalette![adjustedIndex]);
      counter += 1;
    }
    //OBJ 2
    counter = 4;
    while (counter < 8) {
      let adjustedIndex = counter << 1;
      this.cachedOBJPaletteConversion![counter] = this.RGBTint((this.gbcOBJRawPalette![adjustedIndex | 1] << 8) | this.gbcOBJRawPalette![adjustedIndex]);
      counter += 1;
    }
    //Update the palette entries:
    this.updateGBBGPalette = this.updateGBColorizedBGPalette;
    this.updateGBOBJPalette = this.updateGBColorizedOBJPalette;
    this.updateGBBGPalette(this.memory[0xFF47]);
    this.updateGBOBJPalette(0, this.memory[0xFF48]);
    this.updateGBOBJPalette(1, this.memory[0xFF49]);
    this.colorizedGBPalettes = true;
  };
  updateGBRegularBGPalette(data: number) {
    //deBugLog("This is updateGBRegularBGPalette");
    this.gbBGPalette![0] = this.colors[data & 0x03] | 0x2000000;
    this.gbBGPalette![1] = this.colors[(data >> 2) & 0x03];
    this.gbBGPalette![2] = this.colors[(data >> 4) & 0x03];
    this.gbBGPalette![3] = this.colors[data >> 6];
  };
  updateGBColorizedBGPalette(data: number) {
    //deBugLog("This is updateGBColorizedBGPalette");
    //GB colorization:
    this.gbBGColorizedPalette![0] = this.cachedBGPaletteConversion![data & 0x03] | 0x2000000;
    this.gbBGColorizedPalette![1] = this.cachedBGPaletteConversion![(data >> 2) & 0x03];
    this.gbBGColorizedPalette![2] = this.cachedBGPaletteConversion![(data >> 4) & 0x03];
    this.gbBGColorizedPalette![3] = this.cachedBGPaletteConversion![data >> 6];
  };
  updateGBRegularOBJPalette(index: number, data: number) {
    //deBugLog("This is updateGBRegularOBJPalette");
    this.gbOBJPalette![index | 1] = this.colors[(data >> 2) & 0x03];
    this.gbOBJPalette![index | 2] = this.colors[(data >> 4) & 0x03];
    this.gbOBJPalette![index | 3] = this.colors[data >> 6];
  };
  updateGBColorizedOBJPalette(index: number, data: number) {
    //deBugLog("This is updateGBColorizedOBJPalette");
    //GB colorization:
    this.gbOBJColorizedPalette![index | 1] = this.cachedOBJPaletteConversion![index | ((data >> 2) & 0x03)];
    this.gbOBJColorizedPalette![index | 2] = this.cachedOBJPaletteConversion![index | ((data >> 4) & 0x03)];
    this.gbOBJColorizedPalette![index | 3] = this.cachedOBJPaletteConversion![index | (data >> 6)];
  };
  updateGBCBGPalette(indexTemp: number, dataTemp: number) {
    let index = indexTemp;
    let data = dataTemp;
    if (this.gbcBGRawPalette![index] != data) {
      this.midScanLineJIT();
      //Update the color palette for BG tiles since it changed:
      this.gbcBGRawPalette![index] = data;
      if ((index & 0x06) == 0) {
        //Palette 0 (Special tile Priority stuff)
        data = 0x2000000 | this.RGBTint((this.gbcBGRawPalette![index | 1] << 8) | this.gbcBGRawPalette![index & 0x3E]);
        index >>= 1;
        this.gbcBGPalette![index] = data;
        this.gbcBGPalette![0x20 | index] = 0x1000000 | data;
      }
      else {
        //Regular Palettes (No special crap)
        data = this.RGBTint((this.gbcBGRawPalette![index | 1] << 8) | this.gbcBGRawPalette![index & 0x3E]);
        index >>= 1;
        this.gbcBGPalette![index] = data;
        this.gbcBGPalette![0x20 | index] = 0x1000000 | data;
      }
    }
  };
  updateGBCOBJPalette(index: number, data: number) {
    if (this.gbcOBJRawPalette![index] != data) {
      //Update the color palette for OBJ tiles since it changed:
      this.gbcOBJRawPalette![index] = data;
      if ((index & 0x06) > 0) {
        //Regular Palettes (No special crap)
        this.midScanLineJIT();
        this.gbcOBJPalette![index >> 1] = 0x1000000 | this.RGBTint((this.gbcOBJRawPalette![index | 1] << 8) | this.gbcOBJRawPalette![index & 0x3E]);
      }
    }
  };
  BGGBLayerRender(scanlineToRender: number) {
    //deBugLog("This is BGGBLayerRender");
    let scrollYAdjusted = (this.backgroundY + scanlineToRender) & 0xFF; //The line of the BG we're at.
    let tileYLine = (scrollYAdjusted & 7) << 3;
    let tileYDown = this.gfxBackgroundCHRBankPosition | ((scrollYAdjusted & 0xF8) << 2); //The row of cached tiles  we're fetching from.
    let scrollXAdjusted = (this.backgroundX + this.currentX) & 0xFF; //The scroll amount of the BG.
    let pixelPosition = this.pixelStart + this.currentX; //Current pixel we're working on.
    let pixelPositionEnd = this.pixelStart + (this.gfxWindowDisplay && scanlineToRender - this.windowY >= 0 ? Math.min(Math.max(this.windowX, 0) + this.currentX, this.pixelEnd) : this.pixelEnd); //Make sure we do at most 160 pixels a scanline.
    let tileNumber = tileYDown + (scrollXAdjusted >> 3);
    let chrCode = this.BGCHRBank1.array[tileNumber];
    if (chrCode < this.gfxBackgroundBankOffset) {
      chrCode |= 0x100;
    }
    let tile = this.tileCache![chrCode].array;
    let texel: number = scrollXAdjusted & 0x7;
    while (texel < 8 && pixelPosition < pixelPositionEnd && scrollXAdjusted < 0x100) {
      this.frameBuffer![pixelPosition++] = this.BGPalette![tile[tileYLine | texel++]];
      scrollXAdjusted += 1;
    }
    let scrollXAdjustedAligned = Math.min(pixelPositionEnd - pixelPosition, 0x100 - scrollXAdjusted) >> 3;
    scrollXAdjusted += scrollXAdjustedAligned << 3;
    scrollXAdjustedAligned += tileNumber;
    while (tileNumber < scrollXAdjustedAligned) {
      tileNumber += 1; 
      chrCode = this.BGCHRBank1.array[tileNumber];
      if (chrCode < this.gfxBackgroundBankOffset) {
        chrCode |= 0x100;
      }
      tile = this.tileCache![chrCode].array;
      let texel = tileYLine;
      this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel]];
    }
    if (pixelPosition < pixelPositionEnd) {
      if (scrollXAdjusted < 0x100) {
        tileNumber += 1;
        chrCode = this.BGCHRBank1.array[tileNumber];
        if (chrCode < this.gfxBackgroundBankOffset) {
          chrCode |= 0x100;
        }
        tile = this.tileCache![chrCode].array;
        let texel: number = tileYLine - 1;
        while (pixelPosition < pixelPositionEnd && scrollXAdjusted < 0x100) {
          texel += 1;
          this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel]];
          scrollXAdjusted += 1;
        }
      }
      scrollXAdjustedAligned = ((pixelPositionEnd - pixelPosition) >> 3) + tileYDown;
      while (tileYDown < scrollXAdjustedAligned) {
        chrCode = this.BGCHRBank1.array[tileYDown++];
        if (chrCode < this.gfxBackgroundBankOffset) {
          chrCode |= 0x100;
        }
        tile = this.tileCache![chrCode].array;
        let texel = tileYLine;
        this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel]];
      }
      if (pixelPosition < pixelPositionEnd) {
        chrCode = this.BGCHRBank1.array[tileYDown];
        if (chrCode < this.gfxBackgroundBankOffset) {
          chrCode |= 0x100;
        }
        tile = this.tileCache![chrCode].array;
        switch (pixelPositionEnd - pixelPosition) {
          case 7:
            this.frameBuffer![pixelPosition + 6] = this.BGPalette![tile[tileYLine | 6]];
          case 6:
            this.frameBuffer![pixelPosition + 5] = this.BGPalette![tile[tileYLine | 5]];
          case 5:
            this.frameBuffer![pixelPosition + 4] = this.BGPalette![tile[tileYLine | 4]];
          case 4:
            this.frameBuffer![pixelPosition + 3] = this.BGPalette![tile[tileYLine | 3]];
          case 3:
            this.frameBuffer![pixelPosition + 2] = this.BGPalette![tile[tileYLine | 2]];
          case 2:
            this.frameBuffer![pixelPosition + 1] = this.BGPalette![tile[tileYLine | 1]];
          case 1:
            this.frameBuffer![pixelPosition] = this.BGPalette![tile[tileYLine]];
          default:
            break;
        }
      }
    }
  };
  BGGBCLayerRender(scanlineToRender: number) {
    let scrollYAdjusted = (this.backgroundY + scanlineToRender) & 0xFF; //The line of the BG we're at.
    let tileYLine = (scrollYAdjusted & 7) << 3;
    let tileYDown = this.gfxBackgroundCHRBankPosition | ((scrollYAdjusted & 0xF8) << 2); //The row of cached tiles   we're fetching from.
    let scrollXAdjusted = (this.backgroundX + this.currentX) & 0xFF; //The scroll amount of the BG.
    let pixelPosition = this.pixelStart + this.currentX; //Current pixel we're working on.
    let pixelPositionEnd = this.pixelStart + (this.gfxWindowDisplay && scanlineToRender - this.windowY >= 0 ? Math.min(Math.max(this.windowX, 0) + this.currentX, this.pixelEnd) : this.pixelEnd); //Make sure we do at most 160 pixels a scanline.
    let tileNumber = tileYDown + (scrollXAdjusted >> 3);
    let chrCode = this.BGCHRBank1.array[tileNumber];
    if (chrCode < this.gfxBackgroundBankOffset) {
      chrCode |= 0x100;
    }
    let attrCode = this.BGCHRBank2.array[tileNumber];
    let tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
    let palette = ((attrCode & 0x7) << 2) | ((attrCode & 0x80) >> 2);
    let texel: number = scrollXAdjusted & 0x7;
    while (texel < 8 && pixelPosition < pixelPositionEnd && scrollXAdjusted < 0x100) {
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[tileYLine | texel++]];
      scrollXAdjusted += 1;
    }
    let scrollXAdjustedAligned = Math.min(pixelPositionEnd - pixelPosition, 0x100 - scrollXAdjusted) >> 3;
    scrollXAdjusted += scrollXAdjustedAligned << 3;
    scrollXAdjustedAligned += tileNumber;
    while (tileNumber < scrollXAdjustedAligned) {
      tileNumber += 1;
      chrCode = this.BGCHRBank1.array[tileNumber];
      if (chrCode < this.gfxBackgroundBankOffset) {
        chrCode |= 0x100;
      }
      attrCode = this.BGCHRBank2.array[tileNumber];
      tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
      palette = ((attrCode & 0x7) << 2) | ((attrCode & 0x80) >> 2);
      let texel = tileYLine;
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel]];
    }
    if (pixelPosition < pixelPositionEnd) {
      if (scrollXAdjusted < 0x100) {
        tileNumber += 1;
        chrCode = this.BGCHRBank1.array[tileNumber];
        if (chrCode < this.gfxBackgroundBankOffset) {
          chrCode |= 0x100;
        }
        attrCode = this.BGCHRBank2.array[tileNumber];
        tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
        palette = ((attrCode & 0x7) << 2) | ((attrCode & 0x80) >> 2);
        texel = tileYLine - 1;
        while (pixelPosition < pixelPositionEnd && scrollXAdjusted < 0x100) {
          texel += 1;
          this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel]];
          scrollXAdjusted += 1;
        }
      }
      scrollXAdjustedAligned = ((pixelPositionEnd - pixelPosition) >> 3) + tileYDown;
      while (tileYDown < scrollXAdjustedAligned) {
        chrCode = this.BGCHRBank1.array[tileYDown];
        if (chrCode < this.gfxBackgroundBankOffset) {
          chrCode |= 0x100;
        }
        attrCode = this.BGCHRBank2.array[tileYDown++];
        tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
        palette = ((attrCode & 0x7) << 2) | ((attrCode & 0x80) >> 2);
        let texel = tileYLine;
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel]];
      }
      if (pixelPosition < pixelPositionEnd) {
        chrCode = this.BGCHRBank1.array[tileYDown];
        if (chrCode < this.gfxBackgroundBankOffset) {
          chrCode |= 0x100;
        }
        attrCode = this.BGCHRBank2.array[tileYDown];
        tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
        palette = ((attrCode & 0x7) << 2) | ((attrCode & 0x80) >> 2);
        switch (pixelPositionEnd - pixelPosition) {
          case 7:
            this.frameBuffer![pixelPosition + 6] = this.gbcBGPalette![palette | tile[tileYLine | 6]];
          case 6:
            this.frameBuffer![pixelPosition + 5] = this.gbcBGPalette![palette | tile[tileYLine | 5]];
          case 5:
            this.frameBuffer![pixelPosition + 4] = this.gbcBGPalette![palette | tile[tileYLine | 4]];
          case 4:
            this.frameBuffer![pixelPosition + 3] = this.gbcBGPalette![palette | tile[tileYLine | 3]];
          case 3:
            this.frameBuffer![pixelPosition + 2] = this.gbcBGPalette![palette | tile[tileYLine | 2]];
          case 2:
            this.frameBuffer![pixelPosition + 1] = this.gbcBGPalette![palette | tile[tileYLine | 1]];
          case 1:
            this.frameBuffer![pixelPosition] = this.gbcBGPalette![palette | tile[tileYLine]];
          default:
            break;
        }
      }
    }
  };
  BGGBCLayerRenderNoPriorityFlagging(scanlineToRender: number) {
    //deBugLog("This is BGGBCLayerRenderNoPriorityFlagging");
    let scrollYAdjusted = (this.backgroundY + scanlineToRender) & 0xFF; //The line of the BG we're at.
    let tileYLine = (scrollYAdjusted & 7) << 3;
    let tileYDown = this.gfxBackgroundCHRBankPosition | ((scrollYAdjusted & 0xF8) << 2); //The row of cached tiles   // we're fetching from.
    let scrollXAdjusted = (this.backgroundX + this.currentX) & 0xFF; //The scroll amount of the BG.
    let pixelPosition = this.pixelStart + this.currentX; //Current pixel we're working on.
    let pixelPositionEnd = this.pixelStart + (this.gfxWindowDisplay && scanlineToRender - this.windowY >= 0 ? Math.min(Math.max(this.windowX, 0) + this.currentX, this.pixelEnd) : this.pixelEnd); //Make sure we do at most 160 pixels a scanline.
    let tileNumber = tileYDown + (scrollXAdjusted >> 3);
    let chrCode = this.BGCHRBank1.array[tileNumber];
    if (chrCode < this.gfxBackgroundBankOffset) {
      chrCode |= 0x100;
    }
    let attrCode = this.BGCHRBank2.array[tileNumber];
    let tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
    let palette = (attrCode & 0x7) << 2;
    let texel: number = scrollXAdjusted & 0x7;
    while (texel < 8 && pixelPosition < pixelPositionEnd && scrollXAdjusted < 0x100) {
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[tileYLine | texel++]];
      scrollXAdjusted += 1;
    }
    let scrollXAdjustedAligned = Math.min(pixelPositionEnd - pixelPosition, 0x100 - scrollXAdjusted) >> 3;
    scrollXAdjusted += scrollXAdjustedAligned << 3;
    scrollXAdjustedAligned += tileNumber;
    while (tileNumber < scrollXAdjustedAligned) {
      tileNumber += 1;
      chrCode = this.BGCHRBank1.array[tileNumber];
      if (chrCode < this.gfxBackgroundBankOffset) {
        chrCode |= 0x100;
      }
      attrCode = this.BGCHRBank2.array[tileNumber];
      tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
      palette = (attrCode & 0x7) << 2;
      let texel = tileYLine;
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
      this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel]];
    }
    if (pixelPosition < pixelPositionEnd) {
      if (scrollXAdjusted < 0x100) {
        tileNumber += 1;
        chrCode = this.BGCHRBank1.array[tileNumber];
        if (chrCode < this.gfxBackgroundBankOffset) {
          chrCode |= 0x100;
        }
        attrCode = this.BGCHRBank2.array[tileNumber];
        tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
        palette = (attrCode & 0x7) << 2;
        let texel = tileYLine - 1;
        while (pixelPosition < pixelPositionEnd && scrollXAdjusted < 0x100) {
          texel += 1;
          this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel]];
          scrollXAdjusted += 1;
        }
      }
      scrollXAdjustedAligned = ((pixelPositionEnd - pixelPosition) >> 3) + tileYDown;
      while (tileYDown < scrollXAdjustedAligned) {
        chrCode = this.BGCHRBank1.array[tileYDown];
        if (chrCode < this.gfxBackgroundBankOffset) {
          chrCode |= 0x100;
        }
        attrCode = this.BGCHRBank2.array[tileYDown++];
        tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
        palette = (attrCode & 0x7) << 2;
        let texel = tileYLine;
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
        this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel]];
      }
      if (pixelPosition < pixelPositionEnd) {
        chrCode = this.BGCHRBank1.array[tileYDown];
        if (chrCode < this.gfxBackgroundBankOffset) {
          chrCode |= 0x100;
        }
        attrCode = this.BGCHRBank2.array[tileYDown];
        tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
        palette = (attrCode & 0x7) << 2;
        switch (pixelPositionEnd - pixelPosition) {
          case 7:
            this.frameBuffer![pixelPosition + 6] = this.gbcBGPalette![palette | tile[tileYLine | 6]];
          case 6:
            this.frameBuffer![pixelPosition + 5] = this.gbcBGPalette![palette | tile[tileYLine | 5]];
          case 5:
            this.frameBuffer![pixelPosition + 4] = this.gbcBGPalette![palette | tile[tileYLine | 4]];
          case 4:
            this.frameBuffer![pixelPosition + 3] = this.gbcBGPalette![palette | tile[tileYLine | 3]];
          case 3:
            this.frameBuffer![pixelPosition + 2] = this.gbcBGPalette![palette | tile[tileYLine | 2]];
          case 2:
            this.frameBuffer![pixelPosition + 1] = this.gbcBGPalette![palette | tile[tileYLine | 1]];
          case 1:
            this.frameBuffer![pixelPosition] = this.gbcBGPalette![palette | tile[tileYLine]];
           default:
             break;
        }
      }
    }
  };
  WindowGBLayerRender(scanlineToRender: number) {
    //deBugLog("This is WindowGBLayerRender");
    if (this.gfxWindowDisplay) {       //Is the window enabled?
      let scrollYAdjusted = scanlineToRender - this.windowY; //The line of the BG we're at.
      if (scrollYAdjusted >= 0) {
        let scrollXRangeAdjusted = this.windowX > 0 ? this.windowX + this.currentX : this.currentX;
        let pixelPosition = this.pixelStart + scrollXRangeAdjusted;
        let pixelPositionEnd = this.pixelStart + this.pixelEnd;
        if (pixelPosition < pixelPositionEnd) {
          let tileYLine = (scrollYAdjusted & 0x7) << 3;
          let tileNumber = (this.gfxWindowCHRBankPosition | ((scrollYAdjusted & 0xF8) << 2)) + (this.currentX >> 3);
          let chrCode = this.BGCHRBank1.array[tileNumber];
          if (chrCode < this.gfxBackgroundBankOffset) {
            chrCode |= 0x100;
          }
          let tile = this.tileCache![chrCode].array;
          let texel = (scrollXRangeAdjusted - this.windowX) & 0x7;
          scrollXRangeAdjusted = Math.min(8, texel + pixelPositionEnd - pixelPosition);
          while (texel < scrollXRangeAdjusted) {
            this.frameBuffer![pixelPosition++] = this.BGPalette![tile[tileYLine | texel++]];
          }
          scrollXRangeAdjusted = tileNumber + ((pixelPositionEnd - pixelPosition) >> 3);
          while (tileNumber < scrollXRangeAdjusted) {
            tileNumber += 1;
            chrCode = this.BGCHRBank1.array[tileNumber];
            if (chrCode < this.gfxBackgroundBankOffset) {
              chrCode |= 0x100;
            }
            tile = this.tileCache![chrCode].array;
            texel = tileYLine;
            this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.BGPalette![tile[texel]];
          }
          if (pixelPosition < pixelPositionEnd) {
            tileNumber += 1;
            chrCode = this.BGCHRBank1.array[tileNumber];
            if (chrCode < this.gfxBackgroundBankOffset) {
              chrCode |= 0x100;
            }
            tile = this.tileCache![chrCode].array;
            switch (pixelPositionEnd - pixelPosition) {
              case 7:
                this.frameBuffer![pixelPosition + 6] = this.BGPalette![tile[tileYLine | 6]];
              case 6:
                this.frameBuffer![pixelPosition + 5] = this.BGPalette![tile[tileYLine | 5]];
              case 5:
                this.frameBuffer![pixelPosition + 4] = this.BGPalette![tile[tileYLine | 4]];
              case 4:
                this.frameBuffer![pixelPosition + 3] = this.BGPalette![tile[tileYLine | 3]];
              case 3:
                this.frameBuffer![pixelPosition + 2] = this.BGPalette![tile[tileYLine | 2]];
              case 2:
                this.frameBuffer![pixelPosition + 1] = this.BGPalette![tile[tileYLine | 1]];
              case 1:
                this.frameBuffer![pixelPosition] = this.BGPalette![tile[tileYLine]];
              default:
                break;
            }
          }
        }
      }
    }
  };
  WindowGBCLayerRender(scanlineToRender: number) {
    if (this.gfxWindowDisplay) {   //Is the window enabled?
      let scrollYAdjusted = scanlineToRender - this.windowY; //The line of the BG we're at.
      if (scrollYAdjusted >= 0) {
        let scrollXRangeAdjusted = this.windowX > 0 ? this.windowX + this.currentX : this.currentX;
        let pixelPosition = this.pixelStart + scrollXRangeAdjusted;
        let pixelPositionEnd = this.pixelStart + this.pixelEnd;
        if (pixelPosition < pixelPositionEnd) {
          let tileYLine = (scrollYAdjusted & 0x7) << 3;
          let tileNumber = (this.gfxWindowCHRBankPosition | ((scrollYAdjusted & 0xF8) << 2)) + (this.currentX >> 3);
          let chrCode = this.BGCHRBank1.array[tileNumber];
          if (chrCode < this.gfxBackgroundBankOffset) {
            chrCode |= 0x100;
          }
          let attrCode = this.BGCHRBank2.array[tileNumber];
          let tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
          let palette = ((attrCode & 0x7) << 2) | ((attrCode & 0x80) >> 2);
          let texel = (scrollXRangeAdjusted - this.windowX) & 0x7;
          scrollXRangeAdjusted = Math.min(8, texel + pixelPositionEnd - pixelPosition);
          while (texel < scrollXRangeAdjusted) {
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[tileYLine | texel++]];
          }
          scrollXRangeAdjusted = tileNumber + ((pixelPositionEnd - pixelPosition) >> 3);
          while (tileNumber < scrollXRangeAdjusted) {
              tileNumber += 1;
            chrCode = this.BGCHRBank1.array[tileNumber];
            if (chrCode < this.gfxBackgroundBankOffset) {
              chrCode |= 0x100;
            }
            attrCode = this.BGCHRBank2.array[tileNumber];
            tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
            palette = ((attrCode & 0x7) << 2) | ((attrCode & 0x80) >> 2);
            texel = tileYLine;
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel]];
          }
          if (pixelPosition < pixelPositionEnd) {
            tileNumber += 1;
            chrCode = this.BGCHRBank1.array[tileNumber];
            if (chrCode < this.gfxBackgroundBankOffset) {
              chrCode |= 0x100;
            }
            attrCode = this.BGCHRBank2.array[tileNumber];
            tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
            palette = ((attrCode & 0x7) << 2) | ((attrCode & 0x80) >> 2);
            switch (pixelPositionEnd - pixelPosition) {
              case 7:
                this.frameBuffer![pixelPosition + 6] = this.gbcBGPalette![palette | tile[tileYLine | 6]];
              case 6:
                this.frameBuffer![pixelPosition + 5] = this.gbcBGPalette![palette | tile[tileYLine | 5]];
              case 5:
                this.frameBuffer![pixelPosition + 4] = this.gbcBGPalette![palette | tile[tileYLine | 4]];
              case 4:
                this.frameBuffer![pixelPosition + 3] = this.gbcBGPalette![palette | tile[tileYLine | 3]];
              case 3:
                this.frameBuffer![pixelPosition + 2] = this.gbcBGPalette![palette | tile[tileYLine | 2]];
              case 2:
                this.frameBuffer![pixelPosition + 1] = this.gbcBGPalette![palette | tile[tileYLine | 1]];
              case 1:
                this.frameBuffer![pixelPosition] = this.gbcBGPalette![palette | tile[tileYLine]];
              default:
                 break;
            }
          }
        }
      }
    }
  };
  WindowGBCLayerRenderNoPriorityFlagging(scanlineToRender: number) {
    //deBugLog("This is WindowGBCLayerRenderNoPriorityFlagging");
    if (this.gfxWindowDisplay) {      //Is the window enabled?
      let scrollYAdjusted = scanlineToRender - this.windowY; //The line of the BG we're at.
      if (scrollYAdjusted >= 0) {
        let scrollXRangeAdjusted = this.windowX > 0 ? this.windowX + this.currentX : this.currentX;
        let pixelPosition = this.pixelStart + scrollXRangeAdjusted;
        let pixelPositionEnd = this.pixelStart + this.pixelEnd;
        if (pixelPosition < pixelPositionEnd) {
          let tileYLine = (scrollYAdjusted & 0x7) << 3;
          let tileNumber = (this.gfxWindowCHRBankPosition | ((scrollYAdjusted & 0xF8) << 2)) + (this.currentX >> 3);
          let chrCode = this.BGCHRBank1.array[tileNumber];
          if (chrCode < this.gfxBackgroundBankOffset) {
            chrCode |= 0x100;
          }
          let attrCode = this.BGCHRBank2.array[tileNumber];
          let tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
          let palette = (attrCode & 0x7) << 2;
          let texel = (scrollXRangeAdjusted - this.windowX) & 0x7;
          scrollXRangeAdjusted = Math.min(8, texel + pixelPositionEnd - pixelPosition);
          while (texel < scrollXRangeAdjusted) {
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[tileYLine | texel++]];
          }
          scrollXRangeAdjusted = tileNumber + ((pixelPositionEnd - pixelPosition) >> 3);
          while (tileNumber < scrollXRangeAdjusted) {
            tileNumber += 1;
            chrCode = this.BGCHRBank1.array[tileNumber];
            if (chrCode < this.gfxBackgroundBankOffset) {
              chrCode |= 0x100;
            }
            attrCode = this.BGCHRBank2.array[tileNumber];
            tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
            palette = (attrCode & 0x7) << 2;
            texel = tileYLine;
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel++]];
            this.frameBuffer![pixelPosition++] = this.gbcBGPalette![palette | tile[texel]];
          }
          if (pixelPosition < pixelPositionEnd) {
            tileNumber += 1;
            chrCode = this.BGCHRBank1.array[tileNumber];
            if (chrCode < this.gfxBackgroundBankOffset) {
              chrCode |= 0x100;
            }
            attrCode = this.BGCHRBank2.array[tileNumber];
            tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | chrCode].array;
            palette = (attrCode & 0x7) << 2;
            switch (pixelPositionEnd - pixelPosition) {
              case 7:
                this.frameBuffer![pixelPosition + 6] = this.gbcBGPalette![palette | tile[tileYLine | 6]];
              case 6:
                this.frameBuffer![pixelPosition + 5] = this.gbcBGPalette![palette | tile[tileYLine | 5]];
              case 5:
                this.frameBuffer![pixelPosition + 4] = this.gbcBGPalette![palette | tile[tileYLine | 4]];
              case 4:
                this.frameBuffer![pixelPosition + 3] = this.gbcBGPalette![palette | tile[tileYLine | 3]];
              case 3:
                this.frameBuffer![pixelPosition + 2] = this.gbcBGPalette![palette | tile[tileYLine | 2]];
              case 2:
                this.frameBuffer![pixelPosition + 1] = this.gbcBGPalette![palette | tile[tileYLine | 1]];
              case 1:
                this.frameBuffer![pixelPosition] = this.gbcBGPalette![palette | tile[tileYLine]];
              default: break;
            }
          }
        }
      }
    }
  };
  SpriteGBLayerRender(scanlineToRender: number) {
    //deBugLog("This is SpriteGBLayerRender");
    if (this.gfxSpriteShow) {                //Are sprites enabled?
      let lineAdjusted = scanlineToRender + 0x10;
      let OAMAddress = 0xFE00;
      let yoffset = 0;
      let xcoord = 1;
      let xCoordStart = 0;
      let xCoordEnd = 0;
      let attrCode = 0;
      let palette = 0;
      let tile: TNextArray = new Int32Array();
      let data = 0;
      let spriteCount = 0;
      let length = 0;
      let currentPixel = 0;
      let linePixel = 0;
      //Clear our x-coord sort buffer:
      while (xcoord < 168) {
        this.sortBuffer![xcoord++] = 0xFF;
      }
      if (this.gfxSpriteNormalHeight) {
        //Draw the visible sprites:
        let length: number = this.findLowestSpriteDrawable(lineAdjusted, 0x7);
        while (spriteCount < length) {
          OAMAddress = this.OAMAddressCache![spriteCount];
          yoffset = (lineAdjusted - this.memory[OAMAddress]) << 3;
          attrCode = this.memory[OAMAddress | 3];
          palette = (attrCode & 0x10) >> 2;
          tile = this.tileCache![((attrCode & 0x60) << 4) | this.memory[OAMAddress | 0x2]].array;
          linePixel = this.memory[OAMAddress | 1];
	  xCoordStart = this.memory[OAMAddress | 1];
          xCoordEnd = Math.min(168 - linePixel, 8);
          xcoord = linePixel > 7 ? 0 : 8 - linePixel;
          currentPixel = this.pixelStart + (linePixel > 8 ? linePixel - 8 : 0);
          while (xcoord < xCoordEnd) {
            if (this.sortBuffer![linePixel] > xCoordStart) {
              if (this.frameBuffer[currentPixel] >= 0x2000000) {
                data = tile[yoffset | xcoord];
                if (data > 0) {
                  this.frameBuffer![currentPixel] = this.OBJPalette![palette | data];
                  this.sortBuffer![linePixel] = xCoordStart;
                }
              } 
	      else if (this.frameBuffer[currentPixel] < 0x1000000) {
                data = tile[yoffset | xcoord];
                if (data > 0 && attrCode < 0x80) {
                  this.frameBuffer![currentPixel] = this.OBJPalette![palette | data];
                  this.sortBuffer![linePixel] = xCoordStart;
                }
              }
            }
            xcoord += 1;
            currentPixel += 1;
            linePixel += 1;
          }
          spriteCount += 1;
        }
      }
      else {
        //Draw the visible sprites:
        let length = this.findLowestSpriteDrawable(lineAdjusted, 0xF);
        while (spriteCount < length) {
          OAMAddress = this.OAMAddressCache![spriteCount];
          yoffset = (lineAdjusted - this.memory[OAMAddress]) << 3;
          attrCode = this.memory[OAMAddress | 3];
          palette = (attrCode & 0x10) >> 2;
          if ((attrCode & 0x40) == (0x40 & yoffset)) {
            tile = this.tileCache![((attrCode & 0x60) << 4) | (this.memory[OAMAddress | 0x2] & 0xFE)].array;
          }
          else {
            tile = this.tileCache![((attrCode & 0x60) << 4) | this.memory[OAMAddress | 0x2] | 1].array;
          }
          yoffset &= 0x3F;
          xCoordStart = this.memory[OAMAddress | 1];
	   linePixel = xCoordStart;
          xCoordEnd = Math.min(168 - linePixel, 8);
          xcoord = linePixel > 7 ? 0 : 8 - linePixel;
          currentPixel = this.pixelStart + (linePixel > 8 ? linePixel - 8 : 0);
          while (xcoord < xCoordEnd) {
            if (this.sortBuffer![linePixel] > xCoordStart) {
              if (this.frameBuffer[currentPixel] >= 0x2000000) {
                data = tile[yoffset | xcoord];
                if (data > 0) {
                  this.frameBuffer![currentPixel] = this.OBJPalette![palette | data];
                  this.sortBuffer![linePixel] = xCoordStart;
                }
              } 
	      else if (this.frameBuffer[currentPixel] < 0x1000000) {
                data = tile[yoffset | xcoord];
                if (data > 0 && attrCode < 0x80) {
                  this.frameBuffer![currentPixel] = this.OBJPalette![palette | data];
                  this.sortBuffer![linePixel] = xCoordStart;
                }
              }
            }
            xcoord += 1;
            currentPixel += 1;
            linePixel += 1;
          }
          spriteCount += 1;
        }
      }
    }
  };
  findLowestSpriteDrawable(scanlineToRender: number, drawableRange: number): number {
    //deBugLog("This is findLowestSpriteDrawable");
    let address = 0xFE00;
    let spriteCount = 0;
    let diff = 0;
    while (address < 0xFEA0 && spriteCount < 10) {
      diff = scanlineToRender - this.memory[address];
      if ((diff & drawableRange) == diff) {
        this.OAMAddressCache![spriteCount++] = address;
      }
      address += 4;
    }
    return spriteCount;
  };
  SpriteGBCLayerRender(scanlineToRender: number) {
    if (this.gfxSpriteShow) {                     //Are sprites enabled?
      let OAMAddress = 0xFE00;
      let lineAdjusted = scanlineToRender + 0x10;
      let yoffset = 0;
      let xcoord = 0;
      let endX = 0;
      let xCounter = 0;
      let attrCode = 0;
      let palette = 0;
      let tile: TNextArray | null = null;
      let data = 0;
      let currentPixel = 0;
      let spriteCount = 0;
      if (this.gfxSpriteNormalHeight) {
        while (OAMAddress < 0xFEA0 && spriteCount < 10) {
          yoffset = lineAdjusted - this.memory[OAMAddress];
          if ((yoffset & 0x7) == yoffset) {
            xcoord = this.memory[OAMAddress | 1] - 8;
            endX = Math.min(160, xcoord + 8);
            attrCode = this.memory[OAMAddress | 3];
            palette = (attrCode & 7) << 2;
            tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | this.memory[OAMAddress | 2]].array;
            xCounter = xcoord > 0 ? xcoord : 0;
            xcoord -= yoffset << 3;
            currentPixel = this.pixelStart + xCounter;
            while (xCounter < endX) {
              if (this.frameBuffer[currentPixel] >= 0x2000000) {
                data = tile[xCounter - xcoord];
                if (data > 0) {
                  this.frameBuffer![currentPixel] = this.gbcOBJPalette![palette | data];
                }
              } else if (this.frameBuffer[currentPixel] < 0x1000000) {
                data = tile[xCounter - xcoord];
                if (data > 0 && attrCode < 0x80) { //Don't optimize for attrCode, as LICM-capable JITs should optimize its checks.
                  this.frameBuffer![currentPixel] = this.gbcOBJPalette![palette | data];
                }
              }
              xCounter += 1;
              currentPixel += 1;
            }
            spriteCount += 1;
          }
          OAMAddress += 4;
        }
      }
      else {
        while (OAMAddress < 0xFEA0 && spriteCount < 10) {
          yoffset = lineAdjusted - this.memory[OAMAddress];
          if ((yoffset & 0xF) == yoffset) {
            xcoord = this.memory[OAMAddress | 1] - 8;
            endX = Math.min(160, xcoord + 8);
            attrCode = this.memory[OAMAddress | 3];
            palette = (attrCode & 7) << 2;
            if ((attrCode & 0x40) == (0x40 & (yoffset << 3))) {
              tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | (this.memory[OAMAddress | 0x2] & 0xfe)].array;
            }
            else {
              tile = this.tileCache![((attrCode & 0x08) << 8) | ((attrCode & 0x60) << 4) | this.memory[OAMAddress | 0x2] | 1].array;
            }
            xCounter = xcoord > 0 ? xcoord : 0;
            xcoord -= (yoffset & 0x7) << 3;
            currentPixel = this.pixelStart + xCounter;
            while (xCounter < endX) {
              if (this.frameBuffer[currentPixel] >= 0x2000000) {
                data = tile[xCounter - xcoord];
                if (data > 0) {
                  this.frameBuffer![currentPixel] = this.gbcOBJPalette![palette | data];
                }
              } else if (this.frameBuffer[currentPixel] < 0x1000000) {
                data = tile[xCounter - xcoord];
                if (data > 0 && attrCode < 0x80) {      //Don't optimize for attrCode, as LICM-capable JITs should optimize its checks.
                  this.frameBuffer![currentPixel] = this.gbcOBJPalette![palette | data];
                }
              }
              xCounter += 1;
              currentPixel += 1;
            }
            spriteCount += 1;
          }
          OAMAddress += 4;
        }
      }
    }
  };
  //Generate only a single tile line for the GB tile cache mode:
  generateGBTileLine(addressTemp: number) {
    //deBugLog("This is generateGBTileLine");
    let address = addressTemp;
    let lineCopy = (this.memory[0x1 | address] << 8) | this.memory[0x9FFE & address];
    let tileBlock = this.tileCache![(address & 0x1FF0) >> 4];
    address = (address & 0xE) << 2;
    tileBlock.array[address | 7] = ((lineCopy & 0x100) >> 7) | (lineCopy & 0x1);
    tileBlock.array[address | 6] = ((lineCopy & 0x200) >> 8) | ((lineCopy & 0x2) >> 1);
    tileBlock.array[address | 5] = ((lineCopy & 0x400) >> 9) | ((lineCopy & 0x4) >> 2);
    tileBlock.array[address | 4] = ((lineCopy & 0x800) >> 10) | ((lineCopy & 0x8) >> 3);
    tileBlock.array[address | 3] = ((lineCopy & 0x1000) >> 11) | ((lineCopy & 0x10) >> 4);
    tileBlock.array[address | 2] = ((lineCopy & 0x2000) >> 12) | ((lineCopy & 0x20) >> 5);
    tileBlock.array[address | 1] = ((lineCopy & 0x4000) >> 13) | ((lineCopy & 0x40) >> 6);
    tileBlock.array[address] = ((lineCopy & 0x8000) >> 14) | ((lineCopy & 0x80) >> 7);
  };
  //Generate only a single tile line for the GBC tile cache mode (Bank 1):
  generateGBCTileLineBank1(addressTemp: number) {
    let address = addressTemp;
    let lineCopy = (this.memory[0x1 | address] << 8) | this.memory[0x9FFE & address];
    address &= 0x1FFE;
    let tileBlock1 = this.tileCache![address >> 4];
    let tileBlock2 = this.tileCache![0x200 | (address >> 4)];
    let tileBlock3 = this.tileCache![0x400 | (address >> 4)];
    let tileBlock4 = this.tileCache![0x600 | (address >> 4)];
    address = (address & 0xE) << 2;
    let addressFlipped = 0x38 - address;
    tileBlock1.array[address | 7] = ((lineCopy & 0x100) >> 7) | (lineCopy & 0x1);
    tileBlock4.array[addressFlipped] = tileBlock1.array[address | 7];
    tileBlock2.array[address] = tileBlock1.array[address | 7];
    tileBlock3.array[addressFlipped | 7] = tileBlock1.array[address | 7];
    tileBlock1.array[address | 6] = ((lineCopy & 0x200) >> 8) | ((lineCopy & 0x2) >> 1);
    tileBlock4.array[addressFlipped | 1] = tileBlock1.array[address | 6];
    tileBlock2.array[address | 1] = tileBlock1.array[address | 6];
    tileBlock3.array[addressFlipped | 6] = tileBlock1.array[address | 6];
    tileBlock1.array[address | 5] = ((lineCopy & 0x400) >> 9) | ((lineCopy & 0x4) >> 2);
    tileBlock4.array[addressFlipped | 2] = tileBlock1.array[address | 5];
    tileBlock2.array[address | 2] = tileBlock1.array[address | 5];
    tileBlock3.array[addressFlipped | 5] = tileBlock1.array[address | 5];
    tileBlock1.array[address | 4] = ((lineCopy & 0x800) >> 10) | ((lineCopy & 0x8) >> 3);
    tileBlock4.array[addressFlipped | 3] = tileBlock1.array[address | 4];
    tileBlock2.array[address | 3] = tileBlock1.array[address | 4];
    tileBlock3.array[addressFlipped | 4] = tileBlock1.array[address | 4];
    tileBlock1.array[address | 3] = ((lineCopy & 0x1000) >> 11) | ((lineCopy & 0x10) >> 4);
    tileBlock4.array[addressFlipped | 4] = tileBlock1.array[address | 3];
    tileBlock2.array[address | 4] = tileBlock1.array[address | 3];
    tileBlock3.array[addressFlipped | 3] = tileBlock1.array[address | 3];
    tileBlock1.array[address | 2] = ((lineCopy & 0x2000) >> 12) | ((lineCopy & 0x20) >> 5);
    tileBlock4.array[addressFlipped | 5] = tileBlock1.array[address | 2];
    tileBlock2.array[address | 5] = tileBlock1.array[address | 2];
    tileBlock3.array[addressFlipped | 2] = tileBlock1.array[address | 2];
    tileBlock1.array[address | 1] = ((lineCopy & 0x4000) >> 13) | ((lineCopy & 0x40) >> 6);
    tileBlock4.array[addressFlipped | 6] = tileBlock1.array[address | 1];
    tileBlock2.array[address | 6] = tileBlock1.array[address | 1];
    tileBlock3.array[addressFlipped | 1] = tileBlock1.array[address | 1];
    tileBlock1.array[address] = ((lineCopy & 0x8000) >> 14) | ((lineCopy & 0x80) >> 7);
    tileBlock4.array[addressFlipped | 7] = tileBlock1.array[address];
    tileBlock2.array[address | 7] = tileBlock1.array[address];
    tileBlock3.array[addressFlipped] = tileBlock1.array[address];
  };
  //Generate all the flip combinations for a full GBC VRAM bank 1 tile:
  generateGBCTileBank1(vramAddressTemp: number) {
    let vramAddress = vramAddressTemp;
    let address = vramAddress >> 4;
    let tileBlock1 = this.tileCache![address];
    let tileBlock2 = this.tileCache![0x200 | address];
    let tileBlock3 = this.tileCache![0x400 | address];
    let tileBlock4 = this.tileCache![0x600 | address];
    let lineCopy = 0;
    vramAddress |= 0x8000;
    address = 0;
    let addressFlipped = 56;
    do {
      lineCopy = (this.memory[0x1 | vramAddress] << 8) | this.memory[vramAddress];
      tileBlock1.array[address | 7] = ((lineCopy & 0x100) >> 7) | (lineCopy & 0x1);
      tileBlock4.array[addressFlipped] = tileBlock1.array[address | 7];
      tileBlock2.array[address] = tileBlock1.array[address | 7];
      tileBlock3.array[addressFlipped | 7] = tileBlock1.array[address | 7];
      tileBlock1.array[address | 6] = ((lineCopy & 0x200) >> 8) | ((lineCopy & 0x2) >> 1);
      tileBlock4.array[addressFlipped | 1] = tileBlock1.array[address | 6];
      tileBlock2.array[address | 1] = tileBlock1.array[address | 6];
      tileBlock3.array[addressFlipped | 6] = tileBlock1.array[address | 6];
      tileBlock1.array[address | 5] = ((lineCopy & 0x400) >> 9) | ((lineCopy & 0x4) >> 2);
      tileBlock4.array[addressFlipped | 2] = tileBlock1.array[address | 5];
      tileBlock2.array[address | 2] = tileBlock1.array[address | 5];
      tileBlock3.array[addressFlipped | 5] = tileBlock1.array[address | 5];
      tileBlock1.array[address | 4] = ((lineCopy & 0x800) >> 10) | ((lineCopy & 0x8) >> 3);
      tileBlock4.array[addressFlipped | 3] = tileBlock1.array[address | 4];
      tileBlock2.array[address | 3] = tileBlock1.array[address | 4];
      tileBlock3.array[addressFlipped | 4] = tileBlock1.array[address | 4];
      tileBlock1.array[address | 3] = ((lineCopy & 0x1000) >> 11) | ((lineCopy & 0x10) >> 4);
      tileBlock4.array[addressFlipped | 4] = tileBlock1.array[address | 3];
      tileBlock2.array[address | 4] = tileBlock1.array[address | 3];
      tileBlock3.array[addressFlipped | 3] = tileBlock1.array[address | 3];
      tileBlock1.array[address | 2] = ((lineCopy & 0x2000) >> 12) | ((lineCopy & 0x20) >> 5);
      tileBlock4.array[addressFlipped | 5] = tileBlock1.array[address | 2];
      tileBlock2.array[address | 5] = tileBlock1.array[address | 2];
      tileBlock3.array[addressFlipped | 2] = tileBlock1.array[address | 2];
      tileBlock1.array[address | 1] = ((lineCopy & 0x4000) >> 13) | ((lineCopy & 0x40) >> 6);
      tileBlock4.array[addressFlipped | 6] = tileBlock1.array[address | 1];
      tileBlock2.array[address | 6] = tileBlock1.array[address | 1];
      tileBlock3.array[addressFlipped | 1] = tileBlock1.array[address | 1];
      tileBlock1.array[address] = ((lineCopy & 0x8000) >> 14) | ((lineCopy & 0x80) >> 7);
      tileBlock4.array[addressFlipped | 7] = tileBlock1.array[address];
      tileBlock2.array[address | 7] = tileBlock1.array[address];
      tileBlock3.array[addressFlipped] = tileBlock1.array[address];
      address += 8;
      addressFlipped -= 8;
      vramAddress += 2;
    } while (addressFlipped > -1);
  };
  //Generate only a single tile line for the GBC tile cache mode (Bank 2):
  generateGBCTileLineBank2(addressTemp: number) {
    //deBugLog("This is generateGBCTileLineBank2");
    let address = addressTemp;
    let lineCopy = (this.VRAM![0x1 | address] << 8) | this.VRAM![0x1FFE & address];
    let tileBlock1 = this.tileCache![0x800 | (address >> 4)];
    let tileBlock2 = this.tileCache![0xA00 | (address >> 4)];
    let tileBlock3 = this.tileCache![0xC00 | (address >> 4)];
    let tileBlock4 = this.tileCache![0xE00 | (address >> 4)];
    address = (address & 0xE) << 2;
    let addressFlipped = 0x38 - address;
    tileBlock1.array[address | 7] = ((lineCopy & 0x100) >> 7) | (lineCopy & 0x1);
    tileBlock4.array[addressFlipped] = tileBlock1.array[address | 7];
    tileBlock2.array[address] = tileBlock1.array[address | 7];
    tileBlock3.array[addressFlipped | 7] = tileBlock1.array[address | 7];
    tileBlock1.array[address | 6] = ((lineCopy & 0x200) >> 8) | ((lineCopy & 0x2) >> 1);
    tileBlock4.array[addressFlipped | 1] = tileBlock1.array[address | 6];
    tileBlock2.array[address | 1] = tileBlock1.array[address | 6];
    tileBlock3.array[addressFlipped | 6] = tileBlock1.array[address | 6];
    tileBlock1.array[address | 5] = ((lineCopy & 0x400) >> 9) | ((lineCopy & 0x4) >> 2);
    tileBlock4.array[addressFlipped | 2] = tileBlock1.array[address | 5];
    tileBlock2.array[address | 2] = tileBlock1.array[address | 5];
    tileBlock3.array[addressFlipped | 5] = tileBlock1.array[address | 5];
    tileBlock1.array[address | 4] = ((lineCopy & 0x800) >> 10) | ((lineCopy & 0x8) >> 3);
    tileBlock4.array[addressFlipped | 3] = tileBlock1.array[address | 4];
    tileBlock2.array[address | 3] = tileBlock1.array[address | 4];
    tileBlock3.array[addressFlipped | 4] = tileBlock1.array[address | 4];
    tileBlock1.array[address | 3] = ((lineCopy & 0x1000) >> 11) | ((lineCopy & 0x10) >> 4);
    tileBlock4.array[addressFlipped | 4] = tileBlock1.array[address | 3];
    tileBlock2.array[address | 4] = tileBlock1.array[address | 3];
    tileBlock3.array[addressFlipped | 3] = tileBlock1.array[address | 3];
    tileBlock1.array[address | 2] = ((lineCopy & 0x2000) >> 12) | ((lineCopy & 0x20) >> 5);
    tileBlock4.array[addressFlipped | 5] = tileBlock1.array[address | 2];
    tileBlock2.array[address | 5] = tileBlock1.array[address | 2];
    tileBlock3.array[addressFlipped | 2] = tileBlock1.array[address | 2];
    tileBlock1.array[address | 1] = ((lineCopy & 0x4000) >> 13) | ((lineCopy & 0x40) >> 6);
    tileBlock4.array[addressFlipped | 6] = tileBlock1.array[address | 1];
    tileBlock2.array[address | 6] = tileBlock1.array[address | 1];
    tileBlock3.array[addressFlipped | 1] = tileBlock1.array[address | 1];
    tileBlock1.array[address] = ((lineCopy & 0x8000) >> 14) | ((lineCopy & 0x80) >> 7);
    tileBlock4.array[addressFlipped | 7] = tileBlock1.array[address];
    tileBlock2.array[address | 7] = tileBlock1.array[address];
    tileBlock3.array[addressFlipped] = tileBlock1.array[address];
  };
  //Generate all the flip combinations for a full GBC VRAM bank 2 tile:
  generateGBCTileBank2(vramAddressTemp: number) {
    let vramAddress = vramAddressTemp;
    let address = vramAddress >> 4;
    let tileBlock1 = this.tileCache![0x800 | address];
    let tileBlock2 = this.tileCache![0xA00 | address];
    let tileBlock3 = this.tileCache![0xC00 | address];
    let tileBlock4 = this.tileCache![0xE00 | address];
    let lineCopy = 0;
    address = 0;
    let addressFlipped = 56;
    do {
      lineCopy = (this.VRAM![0x1 | vramAddress] << 8) | this.VRAM![vramAddress];
      tileBlock1.array[address | 7] = ((lineCopy & 0x100) >> 7) | (lineCopy & 0x1);
      tileBlock4.array[addressFlipped] = tileBlock1.array[address | 7];
      tileBlock2.array[address] = tileBlock1.array[address | 7];
      tileBlock3.array[addressFlipped | 7] = tileBlock1.array[address | 7];
      tileBlock1.array[address | 6] = ((lineCopy & 0x200) >> 8) | ((lineCopy & 0x2) >> 1);
      tileBlock4.array[addressFlipped | 1] = tileBlock1.array[address | 6];
      tileBlock2.array[address | 1] = tileBlock1.array[address | 6];
      tileBlock3.array[addressFlipped | 6] = tileBlock1.array[address | 6];
      tileBlock1.array[address | 5] = ((lineCopy & 0x400) >> 9) | ((lineCopy & 0x4) >> 2);
      tileBlock4.array[addressFlipped | 2] = tileBlock1.array[address | 5];
      tileBlock2.array[address | 2] = tileBlock1.array[address | 5];
      tileBlock3.array[addressFlipped | 5] = tileBlock1.array[address | 5];
      tileBlock1.array[address | 4] = ((lineCopy & 0x800) >> 10) | ((lineCopy & 0x8) >> 3);
      tileBlock4.array[addressFlipped | 3] = tileBlock1.array[address | 4];
      tileBlock2.array[address | 3] = tileBlock1.array[address | 4];
      tileBlock3.array[addressFlipped | 4] = tileBlock1.array[address | 4];
      tileBlock1.array[address | 3] = ((lineCopy & 0x1000) >> 11) | ((lineCopy & 0x10) >> 4);
      tileBlock4.array[addressFlipped | 4] = tileBlock1.array[address | 3];
      tileBlock2.array[address | 4] = tileBlock1.array[address | 3];
      tileBlock3.array[addressFlipped | 3] = tileBlock1.array[address | 3];
      tileBlock1.array[address | 2] = ((lineCopy & 0x2000) >> 12) | ((lineCopy & 0x20) >> 5);
      tileBlock4.array[addressFlipped | 5] = tileBlock1.array[address | 2];
      tileBlock2.array[address | 5] = tileBlock1.array[address | 2];
      tileBlock3.array[addressFlipped | 2] = tileBlock1.array[address | 2];
      tileBlock1.array[address | 1] = ((lineCopy & 0x4000) >> 13) | ((lineCopy & 0x40) >> 6);
      tileBlock4.array[addressFlipped | 6] = tileBlock1.array[address | 1];
      tileBlock2.array[address | 6] = tileBlock1.array[address | 1];
      tileBlock3.array[addressFlipped | 1] = tileBlock1.array[address | 1];
      tileBlock1.array[address] = ((lineCopy & 0x8000) >> 14) | ((lineCopy & 0x80) >> 7);
      tileBlock4.array[addressFlipped | 7] = tileBlock1.array[address];
      tileBlock2.array[address | 7] = tileBlock1.array[address];
      tileBlock3.array[addressFlipped] = tileBlock1.array[address];
      address += 8;
      addressFlipped -= 8;
      vramAddress += 2;
    } while (addressFlipped > -1);
  };
  //Generate only a single tile line for the GB tile cache mode (OAM accessible range):
  generateGBOAMTileLine(addressTemp: number) {
    //deBugLog("This is generateGBOAMTileLine");
    let address = addressTemp;
    let lineCopy = (this.memory[0x1 | address] << 8) | this.memory[0x9FFE & address];
    address &= 0x1FFE;
    let tileBlock1 = this.tileCache![address >> 4];
    let tileBlock2 = this.tileCache![0x200 | (address >> 4)];
    let tileBlock3 = this.tileCache![0x400 | (address >> 4)];
    let tileBlock4 = this.tileCache![0x600 | (address >> 4)];
    address = (address & 0xE) << 2;
    let addressFlipped = 0x38 - address;
    tileBlock1.array[address | 7] = ((lineCopy & 0x100) >> 7) | (lineCopy & 0x1);
    tileBlock4.array[addressFlipped] = tileBlock1.array[address | 7];
    tileBlock2.array[address] = tileBlock1.array[address | 7];
    tileBlock3.array[addressFlipped | 7] = tileBlock1.array[address | 7];
    tileBlock1.array[address | 6] = ((lineCopy & 0x200) >> 8) | ((lineCopy & 0x2) >> 1);
    tileBlock4.array[addressFlipped | 1] = tileBlock1.array[address | 6];
    tileBlock2.array[address | 1] = tileBlock1.array[address | 6];
    tileBlock3.array[addressFlipped | 6] = tileBlock1.array[address | 6];
    tileBlock1.array[address | 5] = ((lineCopy & 0x400) >> 9) | ((lineCopy & 0x4) >> 2);
    tileBlock4.array[addressFlipped | 2] = tileBlock1.array[address | 5];
    tileBlock2.array[address | 2] = tileBlock1.array[address | 5];
    tileBlock3.array[addressFlipped | 5] = tileBlock1.array[address | 5];
    tileBlock1.array[address | 4] = ((lineCopy & 0x800) >> 10) | ((lineCopy & 0x8) >> 3);
    tileBlock4.array[addressFlipped | 3] = tileBlock1.array[address | 4];
    tileBlock2.array[address | 3] = tileBlock1.array[address | 4];
    tileBlock3.array[addressFlipped | 4] = tileBlock1.array[address | 4];
    tileBlock1.array[address | 3] = ((lineCopy & 0x1000) >> 11) | ((lineCopy & 0x10) >> 4);
    tileBlock4.array[addressFlipped | 4] = tileBlock1.array[address | 3];
    tileBlock2.array[address | 4] = tileBlock1.array[address | 3];
    tileBlock3.array[addressFlipped | 3] = tileBlock1.array[address | 3];
    tileBlock1.array[address | 2] = ((lineCopy & 0x2000) >> 12) | ((lineCopy & 0x20) >> 5);
    tileBlock4.array[addressFlipped | 5] = tileBlock1.array[address | 2];
    tileBlock2.array[address | 5] = tileBlock1.array[address | 2];
    tileBlock3.array[addressFlipped | 2] = tileBlock1.array[address | 2];
    tileBlock1.array[address | 1] = ((lineCopy & 0x4000) >> 13) | ((lineCopy & 0x40) >> 6);
    tileBlock4.array[addressFlipped | 6] = tileBlock1.array[address | 1]
    tileBlock2.array[address | 6] = tileBlock1.array[address | 1]
    tileBlock3.array[addressFlipped | 1] = tileBlock1.array[address | 1]
    tileBlock1.array[address] = ((lineCopy & 0x8000) >> 14) | ((lineCopy & 0x80) >> 7);
    tileBlock4.array[addressFlipped | 7] = tileBlock1.array[address]
    tileBlock2.array[address | 7] = tileBlock1.array[address]
    tileBlock3.array[addressFlipped] = tileBlock1.array[address]
  };
  graphicsJIT() {
    if (this.LCDisOn) {
      this.totalLinesPassed = 0; //Mark frame for ensuring a JIT pass for the next framebuffer output.
      this.graphicsJITScanlineGroup();
    }
  };
  graphicsJITVBlank() {
    //deBugLog("This is graphicsJITVBlank");
    //JIT the graphics to v-blank framing:
    this.totalLinesPassed += this.queuedScanLines;
    this.graphicsJITScanlineGroup();
  };
  graphicsJITScanlineGroup() {
    //Normal rendering JIT, where we try to do groups of scanlines at once:
    while (this.queuedScanLines > 0) {
      this.renderScanLine(this.lastUnrenderedLine);
      if (this.lastUnrenderedLine < 143) {
        this.lastUnrenderedLine += 1;
      }
      else {
        this.lastUnrenderedLine = 0;
      }
      this.queuedScanLines -= 1;
    }
  };
  incrementScanLineQueue() {
    if (this.queuedScanLines < 144) {
      this.queuedScanLines += 1;
    }
    else {
      this.currentX = 0;
      this.midScanlineOffset = -1;
      if (this.lastUnrenderedLine < 143) {
        this.lastUnrenderedLine += 1;
      }
      else {
        this.lastUnrenderedLine = 0;
      }
    }
  };
  midScanLineJIT() {
    this.graphicsJIT();
    this.renderMidScanLine();
  };
  //Check for the highest priority IRQ to fire:
  launchIRQ() {
    //deBugLog("This is launchIRQ");
    let bitShift = 0;
    let testbit = 1;
    do {
      //Check to see if an interrupt is enabled AND requested.
      if ((testbit & this.IRQLineMatched) == testbit) {
        this.IME = false; //Reset the interrupt enabling.
        this.interruptsRequested -= testbit; //Reset the interrupt request.
        this.IRQLineMatched = 0; //Reset the IRQ assertion.
        //Interrupts have a certain clock cycle length:
        this.CPUTicks = 20;
        //Set the stack pointer to the current program counter value:
        this.stackPointer = (this.stackPointer - 1) & 0xFFFF;
        this.memoryWriter[this.stackPointer](this, this.stackPointer, this.programCounter >> 8);
        this.stackPointer = (this.stackPointer - 1) & 0xFFFF;
        this.memoryWriter[this.stackPointer](this, this.stackPointer, this.programCounter & 0xFF);
        //Set the program counter to the interrupt's address:
        this.programCounter = 0x40 | (bitShift << 3);
        //Clock the core for mid-instruction updates:
        this.updateCore();
        return; //We only want the highest priority interrupt.
      }
      bitShift += 1;
      testbit = 1 << bitShift;
    } while (bitShift < 5);
  };
  /*
  Check for IRQs to be fired while not in HALT:
*/
  checkIRQMatching() {
    if (this.IME) {
      this.IRQLineMatched = this.interruptsEnabled & this.interruptsRequested & 0x1f;
    }
  };
  /*
  Handle the HALT opcode by predicting all IRQ cases correctly,
  then selecting the next closest IRQ firing from the prediction to
  clock up to. This prevents hacky looping that doesn't predict, but
  instead just clocks through the core update procedure by one which
  is very slow. Not many emulators do this because they have to cover
  all the IRQ prediction cases and they usually get them wrong.
*/
  calculateHALTPeriod() {
    //deBugLog("This is calculateHALTPeriod");
    //Initialize our variables and start our prediction:
    let currentClocks = 0;
    if (!this.halt) {
      this.halt = true;
      currentClocks = -1;
      let temp_var = 0;
      if (this.LCDisOn) {
        //If the LCD is enabled, then predict the LCD IRQs enabled:
        if ((this.interruptsEnabled & 0x1) == 0x1) {
          currentClocks = (456 * ((this.modeSTAT == 1 ? 298 : 144) - this.actualScanLine) - this.LCDTicks) << this.doubleSpeedShifter;
        }
        if ((this.interruptsEnabled & 0x2) == 0x2) {
          if (this.mode0TriggerSTAT) {
            temp_var = (this.clocksUntilMode0() - this.LCDTicks) << this.doubleSpeedShifter;
            if (temp_var <= currentClocks || currentClocks == -1) {
              currentClocks = temp_var;
            }
          }
          if (this.mode1TriggerSTAT && (this.interruptsEnabled & 0x1) == 0) {
            temp_var = (456 * ((this.modeSTAT == 1 ? 298 : 144) - this.actualScanLine) - this.LCDTicks) << this.doubleSpeedShifter;
            if (temp_var <= currentClocks || currentClocks == -1) {
              currentClocks = temp_var;
            }
          }
          if (this.mode2TriggerSTAT) {
            temp_var = ((this.actualScanLine >= 143 ? 456 * (154 - this.actualScanLine) : 456) - this.LCDTicks) << this.doubleSpeedShifter;
            if (temp_var <= currentClocks || currentClocks == -1) {
              currentClocks = temp_var;
            }
          }
          if (this.LYCMatchTriggerSTAT && this.memory[0xFF45] <= 153) {
            temp_var = (this.clocksUntilLYCMatch() - this.LCDTicks) << this.doubleSpeedShifter;
            if (temp_var <= currentClocks || currentClocks == -1) {
              currentClocks = temp_var;
            }
          }
        }
      }
      if (this.TIMAEnabled && (this.interruptsEnabled & 0x4) == 0x4) {
        //CPU timer IRQ prediction:
        temp_var = (0x100 - this.memory[0xFF05]) * this.TACClocker - this.timerTicks;
        if (temp_var <= currentClocks || currentClocks == -1) {
          currentClocks = temp_var;
        }
      }
      if (this.serialTimer > 0 && (this.interruptsEnabled & 0x8) == 0x8) {
        //Serial IRQ prediction:
        if (this.serialTimer <= currentClocks || currentClocks == -1) {
          currentClocks = this.serialTimer;
        }
      }
    }
    else {
      currentClocks = this.remainingClocks;
    }
    let maxClocks = (this.CPUCyclesTotal - this.emulatorTicks) << this.doubleSpeedShifter;
    if (currentClocks >= 0) {
      if (currentClocks <= maxClocks) {
        //Exit out of HALT normally:
        this.CPUTicks = Math.max(currentClocks, this.CPUTicks);
        this.updateCoreFull();
        this.halt = false;
        this.CPUTicks = 0;
      }
      else {
        //Still in HALT, clock only up to the clocks specified per iteration:
        this.CPUTicks = Math.max(maxClocks, this.CPUTicks);
        this.remainingClocks = currentClocks - this.CPUTicks;
      }
    }
    else {
      //Still in HALT, clock only up to the clocks specified per iteration:
      //Will stay in HALT forever (Stuck in HALT forever), but the APU and LCD are still clocked, so don't pause:
      this.CPUTicks += maxClocks;
    }
  };
  //Memory Reading:
  memoryRead(address: number): number {
    //Act as a wrapper for reading the returns from the compiled jumps to memory.
    return this.memoryReader[address](this, address); //This seems to be faster than the usual if/else.
  };
  memoryHighRead(address: number): number {
    //Act as a wrapper for reading the returns from the compiled jumps to memory.
    return this.memoryHighReader[address](this, address); //This seems to be faster than the usual if/else.
  };
  memoryReadJumpCompile() {
    //deBugLog("This is memoryReadJumpCompile");
    //Faster in some browsers, since we are doing less conditionals overall by implementing them in advance.
    for (let index = 0x0000; index <= 0xFFFF; index++) {
      if (index < 0x4000) {
        this.memoryReader[index] = this.memoryReadNormal;
      } 
      else if (index < 0x8000) {
        this.memoryReader[index] = this.memoryReadROM;
      } 
      else if (index < 0x9800) {
        this.memoryReader[index] = this.cGBC ? this.VRAMDATAReadCGBCPU : this.VRAMDATAReadDMGCPU;
      } 
      else if (index < 0xA000) {
        this.memoryReader[index] = this.cGBC ? this.VRAMCHRReadCGBCPU : this.VRAMCHRReadDMGCPU;
      } 
      else if (index >= 0xA000 && index < 0xC000) {
        if ((this.numRAMBanks == 1 / 16 && index < 0xA200) || this.numRAMBanks >= 1) {
          if (this.cMBC7) {
            this.memoryReader[index] = this.memoryReadMBC7;
          } 
	  else if (!this.cMBC3) {
            this.memoryReader[index] = this.memoryReadMBC;
          }
          else {
            //MBC3 RTC + RAM:
            this.memoryReader[index] = this.memoryReadMBC3;
          }
        }
        else {
          this.memoryReader[index] = this.memoryReadBAD;
        }
      } 
      else if (index >= 0xC000 && index < 0xE000) {
        if (!this.cGBC || index < 0xD000) {
          this.memoryReader[index] = this.memoryReadNormal;
        }
        else {
          this.memoryReader[index] = this.memoryReadGBCMemory;
        }
      } 
      else if (index >= 0xE000 && index < 0xFE00) {
        if (!this.cGBC || index < 0xF000) {
          this.memoryReader[index] = this.memoryReadECHONormal;
        }
        else {
          this.memoryReader[index] = this.memoryReadECHOGBCMemory;
        }
      } 
      else if (index < 0xFEA0) {
        this.memoryReader[index] = this.memoryReadOAM;
      } 
      else if (this.cGBC && index >= 0xFEA0 && index < 0xFF00) {
        this.memoryReader[index] = this.memoryReadNormal;
      } 
      else if (index >= 0xFF00) {
        switch (index) {
          case 0xFF00:
          //JOYPAD:
            this.memoryReader[0xFF00] = (parentObj: GameBoyCore, address: number) => {
              return 0xC0 | parentObj.memory[0xFF00]; //Top nibble returns as set.
            };
            this.memoryHighReader[0] = this.memoryReader[0xFF00];
            break;
          case 0xFF01:
          //SB
            this.memoryReader[0xFF01] = (parentObj: GameBoyCore, address: number) => {
              return parentObj.memory[0xFF02] < 0x80 ? parentObj.memory[0xFF01] : 0xFF;
            };
            this.memoryHighReader[0x01] = this.memoryReader[0xFF01];
            break;
          case 0xFF02:
          //SC
            if (this.cGBC) {
              this.memoryReader[0xFF02] = (parentObj: GameBoyCore, address: number) => {
                return (parentObj.serialTimer <= 0 ? 0x7C : 0xFC) | parentObj.memory[0xFF02];
              };
              this.memoryHighReader[0x02] = this.memoryReader[0xFF02];
            }
            else {
              this.memoryReader[0xFF02] = (parentObj: GameBoyCore, address: number) => {
                return (parentObj.serialTimer <= 0 ? 0x7E : 0xFE) | parentObj.memory[0xFF02];
              };
              this.memoryHighReader[0x02] = this.memoryReader[0xFF02];
            }
            break;
          case 0xFF04:
          //DIV
            this.memoryReader[0xFF04] = (parentObj: GameBoyCore, address: number) => {
              parentObj.memory[0xFF04] = (parentObj.memory[0xFF04] + (parentObj.DIVTicks >> 8)) & 0xFF;
              parentObj.DIVTicks &= 0xFF;
              return parentObj.memory[0xFF04];
            };
            this.memoryHighReader[0x04] = this.memoryReader[0xFF04];
            break;
          case 0xFF07:
            this.memoryReader[0xFF07] = (parentObj: GameBoyCore, address: number) => {
              return 0xF8 | parentObj.memory[0xFF07];
            };
            this.memoryHighReader[0x07] = this.memoryReader[0xFF07];
            break;
          case 0xFF0F:
          //IF
            this.memoryReader[0xFF0F] = (parentObj: GameBoyCore, address: number) => {
              return 0xE0 | parentObj.interruptsRequested;
            };
            this.memoryHighReader[0x0F] = this.memoryReader[0xFF0F];
            break;
          case 0xFF10:
            this.memoryReader[0xFF10] = (parentObj: GameBoyCore, address: number) => {
              return 0x80 | parentObj.memory[0xFF10];
            };
            this.memoryHighReader[0x10] = this.memoryReader[0xFF10];
            break;
          case 0xFF11:
            this.memoryReader[0xFF11] = (parentObj: GameBoyCore, address: number) => {
              return 0x3F | parentObj.memory[0xFF11];
            };
            this.memoryHighReader[0x11] = this.memoryReader[0xFF11];
            break;
          case 0xFF13:
            this.memoryHighReader[0x13] = this.memoryReadBAD;
            this.memoryReader[0xFF13] = this.memoryReadBAD;
            break;
          case 0xFF14:
            this.memoryReader[0xFF14] = (parentObj: GameBoyCore, address: number) => {
              return 0xBF | parentObj.memory[0xFF14];
            };
            this.memoryHighReader[0x14] = this.memoryReader[0xFF14];
            break;
          case 0xFF16:
            this.memoryReader[0xFF16] = (parentObj: GameBoyCore, address: number) => {
              return 0x3F | parentObj.memory[0xFF16];
            };
            this.memoryHighReader[0x16] = this.memoryReader[0xFF16];
            break;
          case 0xFF18:
            this.memoryHighReader[0x18] = this.memoryReadBAD;
            this.memoryReader[0xFF18] = this.memoryReadBAD;
            break;
          case 0xFF19:
            this.memoryReader[0xFF19] = (parentObj: GameBoyCore, address: number) => {
              return 0xBF | parentObj.memory[0xFF19];
            };
            this.memoryHighReader[0x19] = this.memoryReader[0xFF19];
            break;
          case 0xFF1A:
            this.memoryReader[0xFF1A] = (parentObj: GameBoyCore, address: number) => {
              return 0x7F | parentObj.memory[0xFF1A];
            };
            this.memoryHighReader[0x1A] = this.memoryReader[0xFF1A];
            break;
          case 0xFF1B:
            this.memoryHighReader[0x1B] = this.memoryReadBAD;
            this.memoryReader[0xFF1B] = this.memoryReadBAD;
            break;
          case 0xFF1C:
            this.memoryReader[0xFF1C] = (parentObj: GameBoyCore, address: number) => {
              return 0x9F | parentObj.memory[0xFF1C];
            };
            this.memoryHighReader[0x1C] = this.memoryReader[0xFF1C];
            break;
          case 0xFF1D:
            this.memoryReader[0xFF1D] = (parentObj: GameBoyCore, address: number) => {
              return 0xFF;
            };
            this.memoryHighReader[0x1D] = this.memoryReader[0xFF1D];
            break;
          case 0xFF1E:
            this.memoryReader[0xFF1E] = (parentObj: GameBoyCore, address: number) => {
              return 0xBF | parentObj.memory[0xFF1E];
            };
            this.memoryHighReader[0x1E] = this.memoryReader[0xFF1E];
            break;
          case 0xFF1F:
          case 0xFF20:
            this.memoryHighReader[index & 0xFF] = this.memoryReadBAD;
            this.memoryReader[index] = this.memoryReadBAD;
            break;
          case 0xFF23:
            this.memoryReader[0xFF23] = (parentObj: GameBoyCore, address: number) => {
              return 0xBF | parentObj.memory[0xFF23];
            };
            this.memoryHighReader[0x23] = this.memoryReader[0xFF23];
            break;
          case 0xFF26:
            this.memoryReader[0xFF26] = (parentObj: GameBoyCore, address: number) => {
              parentObj.audioJIT();
              return 0x70 | parentObj.memory[0xFF26];
            };
            this.memoryHighReader[0x26] = this.memoryReader[0xFF26];
            break;
          case 0xFF27:
          case 0xFF28:
          case 0xFF29:
          case 0xFF2A:
          case 0xFF2B:
          case 0xFF2C:
          case 0xFF2D:
          case 0xFF2E:
          case 0xFF2F:
            this.memoryReader[index] = this.memoryReadBAD;
            this.memoryHighReader[index & 0xFF] = this.memoryReader[index];
            break;
          case 0xFF30:
          case 0xFF31:
          case 0xFF32:
          case 0xFF33:
          case 0xFF34:
          case 0xFF35:
          case 0xFF36:
          case 0xFF37:
          case 0xFF38:
          case 0xFF39:
          case 0xFF3A:
          case 0xFF3B:
          case 0xFF3C:
          case 0xFF3D:
          case 0xFF3E:
          case 0xFF3F:
            this.memoryReader[index] = (parentObj: GameBoyCore, address: number): number => {
              return parentObj.channel3canPlay ? parentObj.memory[0xFF00 | (parentObj.channel3lastSampleLookup >> 1)] : parentObj.memory[address];
            };
            this.memoryHighReader[index & 0xFF] = (parentObj: GameBoyCore, address: number): number => {
              return parentObj.channel3canPlay ? parentObj.memory[0xFF00 | (parentObj.channel3lastSampleLookup >> 1)] : parentObj.memory[0xFF00 | address];
            };
            break;
          case 0xFF41:
            this.memoryReader[0xFF41] = (parentObj: GameBoyCore, address: number): number => {
              return 0x80 | parentObj.memory[0xFF41] | parentObj.modeSTAT;
            };
            this.memoryHighReader[0x41] = this.memoryReader[0xFF41];
            break;
          case 0xFF42:
            this.memoryReader[0xFF42] = (parentObj: GameBoyCore, address: number): number => {
              return parentObj.backgroundY;
            };
            this.memoryHighReader[0x42] = this.memoryReader[0xFF42];
            break;
          case 0xFF43:
            this.memoryReader[0xFF43] = (parentObj: GameBoyCore, address: number): number => {
              return parentObj.backgroundX;
            };
            this.memoryHighReader[0x43] = this.memoryReader[0xFF43];
            break;
          case 0xFF44:
            this.memoryReader[0xFF44] = (parentObj: GameBoyCore, address: number): number => {
              return parentObj.LCDisOn ? parentObj.memory[0xFF44] : 0;
            };
            this.memoryHighReader[0x44] = this.memoryReader[0xFF44];
            break;
          case 0xFF4A:
          //WY
            this.memoryReader[0xFF4A] = (parentObj: GameBoyCore, address: number): number => {
              return parentObj.windowY;
            };
            this.memoryHighReader[0x4A] = this.memoryReader[0xFF4A];
            break;
          case 0xFF4F:
            this.memoryReader[0xFF4F] = (parentObj: GameBoyCore, address: number): number => {
              return parentObj.currVRAMBank;
            };
            this.memoryHighReader[0x4F] = this.memoryReader[0xFF4F];
            break;
          case 0xFF55:
            if (this.cGBC) {
              this.memoryReader[0xFF55] = (parentObj: GameBoyCore, address: number): number => {
                if (!parentObj.LCDisOn && parentObj.hdmaRunning) {    //Undocumented behavior alert: HDMA becomes GDMA when LCD is oFF (Worms Armageddon Fix).
                  //DMA
                  parentObj.DMAWrite((parentObj.memory[0xFF55] & 0x7f) + 1);
                  parentObj.memory[0xFF55] = 0xFF; //Transfer completed.
                  parentObj.hdmaRunning = false;
                }
                return parentObj.memory[0xFF55];
              };
              this.memoryHighReader[0x55] = this.memoryReader[0xFF55];
            }
            else {
              this.memoryReader[0xFF55] = this.memoryReadNormal;
              this.memoryHighReader[0x55] = this.memoryHighReadNormal;
            }
            break;
          case 0xFF56:
            if (this.cGBC) {
              this.memoryReader[0xFF56] = (parentObj: GameBoyCore, address: number): number => {
                //Return IR "not connected" status:
                return (0x3C | (parentObj.memory[0xFF56] >= 0xC0 ? 0x2 | (parentObj.memory[0xFF56] & 0xC1) : parentObj.memory[0xFF56] & 0xC3));
              };
              this.memoryHighReader[0x56] = this.memoryReader[0xFF56];
            }
            else {
              this.memoryReader[0xFF56] = this.memoryReadNormal;
              this.memoryHighReader[0x56] = this.memoryHighReadNormal;
            }
            break;
          case 0xFF6C:
            if (this.cGBC) {
              this.memoryReader[0xFF6C] = (parentObj: GameBoyCore, address: number): number => {
                return 0xFE | parentObj.memory[0xFF6C];
              };
              this.memoryHighReader[0x6c] = this.memoryReader[0xFF6C];
            }
            else {
              this.memoryReader[0xFF6C] = this.memoryReadBAD;
              this.memoryHighReader[0x6C] = this.memoryReadBAD;
            }
            break;
          case 0xFF70:
            if (this.cGBC) {
              //SVBK
              this.memoryReader[0xFF70] = (parentObj: GameBoyCore, address: number): number => {
                return 0x40 | parentObj.memory[0xFF70];
              };
              this.memoryHighReader[0x70] = this.memoryReader[0xFF70];
            }
            else {
              this.memoryReader[0xFF70] = this.memoryReadBAD;
              this.memoryHighReader[0x70] = this.memoryReadBAD;
            }
            break;
          case 0xFF75:
            this.memoryReader[0xFF75] = (parentObj: GameBoyCore, address: number): number => {
              return 0x8F | parentObj.memory[0xFF75];
            };
            this.memoryHighReader[0x75] = this.memoryReader[0xFF75]
            break;
          case 0xFF76:
          case 0xFF77:
            this.memoryReader[index] = (parentObj: GameBoyCore, address: number): number => {
              return 0;
            };
            this.memoryHighReader[index & 0xFF] = this.memoryReader[index];
            break;
          case 0xFFFF:
          //IE
            this.memoryReader[0xFFFF] = (parentObj: GameBoyCore, address: number): number => {
              return parentObj.interruptsEnabled;
            };
            this.memoryHighReader[0xFF] = this.memoryReader[0xFFFF];
            break;
          default:
            this.memoryReader[index] = this.memoryReadNormal;
            this.memoryHighReader[index & 0xFF] = this.memoryHighReadNormal;
        }
      }
      else {
        this.memoryReader[index] = this.memoryReadBAD;
      }
    }
  };
  memoryReadNormal(parentObj: GameBoyCore, address: number): number {
    return parentObj.memory[address];
  };
  memoryHighReadNormal(parentObj: GameBoyCore, address: number): number {
    return parentObj.memory[0xFF00 | address];
  };
  memoryReadROM(parentObj: GameBoyCore, address: number): number {
    return parentObj.ROM[parentObj.currentROMBank + address];
  };
  memoryReadMBC(parentObj: GameBoyCore, address: number): number {
    //Switchable RAM
    if (parentObj.MBCRAMBanksEnabled || settings[10]) {
      return parentObj.MBCRam[address + parentObj.currMBCRAMBankPosition];
    }
    //cout("Reading from disabled RAM.", 1);
    return 0xFF;
  };
  memoryReadMBC7(parentObj: GameBoyCore, address: number): number {
    //deBugLog("This is memoryReadMBC7");
    //Switchable RAM
    if (parentObj.MBCRAMBanksEnabled || settings[10]) {
      switch (address) {
        case 0xA000:
        case 0xA060:
        case 0xA070:
          return 0;
        case 0xA080:
        //TODO: Gyro Control Register
          return 0;
        case 0xA050:
        //Y High Byte
          return parentObj.highY;
        case 0xA040:
        //Y Low Byte
          return parentObj.lowY;
        case 0xA030:
        //X High Byte
          return parentObj.highX;
        case 0xA020:
        //X Low Byte:
          return parentObj.lowX;
        default:
          return parentObj.MBCRam[address + parentObj.currMBCRAMBankPosition];
      }
    }
    //cout("Reading from disabled RAM.", 1);
    return 0xFF;
  };
  memoryReadMBC3(parentObj: GameBoyCore, address: number): number {
    //deBugLog("This is memoryReadMBC3");
    //Switchable RAM
    if (parentObj.MBCRAMBanksEnabled || settings[10]) {
      switch (parentObj.currMBCRAMBank) {
        case 0x00:
        case 0x01:
        case 0x02:
        case 0x03:
          return parentObj.MBCRam[address + parentObj.currMBCRAMBankPosition];
        case 0x08:
          return parentObj.latchedSeconds;
        case 0x09:
          return parentObj.latchedMinutes;
        case 0x0A:
          return parentObj.latchedHours;
        case 0x0B:
          return parentObj.latchedLDays;
        case 0x0C:
          return (parentObj.RTCDayOverFlow ? 0x80 : 0) + (parentObj.RTCHALT ? 0x40 : 0) + parentObj.latchedHDays;
        default:
          return 0;
      }
    }
    //cout("Reading from invalid or disabled RAM.", 1);
    return 0xFF;
  };
  memoryReadGBCMemory(parentObj: GameBoyCore, address: number): number {
    return parentObj.GBCMemory![address + parentObj.gbcRamBankPosition];
  };
  memoryReadOAM(parentObj: GameBoyCore, address: number): number {
    return parentObj.modeSTAT > 1 ? 0xFF : parentObj.memory[address];
  };
  memoryReadECHOGBCMemory(parentObj: GameBoyCore, address: number): number {
    return parentObj.GBCMemory![address + parentObj.gbcRamBankPositionECHO];
  };
  memoryReadECHONormal(parentObj: GameBoyCore, address: number): number {
    return parentObj.memory[address - 0x2000];
  };
  memoryReadBAD(parentObj: GameBoyCore, address: number): number {
    return 0xFF;
  };
  VRAMDATAReadCGBCPU(parentObj: GameBoyCore, address: number): number {
    //CPU Side Reading The VRAM (Optimized for GameBoy Color)
    return parentObj.modeSTAT > 2 ? 0xFF : parentObj.currVRAMBank == 0 ? parentObj.memory[address] : parentObj.VRAM![address & 0x1fff];
  };
  VRAMDATAReadDMGCPU(parentObj: GameBoyCore, address: number): number {
    //CPU Side Reading The VRAM (Optimized for classic GameBoy)
    return parentObj.modeSTAT > 2 ? 0xFF : parentObj.memory[address];
  };
  VRAMCHRReadCGBCPU(parentObj: GameBoyCore, address: number): number {
    //CPU Side Reading the Character Data Map:
    return parentObj.modeSTAT > 2 ? 0xFF : parentObj.BGCHRCurrentBank!.array[address & 0x7FF];
  };
  VRAMCHRReadDMGCPU(parentObj: GameBoyCore, address: number): number {
    //CPU Side Reading the Character Data Map:
    return parentObj.modeSTAT > 2 ? 0xFF : parentObj.BGCHRBank1!.array[address & 0x7FF];
  };
  setCurrentMBC1ROMBank() {
    //deBugLog("This is setCurrentMBC1ROMBank");
    //Read the cartridge ROM data from RAM memory:
    switch (this.ROMBank1offs) {
      case 0x00:
      case 0x20:
      case 0x40:
      case 0x60:
      //Bank calls for 0x00, 0x20, 0x40, and 0x60 are really for 0x01, 0x21, 0x41, and 0x61.
        this.currentROMBank = this.ROMBank1offs % this.ROMBankEdge << 14;
        break;
      default:
        this.currentROMBank = ((this.ROMBank1offs % this.ROMBankEdge) - 1) << 14;
    }
  }
  setCurrentMBC2AND3ROMBank() {
    //Read the cartridge ROM data from RAM memory:
    //Only map bank 0 to bank 1 here (MBC2 is like MBC1, but can only do 16 banks, so only the bank 0 quirk appears for MBC2):
    this.currentROMBank = Math.max((this.ROMBank1offs % this.ROMBankEdge) - 1, 0) << 14;
  }
  setCurrentMBC5ROMBank() {
    //Read the cartridge ROM data from RAM memory:
    this.currentROMBank = ((this.ROMBank1offs % this.ROMBankEdge) - 1) << 14;
  };
  //Memory Writing:
  memoryWrite(address: number, data: number) {
    //Act as a wrapper for writing by compiled jumps to specific memory writing functions.
    this.memoryWriter[address](this, address, data);
  }
  //0xFFXX fast path:
  memoryHighWrite(address: number, data: number) {
    //Act as a wrapper for writing by compiled jumps to specific memory writing functions.
    this.memoryHighWriter[address](this, address, data);
  }
  memoryWriteJumpCompile() {
    //deBugLog("This is memoryWriteJumpCompile");
    //Faster in some browsers, since we are doing less conditionals overall by implementing them in advance.
    for (let index = 0x0000; index <= 0xFFFF; index++) {
      if (index < 0x8000) {
        if (this.cMBC1) {
          if (index < 0x2000) {
            this.memoryWriter[index] = this.MBCWriteEnable;
          }
          else if (index < 0x4000) {
            this.memoryWriter[index] = this.MBC1WriteROMBank;
          }
          else if (index < 0x6000) {
            this.memoryWriter[index] = this.MBC1WriteRAMBank;
          }
          else {
            this.memoryWriter[index] = this.MBC1WriteType;
          }
        }
        else if (this.cMBC2) {
          if (index < 0x1000) {
            this.memoryWriter[index] = this.MBCWriteEnable;
          }
          else if (index >= 0x2100 && index < 0x2200) {
            this.memoryWriter[index] = this.MBC2WriteROMBank;
          }
          else {
            this.memoryWriter[index] = this.cartIgnoreWrite;
          }
        }
        else if (this.cMBC3) {
          if (index < 0x2000) {
            this.memoryWriter[index] = this.MBCWriteEnable;
          }
          else if (index < 0x4000) {
            this.memoryWriter[index] = this.MBC3WriteROMBank;
          }
          else if (index < 0x6000) {
            this.memoryWriter[index] = this.MBC3WriteRAMBank;
          }
          else {
            this.memoryWriter[index] = this.MBC3WriteRTCLatch;
          }
        }
        else if (this.cMBC5 || this.cRUMBLE || this.cMBC7) {
          if (index < 0x2000) {
            this.memoryWriter[index] = this.MBCWriteEnable;
          }
          else if (index < 0x3000) {
            this.memoryWriter[index] = this.MBC5WriteROMBankLow;
          }
          else if (index < 0x4000) {
            this.memoryWriter[index] = this.MBC5WriteROMBankHigh;
          }
          else if (index < 0x6000) {
            this.memoryWriter[index] = (this.cRUMBLE) ? this.RUMBLEWriteRAMBank : this.MBC5WriteRAMBank;
          }
          else {
            this.memoryWriter[index] = this.cartIgnoreWrite;
          }
        }
        else if (this.cHuC3) {
          if (index < 0x2000) {
            this.memoryWriter[index] = this.MBCWriteEnable;
          }
          else if (index < 0x4000) {
            this.memoryWriter[index] = this.MBC3WriteROMBank;
          }
          else if (index < 0x6000) {
            this.memoryWriter[index] = this.HuC3WriteRAMBank;
          }
          else {
            this.memoryWriter[index] = this.cartIgnoreWrite;
          }
        }
        else {
          this.memoryWriter[index] = this.cartIgnoreWrite;
        }
      }
      else if (index < 0x9000) {
        this.memoryWriter[index] = (this.cGBC) ? this.VRAMGBCDATAWrite : this.VRAMGBDATAWrite;
      }
      else if (index < 0x9800) {
        this.memoryWriter[index] = (this.cGBC) ? this.VRAMGBCDATAWrite : this.VRAMGBDATAUpperWrite;
      }
      else if (index < 0xA000) {
        this.memoryWriter[index] = (this.cGBC) ? this.VRAMGBCCHRMAPWrite : this.VRAMGBCHRMAPWrite;
      }
      else if (index < 0xC000) {
        if ((this.numRAMBanks == 1 / 16 && index < 0xA200) || this.numRAMBanks >= 1) {
          if (!this.cMBC3) {
            this.memoryWriter[index] = this.memoryWriteMBCRAM;
          }
          else {
            //MBC3 RTC + RAM:
            this.memoryWriter[index] = this.memoryWriteMBC3RAM;
          }
        }
        else {
          this.memoryWriter[index] = this.cartIgnoreWrite;
        }
      }
      else if (index < 0xE000) {
        if (this.cGBC && index >= 0xD000) {
          this.memoryWriter[index] = this.memoryWriteGBCRAM;
        }
        else {
          this.memoryWriter[index] = this.memoryWriteNormal;
        }
      }
      else if (index < 0xFE00) {
        if (this.cGBC && index >= 0xF000) {
          this.memoryWriter[index] = this.memoryWriteECHOGBCRAM;
        }
        else {
          this.memoryWriter[index] = this.memoryWriteECHONormal;
        }
      }
      else if (index <= 0xFEA0) {
        this.memoryWriter[index] = this.memoryWriteOAMRAM;
      }
      else if (index < 0xFF00) {
        if (this.cGBC) { //Only GBC has access to this RAM.
          this.memoryWriter[index] = this.memoryWriteNormal;
        }
        else {
          this.memoryWriter[index] = this.cartIgnoreWrite;
        }
      }
      else {
        //Start the I/O initialization by filling in the slots as normal memory:
        this.memoryWriter[index] = this.memoryWriteNormal;
        this.memoryHighWriter[index & 0xFF] = this.memoryHighWriteNormal;
      }
    }
    this.registerWriteJumpCompile(); //Compile the I/O write functions separately...
  }
  MBCWriteEnable(parentObj: GameBoyCore | null, address: number | null, data: number | null) {
    //deBugLog("This is MBCWriteEnable");
    //MBC RAM Bank Enable/Disable:
    parentObj!.MBCRAMBanksEnabled = ((data! & 0x0F) == 0x0A); //If lower nibble is 0x0A, then enable, otherwise disable.
  }
  MBC1WriteROMBank(parentObj: GameBoyCore, address: number, data: number) {
    //deBugLog("This is MBC1WriteROMBank");
    //MBC1 ROM bank switching:
    parentObj.ROMBank1offs = (parentObj.ROMBank1offs & 0x60) | (data & 0x1F);
    parentObj.setCurrentMBC1ROMBank();
  }
  MBC1WriteRAMBank(parentObj: GameBoyCore, address: number, data: number) {
    //MBC1 RAM bank switching
    if (parentObj.MBC1Mode) {
      //4/32 Mode
      parentObj.currMBCRAMBank = data & 0x03;
      parentObj.currMBCRAMBankPosition = (parentObj.currMBCRAMBank << 13) - 0xA000;
    }
    else {
      //16/8 Mode
      parentObj.ROMBank1offs = ((data & 0x03) << 5) | (parentObj.ROMBank1offs & 0x1F);
      parentObj.setCurrentMBC1ROMBank();
    }
  }
  MBC1WriteType(parentObj: GameBoyCore, address: number, data: number) {
    //MBC1 mode setting:
    parentObj.MBC1Mode = ((data & 0x1) == 0x1);
    if (parentObj.MBC1Mode) {
      parentObj.ROMBank1offs &= 0x1F;
      parentObj.setCurrentMBC1ROMBank();
    }
    else {
      parentObj.currMBCRAMBank = 0;
      parentObj.currMBCRAMBankPosition = -0xA000;
    }
  }
  MBC2WriteROMBank(parentObj: GameBoyCore, address: number, data: number) {
    //MBC2 ROM bank switching:
    parentObj.ROMBank1offs = data & 0x0F;
    parentObj.setCurrentMBC2AND3ROMBank();
  }
  MBC3WriteROMBank(parentObj: GameBoyCore, address: number, data: number) {
    //MBC3 ROM bank switching:
    parentObj.ROMBank1offs = data & 0x7F;
    parentObj.setCurrentMBC2AND3ROMBank();
  }
  MBC3WriteRAMBank(parentObj: GameBoyCore, address: number, data: number) {
    parentObj.currMBCRAMBank = data;
    if (data < 4) {
      //MBC3 RAM bank switching
      parentObj.currMBCRAMBankPosition = (parentObj.currMBCRAMBank << 13) - 0xA000;
    }
  }
  MBC3WriteRTCLatch(parentObj: GameBoyCore, address: number, data: number) {
    if (data == 0) {
      parentObj.RTCisLatched = false;
    }
    else if (!parentObj.RTCisLatched) {
      //Copy over the current RTC time for reading.
      parentObj.RTCisLatched = true;
      parentObj.latchedSeconds = parentObj.RTCSeconds | 0;
      parentObj.latchedMinutes = parentObj.RTCMinutes;
      parentObj.latchedHours = parentObj.RTCHours;
      parentObj.latchedLDays = (parentObj.RTCDays & 0xFF);
      parentObj.latchedHDays = parentObj.RTCDays >> 8;
    }
  }
  MBC5WriteROMBankLow(parentObj: GameBoyCore, address: number, data: number) {
    //MBC5 ROM bank switching:
    parentObj.ROMBank1offs = (parentObj.ROMBank1offs & 0x100) | data;
    parentObj.setCurrentMBC5ROMBank();
  }
  MBC5WriteROMBankHigh(parentObj: GameBoyCore, address: number, data: number) {
    //MBC5 ROM bank switching (by least significant bit):
    parentObj.ROMBank1offs = ((data & 0x01) << 8) | (parentObj.ROMBank1offs & 0xFF);
    parentObj.setCurrentMBC5ROMBank();
  }
  MBC5WriteRAMBank(parentObj: GameBoyCore, address: number, data: number) {
    //MBC5 RAM bank switching
    parentObj.currMBCRAMBank = data & 0xF;
    parentObj.currMBCRAMBankPosition = (parentObj.currMBCRAMBank << 13) - 0xA000;
  }
  RUMBLEWriteRAMBank(parentObj: GameBoyCore, address: number, data: number) {
    //MBC5 RAM bank switching
    //Like MBC5, but bit 3 of the lower nibble is used for rumbling and bit 2 is ignored.
    parentObj.currMBCRAMBank = data & 0x03;
    parentObj.currMBCRAMBankPosition = (parentObj.currMBCRAMBank << 13) - 0xA000;
  }
  HuC3WriteRAMBank(parentObj: GameBoyCore, address: number, data: number) {
    //HuC3 RAM bank switching
    parentObj.currMBCRAMBank = data & 0x03;
    parentObj.currMBCRAMBankPosition = (parentObj.currMBCRAMBank << 13) - 0xA000;
  }
  cartIgnoreWrite(parentObj: GameBoyCore, address: number, data: number) {
    //We might have encountered illegal RAM writing or such, so just do nothing...
  }
  memoryWriteNormal(parentObj: GameBoyCore, address: number, data: number) {
    parentObj.memory[address] = data;
  }
  memoryHighWriteNormal(parentObj: GameBoyCore, address: number, data: number) {
    parentObj.memory[0xFF00 | address] = data;
  }
  memoryWriteMBCRAM(parentObj: GameBoyCore, address: number, data: number) {
    if (parentObj.MBCRAMBanksEnabled || settings[10]) {
      parentObj.MBCRam[address + parentObj.currMBCRAMBankPosition] = data;
    }
  }
  memoryWriteMBC3RAM(parentObj: GameBoyCore, address: number, data: number) {
    //deBugLog("This is memoryWriteMBC3RAM");
    if (parentObj.MBCRAMBanksEnabled || settings[10]) {
      switch (parentObj.currMBCRAMBank) {
        case 0x00:
        case 0x01:
        case 0x02:
        case 0x03:
          parentObj.MBCRam[address + parentObj.currMBCRAMBankPosition] = data;
          break;
        case 0x08:
          if (data < 60) {
            parentObj.RTCSeconds = data;
          }
          else {
            cout("(Bank #" + parentObj.currMBCRAMBank + ") RTC write out of range: " + data, 1);
          }
          break;
        case 0x09:
          if (data < 60) {
            parentObj.RTCMinutes = data;
          }
          else {
            cout("(Bank #" + parentObj.currMBCRAMBank + ") RTC write out of range: " + data, 1);
          }
          break;
        case 0x0A:
          if (data < 24) {
            parentObj.RTCHours = data;
          }
          else {
            cout("(Bank #" + parentObj.currMBCRAMBank + ") RTC write out of range: " + data, 1);
          }
          break;
        case 0x0B:
          parentObj.RTCDays = (data & 0xFF) | (parentObj.RTCDays & 0x100);
          break;
        case 0x0C:
          parentObj.RTCDayOverFlow = (data > 0x7F);
          parentObj.RTCHALT = (data & 0x40) == 0x40;
          parentObj.RTCDays = ((data & 0x1) << 8) | (parentObj.RTCDays & 0xFF);
          break;
        default:
          cout("Invalid MBC3 bank address selected: " + parentObj.currMBCRAMBank, 0);
      }
    }
  }
  memoryWriteGBCRAM(parentObj: GameBoyCore, address: number, data: number) {
    parentObj.GBCMemory![address + parentObj.gbcRamBankPosition] = data;
  }
  memoryWriteOAMRAM(parentObj: GameBoyCore, address: number, data: number) {
    if (parentObj.modeSTAT < 2) { //OAM RAM cannot be written to in mode 2 & 3
      if (parentObj.memory[address] != data) {
        parentObj.graphicsJIT();
        parentObj.memory[address] = data;
      }
    }
  }
  memoryWriteECHOGBCRAM(parentObj: GameBoyCore, address: number, data: number) {
    parentObj!.GBCMemory![address + parentObj!.gbcRamBankPositionECHO] = data;
  }
  memoryWriteECHONormal(parentObj: GameBoyCore, address: number, data: number) {
    parentObj.memory[address - 0x2000] = data;
  }
  VRAMGBDATAWrite(parentObj: GameBoyCore, address: number, data: number) {
    if (parentObj.modeSTAT < 3) { //VRAM cannot be written to during mode 3
      if (parentObj.memory[address] != data) {
        //JIT the graphics render queue:
        parentObj.graphicsJIT();
        parentObj.memory[address] = data;
        parentObj.generateGBOAMTileLine(address);
      }
    }
  }
  VRAMGBDATAUpperWrite(parentObj: GameBoyCore, address: number, data: number) {
    if (parentObj.modeSTAT < 3) { //VRAM cannot be written to during mode 3
      if (parentObj.memory[address] != data) {
        //JIT the graphics render queue:
        parentObj.graphicsJIT();
        parentObj.memory[address] = data;
        parentObj.generateGBTileLine(address);
      }
    }
  }
  VRAMGBCDATAWrite(parentObj: GameBoyCore, addressTemp: number, data: number) {
    let address = addressTemp;
    if (parentObj.modeSTAT < 3) { //VRAM cannot be written to during mode 3
      if (parentObj.currVRAMBank == 0) {
        if (parentObj.memory[address] != data) {
          //JIT the graphics render queue:
          parentObj.graphicsJIT();
          parentObj.memory[address] = data;
          parentObj.generateGBCTileLineBank1(address);
        }
      }
      else {
        address &= 0x1FFF;
        if (parentObj.VRAM![address] != data) {
          //JIT the graphics render queue:
          parentObj.graphicsJIT();
          parentObj!.VRAM![address] = data;
          parentObj.generateGBCTileLineBank2(address);
        }
      }
    }
  }
  VRAMGBCHRMAPWrite(parentObj: GameBoyCore, addressTemp: number, data: number) {
    let address = addressTemp;
    if (parentObj.modeSTAT < 3) { //VRAM cannot be written to during mode 3
      address &= 0x7FF;
      if (parentObj.BGCHRBank1.array[address] != data) {
        //JIT the graphics render queue:
        parentObj.graphicsJIT();
        parentObj.BGCHRBank1.array[address] = data;
      }
    }
  }
  VRAMGBCCHRMAPWrite(parentObj: GameBoyCore, tempAddress: number, data: number) {
    let address = tempAddress;
    if (parentObj.modeSTAT < 3) { //VRAM cannot be written to during mode 3
      address &= 0x7FF;
      if (parentObj!.BGCHRCurrentBank!.array[address] != data) {
        //JIT the graphics render queue:
        parentObj.graphicsJIT();
        parentObj!.BGCHRCurrentBank!.array[address] = data;
      }
    }
  }
  DMAWrite(tilesToTransferTemp: number) {
    let tilesToTransfer = tilesToTransferTemp;
    if (!this.halt) {
      //Clock the CPU for the DMA transfer (CPU is halted during the transfer):
      this.CPUTicks += 4 | ((tilesToTransfer << 5) << this.doubleSpeedShifter);
    }
    //Source address of the transfer:
    let source: number = (this.memory[0xFF51] << 8) | this.memory[0xFF52];
    //Destination address in the VRAM memory range:
    let destination: number = (this.memory[0xFF53] << 8) | this.memory[0xFF54];
    //Creating some references:
    let memoryReader: Array<(parentObj: GameBoyCore, address: number) => number> = this.memoryReader;
    //JIT the graphics render queue:
    this.graphicsJIT();
    let memory: TNextArray = this.memory;
    //Determining which bank we're working on so we can optimize:
    if (this.currVRAMBank == 0) {
      //DMA transfer for VRAM bank 0:
      do {
        if (destination < 0x1800) {
          memory[0x8000 | destination] = memoryReader[source](this, source++);
          memory[0x8001 | destination] = memoryReader[source](this, source++);
          memory[0x8002 | destination] = memoryReader[source](this, source++);
          memory[0x8003 | destination] = memoryReader[source](this, source++);
          memory[0x8004 | destination] = memoryReader[source](this, source++);
          memory[0x8005 | destination] = memoryReader[source](this, source++);
          memory[0x8006 | destination] = memoryReader[source](this, source++);
          memory[0x8007 | destination] = memoryReader[source](this, source++);
          memory[0x8008 | destination] = memoryReader[source](this, source++);
          memory[0x8009 | destination] = memoryReader[source](this, source++);
          memory[0x800A | destination] = memoryReader[source](this, source++);
          memory[0x800B | destination] = memoryReader[source](this, source++);
          memory[0x800C | destination] = memoryReader[source](this, source++);
          memory[0x800D | destination] = memoryReader[source](this, source++);
          memory[0x800E | destination] = memoryReader[source](this, source++);
          memory[0x800F | destination] = memoryReader[source](this, source++);
          this.generateGBCTileBank1(destination);
          destination += 0x10;
        }
        else {
          destination &= 0x7F0;
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank1.array[destination++] = memoryReader[source](this, source++);
          destination = (destination + 0x1800) & 0x1FF0;
        }
        source &= 0xFFF0;
        tilesToTransfer -= 1;
      } while (tilesToTransfer > 0);
    }
    else {
      let VRAM = this.VRAM;
      //DMA transfer for VRAM bank 1:
      do {
        if (destination < 0x1800) {
          VRAM![destination] = memoryReader[source](this, source++);
          VRAM![destination | 0x1] = memoryReader[source](this, source++);
          VRAM![destination | 0x2] = memoryReader[source](this, source++);
          VRAM![destination | 0x3] = memoryReader[source](this, source++);
          VRAM![destination | 0x4] = memoryReader[source](this, source++);
          VRAM![destination | 0x5] = memoryReader[source](this, source++);
          VRAM![destination | 0x6] = memoryReader[source](this, source++);
          VRAM![destination | 0x7] = memoryReader[source](this, source++);
          VRAM![destination | 0x8] = memoryReader[source](this, source++);
          VRAM![destination | 0x9] = memoryReader[source](this, source++);
          VRAM![destination | 0xA] = memoryReader[source](this, source++);
          VRAM![destination | 0xB] = memoryReader[source](this, source++);
          VRAM![destination | 0xC] = memoryReader[source](this, source++);
          VRAM![destination | 0xD] = memoryReader[source](this, source++);
          VRAM![destination | 0xE] = memoryReader[source](this, source++);
          VRAM![destination | 0xF] = memoryReader[source](this, source++);
          this.generateGBCTileBank2(destination);
          destination += 0x10;
        }
        else {
          destination &= 0x7F0;
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          this.BGCHRBank2.array[destination++] = memoryReader[source](this, source++);
          destination = (destination + 0x1800) & 0x1FF0;
        }
        source &= 0xFFF0;
        tilesToTransfer -= 1;
      } while (tilesToTransfer > 0);
    }
    //Update the HDMA registers to their next addresses:
    memory[0xFF51] = source >> 8;
    memory[0xFF52] = source & 0xF0;
    memory[0xFF53] = destination >> 8;
    memory[0xFF54] = destination & 0xF0;
  }
  registerWriteJumpCompile() {
    //deBugLog("This is registerWriteJumpCompile");
    //I/O Registers (GB + GBC):
    //JoyPad
    this.memoryWriter[0xFF00] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.memory[0xFF00] = (data & 0x30) | ((((data & 0x20) == 0) ? (parentObj.JoyPad >> 4) : 0xF) & (((data & 0x10) == 0) ? (parentObj.JoyPad & 0xF) : 0xF));
    }
    this.memoryHighWriter[0] = this.memoryWriter[0xFF00];
    //SB (Serial Transfer Data)
    this.memoryWriter[0xFF01] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.memory[0xFF02] < 0x80) { //Cannot write while a serial transfer is active.
        parentObj.memory[0xFF01] = data;
      }
    }
    this.memoryHighWriter[0x1] = this.memoryWriter[0xFF01];
    //DIV
    this.memoryWriter[0xFF04] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.DIVTicks &= 0xFF; //Update DIV for realignment.
      parentObj.memory[0xFF04] = 0;
    }
    this.memoryHighWriter[0x4] = this.memoryWriter[0xFF04];
    //TIMA
    this.memoryWriter[0xFF05] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.memory[0xFF05] = data;
    }
    this.memoryHighWriter[0x5] = this.memoryWriter[0xFF05];
    //TMA
    this.memoryWriter[0xFF06] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.memory[0xFF06] = data;
    }
    this.memoryHighWriter[0x6] = this.memoryWriter[0xFF06];
    //TAC
    this.memoryWriter[0xFF07] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.memory[0xFF07] = data & 0x07;
      parentObj.TIMAEnabled = (data & 0x04) == 0x04;
      parentObj.TACClocker = Math.pow(4, ((data & 0x3) != 0) ? (data & 0x3) : 4) << 2; //TODO: Find a way to not make a conditional in here...
    }
    this.memoryHighWriter[0x7] = this.memoryWriter[0xFF07];
    //IF (Interrupt Request)
    this.memoryWriter[0xFF0F] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.interruptsRequested = data;
      parentObj.checkIRQMatching();
    }
    this.memoryHighWriter[0xF] = this.memoryWriter[0xFF0F];
    this.memoryWriter[0xFF10] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        if (parentObj.channel1decreaseSweep && (data & 0x08) == 0) {
          if (parentObj.channel1numSweep != parentObj.channel1frequencySweepDivider) {
            parentObj.channel1SweepFault = true;
          }
        }
        parentObj.channel1lastTimeSweep = (data & 0x70) >> 4;
        parentObj.channel1frequencySweepDivider = data & 0x07;
        parentObj.channel1decreaseSweep = ((data & 0x08) == 0x08);
        parentObj.memory[0xFF10] = data;
        parentObj.channel1EnableCheck();
      }
    }
    this.memoryHighWriter[0x10] = this.memoryWriter[0xFF10];
    this.memoryWriter[0xFF11] = (parentObj: GameBoyCore, address: number, tempData: number) => {
      let data = tempData;
      if (parentObj.soundMasterEnabled || !parentObj.cGBC) {
        if (parentObj.soundMasterEnabled) {
          parentObj.audioJIT();
        }
        else {
          data &= 0x3F;
        }
        parentObj.channel1CachedDuty = parentObj.dutyLookup[data >> 6];
        parentObj.channel1totalLength = 0x40 - (data & 0x3F);
        parentObj.memory[0xFF11] = data & 0xC0;
        parentObj.channel1EnableCheck();
      }
    }
    this.memoryHighWriter[0x11] = this.memoryWriter[0xFF11];
    this.memoryWriter[0xFF12] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        if (parentObj.channel1Enabled && parentObj.channel1envelopeSweeps == 0) {
          //Zombie Volume PAPU Bug:
          if (((parentObj.memory[0xFF12] ^ data) & 0x8) == 0x8) {
            if ((parentObj.memory[0xFF12] & 0x8) == 0) {
              if ((parentObj.memory[0xFF12] & 0x7) == 0x7) {
                parentObj.channel1envelopeVolume += 2;
              }
              else {
                parentObj.channel1envelopeVolume += 1;
              }
            }
            parentObj.channel1envelopeVolume = (16 - parentObj.channel1envelopeVolume) & 0xF;
          }
          else if ((parentObj.memory[0xFF12] & 0xF) == 0x8) {
            parentObj.channel1envelopeVolume = (1 + parentObj.channel1envelopeVolume) & 0xF;
          }
          parentObj.channel1OutputLevelCache();
        }
        parentObj.channel1envelopeType = ((data & 0x08) == 0x08);
        parentObj.memory[0xFF12] = data;
        parentObj.channel1VolumeEnableCheck();
      }
    }
    this.memoryHighWriter[0x12] = this.memoryWriter[0xFF12];
    this.memoryWriter[0xFF13] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        parentObj.channel1frequency = (parentObj.channel1frequency & 0x700) | data;
        parentObj.channel1FrequencyTracker = (0x800 - parentObj.channel1frequency) << 2;
        parentObj.memory[0xFF13] = data;
      }
    }
    this.memoryHighWriter[0x13] = this.memoryWriter[0xFF13];
    this.memoryWriter[0xFF14] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        parentObj.channel1consecutive = ((data & 0x40) == 0x0);
        parentObj.channel1frequency = ((data & 0x7) << 8) | (parentObj.channel1frequency & 0xFF);
        parentObj.channel1FrequencyTracker = (0x800 - parentObj.channel1frequency) << 2;
        if (data > 0x7F) {
          //Reload 0xFF10:
          parentObj.channel1timeSweep = parentObj.channel1lastTimeSweep;
          parentObj.channel1numSweep = parentObj.channel1frequencySweepDivider;
          //Reload 0xFF12:
          let nr12 = parentObj.memory[0xFF12];
          parentObj.channel1envelopeVolume = nr12 >> 4;
          parentObj.channel1OutputLevelCache();
          parentObj.channel1envelopeSweepsLast = (nr12 & 0x7) - 1;
          if (parentObj.channel1totalLength == 0) {
            parentObj.channel1totalLength = 0x40;
          }
          if (parentObj.channel1lastTimeSweep > 0 || parentObj.channel1frequencySweepDivider > 0) {
            parentObj.memory[0xFF26] |= 0x1;
          }
          else {
            parentObj.memory[0xFF26] &= 0xFE;
          }
          if ((data & 0x40) == 0x40) {
            parentObj.memory[0xFF26] |= 0x1;
          }
          parentObj.channel1ShadowFrequency = parentObj.channel1frequency;
          //Reset frequency overflow check + frequency sweep type check:
          parentObj.channel1SweepFault = false;
          //Supposed to run immediately:
          parentObj.runAudioSweep();
        }
        parentObj.channel1EnableCheck();
        parentObj.memory[0xFF14] = data & 0x40;
      }
    }
    this.memoryHighWriter[0x14] = this.memoryWriter[0xFF14];
    this.memoryWriter[0xFF16] = (parentObj: GameBoyCore, address: number, tempData: number) => {
      let data = tempData;
      if (parentObj.soundMasterEnabled || !parentObj.cGBC) {
        if (parentObj.soundMasterEnabled) {
          parentObj.audioJIT();
        }
        else {
          data &= 0x3F;
        }
        parentObj.channel2CachedDuty = parentObj.dutyLookup[data >> 6];
        parentObj.channel2totalLength = 0x40 - (data & 0x3F);
        parentObj.memory[0xFF16] = data & 0xC0;
        parentObj.channel2EnableCheck();
      }
    }
    this.memoryHighWriter[0x16] = this.memoryWriter[0xFF16];
    this.memoryWriter[0xFF17] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        if (parentObj.channel2Enabled && parentObj.channel2envelopeSweeps == 0) {
          //Zombie Volume PAPU Bug:
          if (((parentObj.memory[0xFF17] ^ data) & 0x8) == 0x8) {
            if ((parentObj.memory[0xFF17] & 0x8) == 0) {
              if ((parentObj.memory[0xFF17] & 0x7) == 0x7) {
                parentObj.channel2envelopeVolume += 2;
              }
              else {
                parentObj.channel2envelopeVolume += 1;
              }
            }
            parentObj.channel2envelopeVolume = (16 - parentObj.channel2envelopeVolume) & 0xF;
          }
          else if ((parentObj.memory[0xFF17] & 0xF) == 0x8) {
            parentObj.channel2envelopeVolume = (1 + parentObj.channel2envelopeVolume) & 0xF;
          }
          parentObj.channel2OutputLevelCache();
        }
        parentObj.channel2envelopeType = ((data & 0x08) == 0x08);
        parentObj.memory[0xFF17] = data;
        parentObj.channel2VolumeEnableCheck();
      }
    }
    this.memoryHighWriter[0x17] = this.memoryWriter[0xFF17];
    this.memoryWriter[0xFF18] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        parentObj.channel2frequency = (parentObj.channel2frequency & 0x700) | data;
        parentObj.channel2FrequencyTracker = (0x800 - parentObj.channel2frequency) << 2;
        parentObj.memory[0xFF18] = data;
      }
    }
    this.memoryHighWriter[0x18] = this.memoryWriter[0xFF18];
    this.memoryWriter[0xFF19] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        if (data > 0x7F) {
          //Reload 0xFF17:
          let nr22 = parentObj.memory[0xFF17];
          parentObj.channel2envelopeVolume = nr22 >> 4;
          parentObj.channel2OutputLevelCache();
          parentObj.channel2envelopeSweepsLast = (nr22 & 0x7) - 1;
          if (parentObj.channel2totalLength == 0) {
            parentObj.channel2totalLength = 0x40;
          }
          if ((data & 0x40) == 0x40) {
            parentObj.memory[0xFF26] |= 0x2;
          }
        }
        parentObj.channel2consecutive = ((data & 0x40) == 0x0);
        parentObj.channel2frequency = ((data & 0x7) << 8) | (parentObj.channel2frequency & 0xFF);
        parentObj.channel2FrequencyTracker = (0x800 - parentObj.channel2frequency) << 2;
        parentObj.memory[0xFF19] = data & 0x40;
        parentObj.channel2EnableCheck();
      }
    }
    this.memoryHighWriter[0x19] = this.memoryWriter[0xFF19];
    this.memoryWriter[0xFF1A] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        if (!parentObj.channel3canPlay && data >= 0x80) {
          parentObj.channel3lastSampleLookup = 0;
          parentObj.channel3UpdateCache();
        }
        parentObj.channel3canPlay = (data > 0x7F);
        if (parentObj.channel3canPlay && parentObj.memory[0xFF1A] > 0x7F && !parentObj.channel3consecutive) {
          parentObj.memory[0xFF26] |= 0x4;
        }
        parentObj.memory[0xFF1A] = data & 0x80;
        //parentObj.channel3EnableCheck();
      }
    }
    this.memoryHighWriter[0x1A] = this.memoryWriter[0xFF1A];
    this.memoryWriter[0xFF1B] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled || !parentObj.cGBC) {
        if (parentObj.soundMasterEnabled) {
          parentObj.audioJIT();
        }
        parentObj.channel3totalLength = 0x100 - data;
        parentObj.memory[0xFF1B] = data;
        parentObj.channel3EnableCheck();
      }
    }
    this.memoryHighWriter[0x1B] = this.memoryWriter[0xFF1B];
    this.memoryWriter[0xFF1C] = (parentObj: GameBoyCore, address: number, tempData: number) => {
      let data = tempData;
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        data &= 0x60;
        parentObj.memory[0xFF1C] = data;
        parentObj.channel3patternType = (data == 0) ? 4 : ((data >> 5) - 1);
      }
    }
    this.memoryHighWriter[0x1C] = this.memoryWriter[0xFF1C];
    this.memoryWriter[0xFF1D] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        parentObj.channel3frequency = (parentObj.channel3frequency & 0x700) | data;
        parentObj.channel3FrequencyPeriod = (0x800 - parentObj.channel3frequency) << 1;
        parentObj.memory[0xFF1D] = data;
      }
    }
    this.memoryHighWriter[0x1D] = this.memoryWriter[0xFF1D];
    this.memoryWriter[0xFF1E] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        if (data > 0x7F) {
          if (parentObj.channel3totalLength == 0) {
            parentObj.channel3totalLength = 0x100;
          }
          parentObj.channel3lastSampleLookup = 0;
          if ((data & 0x40) == 0x40) {
            parentObj.memory[0xFF26] |= 0x4;
          }
        }
        parentObj.channel3consecutive = ((data & 0x40) == 0x0);
        parentObj.channel3frequency = ((data & 0x7) << 8) | (parentObj.channel3frequency & 0xFF);
        parentObj.channel3FrequencyPeriod = (0x800 - parentObj.channel3frequency) << 1;
        parentObj.memory[0xFF1E] = data & 0x40;
        parentObj.channel3EnableCheck();
      }
    }
    this.memoryHighWriter[0x1E] = this.memoryWriter[0xFF1E];
    this.memoryWriter[0xFF20] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled || !parentObj.cGBC) {
        if (parentObj.soundMasterEnabled) {
          parentObj.audioJIT();
        }
        parentObj.channel4totalLength = 0x40 - (data & 0x3F);
        parentObj.memory[0xFF20] = data | 0xC0;
        parentObj.channel4EnableCheck();
      }
    }
    this.memoryHighWriter[0x20] = this.memoryWriter[0xFF20];
    this.memoryWriter[0xFF21] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        if (parentObj.channel4Enabled && parentObj.channel4envelopeSweeps == 0) {
          //Zombie Volume PAPU Bug:
          if (((parentObj.memory[0xFF21] ^ data) & 0x8) == 0x8) {
            if ((parentObj.memory[0xFF21] & 0x8) == 0) {
              if ((parentObj.memory[0xFF21] & 0x7) == 0x7) {
                parentObj.channel4envelopeVolume += 2;
              }
              else {
                parentObj.channel4envelopeVolume += 1;
              }
            }
            parentObj.channel4envelopeVolume = (16 - parentObj.channel4envelopeVolume) & 0xF;
          }
          else if ((parentObj.memory[0xFF21] & 0xF) == 0x8) {
            parentObj.channel4envelopeVolume = (1 + parentObj.channel4envelopeVolume) & 0xF;
          }
          parentObj.channel4currentVolume = parentObj.channel4envelopeVolume << parentObj.channel4VolumeShifter;
        }
        parentObj.channel4envelopeType = ((data & 0x08) == 0x08);
        parentObj.memory[0xFF21] = data;
        parentObj.channel4UpdateCache();
        parentObj.channel4VolumeEnableCheck();
      }
    }
    this.memoryHighWriter[0x21] = this.memoryWriter[0xFF21];
    this.memoryWriter[0xFF22] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        parentObj.channel4FrequencyPeriod = Math.max((data & 0x7) << 4, 8) << (data >> 4);
        let bitWidth = (data & 0x8);
        if ((bitWidth == 0x8 && parentObj.channel4BitRange == 0x7FFF) || (bitWidth == 0 && parentObj.channel4BitRange == 0x7F)) {
          parentObj.channel4lastSampleLookup = 0;
          parentObj.channel4BitRange = (bitWidth == 0x8) ? 0x7F : 0x7FFF;
          parentObj.channel4VolumeShifter = (bitWidth == 0x8) ? 7 : 15;
          parentObj.channel4currentVolume = parentObj.channel4envelopeVolume << parentObj.channel4VolumeShifter;
          parentObj.noiseSampleTable = (bitWidth == 0x8) ? parentObj.LSFR7Table : parentObj.LSFR15Table;
        }
        parentObj.memory[0xFF22] = data;
        parentObj.channel4UpdateCache();
      }
    }
    this.memoryHighWriter[0x22] = this.memoryWriter[0xFF22];
    this.memoryWriter[0xFF23] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled) {
        parentObj.audioJIT();
        parentObj.memory[0xFF23] = data;
        parentObj.channel4consecutive = ((data & 0x40) == 0x0);
        if (data > 0x7F) {
          let nr42 = parentObj.memory[0xFF21];
          parentObj.channel4envelopeVolume = nr42 >> 4;
          parentObj.channel4currentVolume = parentObj.channel4envelopeVolume << parentObj.channel4VolumeShifter;
          parentObj.channel4envelopeSweepsLast = (nr42 & 0x7) - 1;
          if (parentObj.channel4totalLength == 0) {
            parentObj.channel4totalLength = 0x40;
          }
          if ((data & 0x40) == 0x40) {
            parentObj.memory[0xFF26] |= 0x8;
          }
        }
        parentObj.channel4EnableCheck();
      }
    }
    this.memoryHighWriter[0x23] = this.memoryWriter[0xFF23];
    this.memoryWriter[0xFF24] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled && parentObj.memory[0xFF24] != data) {
        parentObj.audioJIT();
        parentObj.memory[0xFF24] = data;
        parentObj.VinLeftChannelMasterVolume = ((data >> 4) & 0x07) + 1;
        parentObj.VinRightChannelMasterVolume = (data & 0x07) + 1;
        parentObj.mixerOutputLevelCache();
      }
    }
    this.memoryHighWriter[0x24] = this.memoryWriter[0xFF24];
    this.memoryWriter[0xFF25] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.soundMasterEnabled && parentObj.memory[0xFF25] != data) {
        parentObj.audioJIT();
        parentObj.memory[0xFF25] = data;
        parentObj.rightChannel1 = ((data & 0x01) == 0x01);
        parentObj.rightChannel2 = ((data & 0x02) == 0x02);
        parentObj.rightChannel3 = ((data & 0x04) == 0x04);
        parentObj.rightChannel4 = ((data & 0x08) == 0x08);
        parentObj.leftChannel1 = ((data & 0x10) == 0x10);
        parentObj.leftChannel2 = ((data & 0x20) == 0x20);
        parentObj.leftChannel3 = ((data & 0x40) == 0x40);
        parentObj.leftChannel4 = (data > 0x7F);
        parentObj.channel1OutputLevelCache();
        parentObj.channel2OutputLevelCache();
        parentObj.channel3OutputLevelCache();
        parentObj.channel4OutputLevelCache();
      }
    }
    this.memoryHighWriter[0x25] = this.memoryWriter[0xFF25];
    this.memoryWriter[0xFF26] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.audioJIT();
      if (!parentObj.soundMasterEnabled && data > 0x7F) {
        parentObj.memory[0xFF26] = 0x80;
        parentObj.soundMasterEnabled = true;
        parentObj.initializeAudioStartState();
      }
      else if (parentObj.soundMasterEnabled && data < 0x80) {
        parentObj.memory[0xFF26] = 0;
        parentObj.soundMasterEnabled = false;
        //GBDev wiki says the registers are written with zeros on power off:
        for (let index = 0xFF10; index < 0xFF26; index++) {
          parentObj.memoryWriter[index](parentObj, index, 0);
        }
      }
    }
    this.memoryHighWriter[0x26] = this.memoryWriter[0xFF26];
    //0xFF27 to 0xFF2F don't do anything...
    this.memoryHighWriter[0x27] = this.cartIgnoreWrite;
    this.memoryWriter[0xFF27] = this.cartIgnoreWrite;
    this.memoryHighWriter[0x28] = this.cartIgnoreWrite;
    this.memoryWriter[0xFF28] = this.cartIgnoreWrite;
    this.memoryHighWriter[0x29] = this.cartIgnoreWrite;
    this.memoryWriter[0xFF29] = this.cartIgnoreWrite;
    this.memoryHighWriter[0x2A] = this.cartIgnoreWrite;
    this.memoryWriter[0xFF2A] = this.cartIgnoreWrite;
    this.memoryHighWriter[0x2B] = this.cartIgnoreWrite;
    this.memoryWriter[0xFF2B] = this.cartIgnoreWrite;
    this.memoryHighWriter[0x2C] = this.cartIgnoreWrite;
    this.memoryWriter[0xFF2C] = this.cartIgnoreWrite;
    this.memoryHighWriter[0x2D] = this.cartIgnoreWrite;
    this.memoryWriter[0xFF2D] = this.cartIgnoreWrite;
    this.memoryHighWriter[0x2E] = this.cartIgnoreWrite;
    this.memoryWriter[0xFF2E] = this.cartIgnoreWrite;
    this.memoryHighWriter[0x2F] = this.cartIgnoreWrite;
    this.memoryWriter[0xFF2F] = this.cartIgnoreWrite;
    //WAVE PCM RAM:
    this.memoryWriter[0xFF30] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0, data);
    }
    this.memoryHighWriter[0x30] = this.memoryWriter[0xFF30];
    this.memoryWriter[0xFF31] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0x1, data);
    }
    this.memoryHighWriter[0x31] = this.memoryWriter[0xFF31];
    this.memoryWriter[0xFF32] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0x2, data);
    }
    this.memoryHighWriter[0x32] = this.memoryWriter[0xFF32];
    this.memoryWriter[0xFF33] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0x3, data);
    }
    this.memoryHighWriter[0x33] = this.memoryWriter[0xFF33];
    this.memoryWriter[0xFF34] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0x4, data);
    }
    this.memoryHighWriter[0x34] = this.memoryWriter[0xFF34];
    this.memoryWriter[0xFF35] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0x5, data);
    }
    this.memoryHighWriter[0x35] = this.memoryWriter[0xFF35];
    this.memoryWriter[0xFF36] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0x6, data);
    }
    this.memoryHighWriter[0x36] = this.memoryWriter[0xFF36];
    this.memoryWriter[0xFF37] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0x7, data);
    }
    this.memoryHighWriter[0x37] = this.memoryWriter[0xFF37];
    this.memoryWriter[0xFF38] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0x8, data);
    }
    this.memoryHighWriter[0x38] = this.memoryWriter[0xFF38];
    this.memoryWriter[0xFF39] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0x9, data);
    }
    this.memoryHighWriter[0x39] = this.memoryWriter[0xFF39];
    this.memoryWriter[0xFF3A] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0xA, data);
    }
    this.memoryHighWriter[0x3A] = this.memoryWriter[0xFF3A];
    this.memoryWriter[0xFF3B] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0xB, data);
    }
    this.memoryHighWriter[0x3B] = this.memoryWriter[0xFF3B];
    this.memoryWriter[0xFF3C] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0xC, data);
    }
    this.memoryHighWriter[0x3C] = this.memoryWriter[0xFF3C];
    this.memoryWriter[0xFF3D] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0xD, data);
    }
    this.memoryHighWriter[0x3D] = this.memoryWriter[0xFF3D];
    this.memoryWriter[0xFF3E] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0xE, data);
    }
    this.memoryHighWriter[0x3E] = this.memoryWriter[0xFF3E];
    this.memoryWriter[0xFF3F] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.channel3WriteRAM(0xF, data);
    }
    this.memoryHighWriter[0x3F] = this.memoryWriter[0xFF3F];
    //SCY
    this.memoryWriter[0xFF42] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.backgroundY != data) {
        parentObj.midScanLineJIT();
        parentObj.backgroundY = data;
      }
    }
    this.memoryHighWriter[0x42] = this.memoryWriter[0xFF42];
    //SCX
    this.memoryWriter[0xFF43] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.backgroundX != data) {
        parentObj.midScanLineJIT();
        parentObj.backgroundX = data;
      }
    }
    this.memoryHighWriter[0x43] = this.memoryWriter[0xFF43];
    //LY
    this.memoryWriter[0xFF44] = (parentObj: GameBoyCore, address: number, data: number) => {
      //Read Only:
      if (parentObj.LCDisOn) {
        //Gambatte says to do this:
        parentObj.modeSTAT = 2;
        parentObj.midScanlineOffset = -1;
        parentObj.totalLinesPassed = 0;
        parentObj.currentX = 0;
        parentObj.queuedScanLines = 0;
        parentObj.lastUnrenderedLine = 0;
        parentObj.LCDTicks = 0;
        parentObj.STATTracker = 0;
        parentObj.actualScanLine = 0;
        parentObj.memory[0xFF44] = 0;
      }
    }
    this.memoryHighWriter[0x44] = this.memoryWriter[0xFF44];
    //LYC
    this.memoryWriter[0xFF45] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.memory[0xFF45] != data) {
        parentObj.memory[0xFF45] = data;
        if (parentObj.LCDisOn) {
          parentObj.matchLYC(); //Get the compare of the first scan line.
        }
      }
    }
    this.memoryHighWriter[0x45] = this.memoryWriter[0xFF45];
    //WY
    this.memoryWriter[0xFF4A] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.windowY != data) {
        parentObj.midScanLineJIT();
        parentObj.windowY = data;
      }
    }
    this.memoryHighWriter[0x4A] = this.memoryWriter[0xFF4A];
    //WX
    this.memoryWriter[0xFF4B] = (parentObj: GameBoyCore, address: number, data: number) => {
      if (parentObj.memory[0xFF4B] != data) {
        parentObj.midScanLineJIT();
        parentObj.memory[0xFF4B] = data;
        parentObj.windowX = data - 7;
      }
    }
    this.memoryHighWriter[0x4B] = this.memoryWriter[0xFF4B];
    this.memoryWriter[0xFF72] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.memory[0xFF72] = data;
    }
    this.memoryHighWriter[0x72] = this.memoryWriter[0xFF72];
    this.memoryWriter[0xFF73] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.memory[0xFF73] = data;
    }
    this.memoryHighWriter[0x73] = this.memoryWriter[0xFF73];
    this.memoryWriter[0xFF75] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.memory[0xFF75] = data;
    }
    this.memoryHighWriter[0x75] = this.memoryWriter[0xFF75];
    this.memoryHighWriter[0x76] = this.cartIgnoreWrite;
    this.memoryWriter[0xFF76] = this.cartIgnoreWrite;
    this.memoryHighWriter[0x77] = this.cartIgnoreWrite;
    this.memoryWriter[0xFF77] = this.cartIgnoreWrite;
    //IE (Interrupt Enable)
    this.memoryWriter[0xFFFF] = (parentObj: GameBoyCore, address: number, data: number) => {
      parentObj.interruptsEnabled = data;
      parentObj.checkIRQMatching();
    }
    this.memoryHighWriter[0xFF] = this.memoryWriter[0xFFFF];
    this.recompileModelSpecificIOWriteHandling();
    this.recompileBootIOWriteHandling();
  }

  recompileModelSpecificIOWriteHandling = () => {
    //deBugLog("This is recompileModelSpecificIOWriteHandling");
    if (this.cGBC) {
      //GameBoy Color Specific I/O:
      //SC (Serial Transfer Control Register)
      this.memoryWriter[0xFF02] = (parentObj: GameBoyCore, address: number, data: number) => {
        if (((data & 0x1) == 0x1)) {
          //Internal clock:
          parentObj.memory[0xFF02] = (data & 0x7F);
          parentObj.serialTimer = ((data & 0x2) == 0) ? 4096 : 128; //Set the Serial IRQ counter.
          parentObj.serialShiftTimer = ((data & 0x2) == 0) ? 512 : 16; //Set the transfer data shift counter.
          parentObj.serialShiftTimerAllocated = parentObj.serialShiftTimer
        }
        else {
          //External clock:
          parentObj.memory[0xFF02] = data;
          parentObj.serialShiftTimer = 0; //Zero the timers, since we're emulating as if nothing is connected.
          parentObj.serialShiftTimerAllocated = parentObj.serialShiftTimer;
          parentObj.serialTimer = parentObj.serialShiftTimer;
        }
      }
      this.memoryHighWriter[0x2] = this.memoryWriter[0xFF02];
      this.memoryWriter[0xFF40] = (parentObj: GameBoyCore, address: number, data: number) => {
        if (parentObj.memory[0xFF40] != data) {
          parentObj.midScanLineJIT();
          let temp_var = (data > 0x7F);
          if (temp_var != parentObj.LCDisOn) {
            //When the display mode changes...
            parentObj.LCDisOn = temp_var;
            parentObj.memory[0xFF41] &= 0x78;
            parentObj.midScanlineOffset = -1;
            parentObj.totalLinesPassed = 0
            parentObj.currentX = 0
            parentObj.queuedScanLines = 0
            parentObj.lastUnrenderedLine = 0
            parentObj.STATTracker = 0
            parentObj.LCDTicks = 0
            parentObj.actualScanLine = 0
            parentObj.memory[0xFF44] = 0;
            if (parentObj.LCDisOn) {
              parentObj.modeSTAT = 2;
              parentObj.matchLYC(); //Get the compare of the first scan line.
              parentObj.LCDCONTROL = parentObj.LINECONTROL;
            }
            else {
              parentObj.modeSTAT = 0;
              parentObj.LCDCONTROL = parentObj.DISPLAYOFFCONTROL;
              parentObj.DisplayShowOff();
            }
            parentObj.interruptsRequested &= 0xFD;
          }
          parentObj.gfxWindowCHRBankPosition = ((data & 0x40) == 0x40) ? 0x400 : 0;
          parentObj.gfxWindowDisplay = ((data & 0x20) == 0x20);
          parentObj.gfxBackgroundBankOffset = ((data & 0x10) == 0x10) ? 0 : 0x80;
          parentObj.gfxBackgroundCHRBankPosition = ((data & 0x08) == 0x08) ? 0x400 : 0;
          parentObj.gfxSpriteNormalHeight = ((data & 0x04) == 0);
          parentObj.gfxSpriteShow = ((data & 0x02) == 0x02);
          parentObj.BGPriorityEnabled = ((data & 0x01) == 0x01);
          parentObj.priorityFlaggingPathRebuild(); //Special case the priority flagging as an optimization.
          parentObj.memory[0xFF40] = data;
        }
      }
      this.memoryHighWriter[0x40] = this.memoryWriter[0xFF40];
      this.memoryWriter[0xFF41] = (parentObj: GameBoyCore, address: number, data: number) => {
        parentObj.LYCMatchTriggerSTAT = ((data & 0x40) == 0x40);
        parentObj.mode2TriggerSTAT = ((data & 0x20) == 0x20);
        parentObj.mode1TriggerSTAT = ((data & 0x10) == 0x10);
        parentObj.mode0TriggerSTAT = ((data & 0x08) == 0x08);
        parentObj.memory[0xFF41] = data & 0x78;
      }
      this.memoryHighWriter[0x41] = this.memoryWriter[0xFF41];
      this.memoryWriter[0xFF46] = (parentObj: GameBoyCore, addressTemp: number, dataTemp: number) => {
        let data = dataTemp;
        let address = addressTemp;
        parentObj.memory[0xFF46] = data;
        if (data < 0xE0) {
          data <<= 8;
          address = 0xFE00;
          let stat = parentObj.modeSTAT;
          parentObj.modeSTAT = 0;
          let newData = 0;
          do {
            newData = parentObj.memoryReader[data](parentObj, data++);
            if (newData != parentObj.memory[address]) {
              //JIT the graphics render queue:
              parentObj.modeSTAT = stat;
              parentObj.graphicsJIT();
              parentObj.modeSTAT = 0;
              parentObj.memory[address++] = newData;
              break;
            }
            address += 1;
          } while (address < 0xFEA0);
          if (address < 0xFEA0) {
            do {
              parentObj.memory[address++] = parentObj.memoryReader[data](parentObj, data++);
              parentObj.memory[address++] = parentObj.memoryReader[data](parentObj, data++);
              parentObj.memory[address++] = parentObj.memoryReader[data](parentObj, data++);
              parentObj.memory[address++] = parentObj.memoryReader[data](parentObj, data++);
            } while (address < 0xFEA0);
          }
          parentObj.modeSTAT = stat;
        }
      }
      this.memoryHighWriter[0x46] = this.memoryWriter[0xFF46];
      //KEY1
      this.memoryWriter[0xFF4D] = (parentObj: GameBoyCore, address: number, data: number) => {
        let temp = parentObj.memory[0xFF4D] & 0x80;
        parentObj.memory[0xFF4D] = (data & 0x7F) | (temp);
      }
      this.memoryHighWriter[0x4D] = this.memoryWriter[0xFF4D];
      this.memoryWriter[0xFF4F] = (parentObj: GameBoyCore, address: number, data: number) => {
        parentObj.currVRAMBank = data & 0x01;
        if (parentObj.currVRAMBank > 0) {
          parentObj.BGCHRCurrentBank = parentObj.BGCHRBank2;
        }
        else {
          parentObj.BGCHRCurrentBank = parentObj.BGCHRBank1;
        }
        //Only writable by GBC.
      }
      this.memoryHighWriter[0x4F] = this.memoryWriter[0xFF4F];
      this.memoryWriter[0xFF51] = (parentObj: GameBoyCore, address: number, data: number) => {
        if (!parentObj.hdmaRunning) {
          parentObj.memory[0xFF51] = data;
        }
      }
      this.memoryHighWriter[0x51] = this.memoryWriter[0xFF51];
      this.memoryWriter[0xFF52] = (parentObj: GameBoyCore, address: number, data: number) => {
        if (!parentObj.hdmaRunning) {
          parentObj.memory[0xFF52] = data & 0xF0;
        }
      }
      this.memoryHighWriter[0x52] = this.memoryWriter[0xFF52];
      this.memoryWriter[0xFF53] = (parentObj: GameBoyCore, address: number, data: number) => {
        if (!parentObj.hdmaRunning) {
          parentObj.memory[0xFF53] = data & 0x1F;
        }
      }
      this.memoryHighWriter[0x53] = this.memoryWriter[0xFF53];
      this.memoryWriter[0xFF54] = (parentObj: GameBoyCore, address: number, data: number) => {
        if (!parentObj.hdmaRunning) {
          parentObj.memory[0xFF54] = data & 0xF0;
        }
      }
      this.memoryHighWriter[0x54] = this.memoryWriter[0xFF54];
      this.memoryWriter[0xFF55] = (parentObj: GameBoyCore, address: number, data: number) => {
        if (!parentObj.hdmaRunning) {
          if ((data & 0x80) == 0) {
            //DMA
            parentObj.DMAWrite((data & 0x7F) + 1);
            parentObj.memory[0xFF55] = 0xFF; //Transfer completed.
          }
          else {
            //H-Blank DMA
            parentObj.hdmaRunning = true;
            parentObj.memory[0xFF55] = data & 0x7F;
          }
        }
        else if ((data & 0x80) == 0) {
          //Stop H-Blank DMA
          parentObj.hdmaRunning = false;
          parentObj.memory[0xFF55] |= 0x80;
        }
        else {
          parentObj.memory[0xFF55] = data & 0x7F;
        }
      }
      this.memoryHighWriter[0x55] = this.memoryWriter[0xFF55];
      this.memoryWriter[0xFF68] = (parentObj: GameBoyCore, address: number, data: number) => {
        parentObj.memory[0xFF69] = parentObj.gbcBGRawPalette![data & 0x3F];
        parentObj.memory[0xFF68] = data;
      }
      this.memoryHighWriter[0x68] = this.memoryWriter[0xFF68];
      this.memoryWriter[0xFF69] = (parentObj: GameBoyCore, address: number, data: number) => {
        parentObj.updateGBCBGPalette(parentObj.memory[0xFF68] & 0x3F, data);
        if (parentObj.memory[0xFF68] > 0x7F) { // high bit = autoincrement
          let next = ((parentObj.memory[0xFF68] + 1) & 0x3F);
          parentObj.memory[0xFF68] = (next | 0x80);
          parentObj.memory[0xFF69] = parentObj.gbcBGRawPalette![next];
        }
        else {
          parentObj.memory[0xFF69] = data;
        }
      }
      this.memoryHighWriter[0x69] = this.memoryWriter[0xFF69]
      this.memoryWriter[0xFF6A] = (parentObj: GameBoyCore, address: number, data: number) => {
        parentObj.memory[0xFF6B] = parentObj.gbcOBJRawPalette![data & 0x3F];
        parentObj.memory[0xFF6A] = data;
      }
      this.memoryHighWriter[0x6A] = this.memoryWriter[0xFF6A]
      this.memoryWriter[0xFF6B] = (parentObj: GameBoyCore, address: number, data: number) => {
        let temp = parentObj.memory[0xFF6A];
        parentObj.updateGBCOBJPalette(temp & 0x3F, data);
        if (temp > 0x7F) { // high bit = autoincrement
          let next = ((parentObj.memory[0xFF6A] + 1) & 0x3F);
          parentObj.memory[0xFF6A] = (next | 0x80);
          parentObj.memory[0xFF6B] = parentObj.gbcOBJRawPalette![next];
        }
        else {
          parentObj.memory[0xFF6B] = data;
        }
      }
      this.memoryHighWriter[0x6B] = this.memoryWriter[0xFF6B];
      //SVBK
      this.memoryWriter[0xFF70] = (parentObj: GameBoyCore, address: number, data: number) => {
        let addressCheck = (parentObj.memory[0xFF51] << 8) | parentObj.memory[0xFF52]; //Cannot change the RAM bank while WRAM is the source of a running HDMA.
        if (!parentObj.hdmaRunning || addressCheck < 0xD000 || addressCheck >= 0xE000) {
          parentObj.gbcRamBank = Math.max(data & 0x07, 1); //Bank range is from 1-7
          parentObj.gbcRamBankPosition = ((parentObj.gbcRamBank - 1) << 12) - 0xD000;
          parentObj.gbcRamBankPositionECHO = parentObj.gbcRamBankPosition - 0x2000;
        }
        parentObj.memory[0xFF70] = data; //Bit 6 cannot be written to.
      }
      this.memoryHighWriter[0x70] = this.memoryWriter[0xFF70];
      this.memoryWriter[0xFF74] = (parentObj: GameBoyCore, address: number, data: number) => {
        parentObj.memory[0xFF74] = data;
      }
      this.memoryHighWriter[0x74] = this.memoryWriter[0xFF74];
    }
    else {
      //Fill in the GameBoy Color I/O registers as normal RAM for GameBoy compatibility:
      //SC (Serial Transfer Control Register)
      this.memoryWriter[0xFF02] = (parentObj: GameBoyCore, address: number, data: number) => {
        if (((data & 0x1) == 0x1)) {
          //Internal clock:
          parentObj.memory[0xFF02] = (data & 0x7F);
          parentObj.serialTimer = 4096; //Set the Serial IRQ counter.
          parentObj.serialShiftTimer = 512
          parentObj.serialShiftTimerAllocated = 512; //Set the transfer data shift counter.
        }
        else {
          //External clock:
          parentObj.memory[0xFF02] = data;
          parentObj.serialShiftTimer = 0
          parentObj.serialShiftTimerAllocated = 0
          parentObj.serialTimer = 0; //Zero the timers, since we're emulating as if nothing is connected.
        }
      }
      this.memoryHighWriter[0x2] = this.memoryWriter[0xFF02];
      this.memoryWriter[0xFF40] = (parentObj: GameBoyCore, address: number, data: number) => {
        if (parentObj.memory[0xFF40] != data) {
          parentObj.midScanLineJIT();
          let temp_var = (data > 0x7F);
          if (temp_var != parentObj.LCDisOn) {
            //When the display mode changes...
            parentObj.LCDisOn = temp_var;
            parentObj.memory[0xFF41] &= 0x78;
            parentObj.midScanlineOffset = -1;
            parentObj.totalLinesPassed = 0;
            parentObj.currentX = 0;
            parentObj.queuedScanLines = 0;
            parentObj.lastUnrenderedLine = 0;
            parentObj.STATTracker = 0;
            parentObj.LCDTicks = 0;
            parentObj.actualScanLine = 0;
            parentObj.memory[0xFF44] = 0;
            if (parentObj.LCDisOn) {
              parentObj.modeSTAT = 2;
              parentObj.matchLYC(); //Get the compare of the first scan line.
              parentObj.LCDCONTROL = parentObj.LINECONTROL;
            }
            else {
              parentObj.modeSTAT = 0;
              parentObj.LCDCONTROL = parentObj.DISPLAYOFFCONTROL;
              parentObj.DisplayShowOff();
            }
            parentObj.interruptsRequested &= 0xFD;
          }
          parentObj.gfxWindowCHRBankPosition = ((data & 0x40) == 0x40) ? 0x400 : 0;
          parentObj.gfxWindowDisplay = (data & 0x20) == 0x20;
          parentObj.gfxBackgroundBankOffset = ((data & 0x10) == 0x10) ? 0 : 0x80;
          parentObj.gfxBackgroundCHRBankPosition = ((data & 0x08) == 0x08) ? 0x400 : 0;
          parentObj.gfxSpriteNormalHeight = ((data & 0x04) == 0);
          parentObj.gfxSpriteShow = (data & 0x02) == 0x02;
          parentObj.bgEnabled = ((data & 0x01) == 0x01);
          parentObj.memory[0xFF40] = data;
        }
      }
      this.memoryHighWriter[0x40] = this.memoryWriter[0xFF40];
      this.memoryWriter[0xFF41] = (parentObj: GameBoyCore, address: number, data: number) => {
        parentObj.LYCMatchTriggerSTAT = ((data & 0x40) == 0x40);
        parentObj.mode2TriggerSTAT = ((data & 0x20) == 0x20);
        parentObj.mode1TriggerSTAT = ((data & 0x10) == 0x10);
        parentObj.mode0TriggerSTAT = ((data & 0x08) == 0x08);
        parentObj.memory[0xFF41] = data & 0x78;
        if ((!parentObj.usedBootROM || !parentObj.usedGBCBootROM) && parentObj.LCDisOn && parentObj.modeSTAT < 2) {
          parentObj.interruptsRequested |= 0x2;
          parentObj.checkIRQMatching();
        }
      }
      this.memoryHighWriter[0x41] = this.memoryWriter[0xFF41];
      this.memoryWriter[0xFF46] = (parentObj: GameBoyCore, addressTemp: number, dataTemp: number) => {
        parentObj.memory[0xFF46] = dataTemp;
        let data = dataTemp;
        let address = addressTemp;
        if (data > 0x7F && data < 0xE0) { //DMG cannot DMA from the ROM banks.
          data <<= 8;
          address = 0xFE00;
          let stat = parentObj.modeSTAT;
          parentObj.modeSTAT = 0;
          let newData = 0;
          do {
            newData = parentObj.memoryReader[data](parentObj, data++);
            if (newData != parentObj.memory[address]) {
              //JIT the graphics render queue:
              parentObj.modeSTAT = stat;
              parentObj.graphicsJIT();
              parentObj.modeSTAT = 0;
              parentObj.memory[address++] = newData;
              break;
            }
            address += 1;
          } while (address < 0xFEA0);
          if (address < 0xFEA0) {
            do {
              parentObj.memory[address++] = parentObj.memoryReader[data](parentObj, data++);
              parentObj.memory[address++] = parentObj.memoryReader[data](parentObj, data++);
              parentObj.memory[address++] = parentObj.memoryReader[data](parentObj, data++);
              parentObj.memory[address++] = parentObj.memoryReader[data](parentObj, data++);
            } while (address < 0xFEA0);
          }
          parentObj.modeSTAT = stat;
        }
      }
      this.memoryHighWriter[0x46] = this.memoryWriter[0xFF46];
      this.memoryWriter[0xFF47] = (parentObj: GameBoyCore, address: number, data: number) => {
        if (parentObj.memory[0xFF47] != data) {
          parentObj.midScanLineJIT();
          parentObj.updateGBBGPalette!(data);
          parentObj.memory[0xFF47] = data;
        }
      }
      this.memoryHighWriter[0x47] = this.memoryWriter[0xFF47];
      this.memoryWriter[0xFF48] = (parentObj: GameBoyCore, address: number, data: number) => {
        if (parentObj.memory[0xFF48] != data) {
          parentObj.midScanLineJIT();
          parentObj.updateGBOBJPalette!(0, data);
          parentObj.memory[0xFF48] = data;
        }
      }
      this.memoryHighWriter[0x48] = this.memoryWriter[0xFF48];
      this.memoryWriter[0xFF49] = (parentObj: GameBoyCore, address: number, data: number) => {
        if (parentObj.memory[0xFF49] != data) {
          parentObj.midScanLineJIT();
          parentObj.updateGBOBJPalette!(4, data);
          parentObj.memory[0xFF49] = data;
        }
      }
      this.memoryHighWriter[0x49] = this.memoryWriter[0xFF49];
      this.memoryWriter[0xFF4D] = (parentObj: GameBoyCore, address: number, data: number) => {
        parentObj.memory[0xFF4D] = data;
      }
      this.memoryHighWriter[0x4D] = this.memoryWriter[0xFF4D];
      this.memoryHighWriter[0x4F] = this.cartIgnoreWrite;
      this.memoryWriter[0xFF4F] = this.cartIgnoreWrite; //Not writable in DMG mode.
      this.memoryHighWriter[0x55] = this.cartIgnoreWrite;
      this.memoryWriter[0xFF55] = this.cartIgnoreWrite;
      this.memoryHighWriter[0x68] = this.cartIgnoreWrite;
      this.memoryWriter[0xFF68] = this.cartIgnoreWrite;
      this.memoryHighWriter[0x69] = this.cartIgnoreWrite;
      this.memoryWriter[0xFF69] = this.cartIgnoreWrite;
      this.memoryHighWriter[0x6A] = this.cartIgnoreWrite;
      this.memoryWriter[0xFF6A] = this.cartIgnoreWrite;
      this.memoryHighWriter[0x6B] = this.cartIgnoreWrite;
      this.memoryWriter[0xFF6B] = this.cartIgnoreWrite;
      this.memoryHighWriter[0x6C] = this.cartIgnoreWrite;
      this.memoryWriter[0xFF6C] = this.cartIgnoreWrite;
      this.memoryHighWriter[0x70] = this.cartIgnoreWrite;
      this.memoryWriter[0xFF70] = this.cartIgnoreWrite;
      this.memoryHighWriter[0x74] = this.cartIgnoreWrite;
      this.memoryWriter[0xFF74] = this.cartIgnoreWrite;
    }
  }

  recompileBootIOWriteHandling() {
    //deBugLog("This is recompileBootIOWriteHandling");
    //Boot I/O Registers:
    if (this.inBootstrap) {
      this.memoryWriter[0xFF50] = (parentObj: GameBoyCore, address: number, data: number) => {
        //deBugLog("Boot ROM reads blocked: Bootstrap process has ended.")
        parentObj.inBootstrap = false;
        parentObj.disableBootROM();
        parentObj.memory[0xFF50] = data; 
      }
      this.memoryHighWriter[0x50] = this.memoryWriter[0xFF50];
      if (this.cGBC) {
        this.memoryWriter[0xFF6C] = (parentObj: GameBoyCore, address: number, data: number) => {
          if (parentObj.inBootstrap) {
            parentObj.cGBC = ((data & 0x1) == 0);
            //Exception to the GBC identifying code:
            if (parentObj.name + parentObj.gameCode + parentObj.ROM[0x143] == "Game and Watch 50") {
              parentObj.cGBC = true;
              cout("Created a boot exception for Game and Watch Gallery 2 (GBC ID byte is wrong on the cartridge).", 1);
            }
            cout("Booted to GBC Mode: " + parentObj.cGBC, 0);
          }
          parentObj.memory[0xFF6C] = data;
        }
        this.memoryHighWriter[0x6C] = this.memoryWriter[0xFF6C];
      }
    }
    else {
      //Lockout the ROMs from accessing the BOOT ROM control register:
      this.memoryHighWriter[0x50] = this.cartIgnoreWrite;
      this.memoryWriter[0xFF50] = this.cartIgnoreWrite;
    }
  }

  toTypedArray(baseArray: TNextArray, memtype: string): TNextArray {
    if (baseArray == null || baseArray.length == 0) {
      return new Int32Array();
    }
    let length = baseArray.length;
    let typedArrayTemp: TNextArray = new Uint8Array();
    switch (memtype) {
      case "uint8":
        typedArrayTemp = new Uint8Array(length);
        break;
      case "int8":
        typedArrayTemp = new Int8Array(length);
        break;
      case "int32":
        typedArrayTemp = new Int32Array(length);
        break;
      case "float32":
        typedArrayTemp = new Float32Array(length);
      default:
        break;
    }
    for (let index = 0; index < length; index++) {
      typedArrayTemp[index] = baseArray[index];
    }
    return typedArrayTemp;
  }

  fromTypedArray(baseArray: TNextArray): TNextArray {
    if (!baseArray || !baseArray.length) {
      return new Int8Array();
    }
    let arrayTemp: TNextArray = new Int8Array();
    for (let index = 0; index < baseArray.length; ++index) {
      arrayTemp[index] = baseArray[index];
    }
    return arrayTemp;
  }

  getTypedArray(length: number, defaultValue: number, numberType: string): TNextArray {
    let arrayHandle: TNextArray = new Int8Array();
    if (settings[5]) {
      for (let i = 0; i < length; i++) {
        arrayHandle[i] = defaultValue;
      }
      return arrayHandle
    }
    switch (numberType) {
      case "int8":
        arrayHandle = new Int8Array(length);
        break;
      case "uint8":
        arrayHandle = new Uint8Array(length);
        break;
      case "int32":
        arrayHandle = new Int32Array(length);
        break;
      case "float32":
        arrayHandle = new Float32Array(length);
      default:
         break;
    }
    if (defaultValue != 0) {
      let index = 0;
      while (index < length) {
        arrayHandle[index++] = defaultValue;
      }
    }
    return arrayHandle;
  };
}

// End of js/GameBoyCore.js file.

// Start of js/GameBoyIO.js file.


let gameboy: GameBoyCore | null = null;
let gbRunInterval: number | null = null; //GameBoyCore Timer
let settings: Array<boolean | number[] | number> = [//Some settings.
  true,              //Turn on sound.
  false,             //Boot with boot ROM first? (set to false for benchmarking)
  false,             //Give priority to GameBoy mode
  [39, 37, 38, 40, 88, 90, 16, 13], //Keyboard button map.
  true,               //Colorize GB mode?
  false,              //Disallow typed arrays?
  4,                  //Interval for the emulator loop.
  15,                  //Audio buffer minimum span amount over x interpreter iterations.
  30,                  //Audio buffer maximum span amount over x interpreter iterations.
  false,               //Override to allow for MBC1 instead of ROM only (compatibility for broken 3rd-party cartridges).
  false,               //Override MBC RAM disabling and always allow reading and writing to the banks.
  false,               //Use the GameBoy boot ROM instead of the GameBoy Color boot ROM.
  false,               //Scale the canvas in JS, or let the browser scale the canvas?
  0x10,                //Internal audio buffer pre-interpolation factor.
  1                    //Volume level set.
];

function start(canvas: GameBoyCanvas, ROM: string) {
  //deBugLog("This is start");
  clearLastEmulation();
  gameboy = new GameBoyCore(canvas, ROM);
  gameboy.openMBC = openSRAM;
  gameboy.openRTC = openRTC;
  gameboy.start();
  run();
}

function run() {
  //deBugLog('This is run')
  if (GameBoyEmulatorInitialized()) {
    if (!GameBoyEmulatorPlaying()) {
      gameboy!.stopEmulator &= 1;
      cout("Starting the iterator.", 0);
      let dateObj = new Date(); // The line is changed for benchmarking.
      gameboy!.firstIteration = dateObj.getTime();
      gameboy!.iterations = 0;
    }
    else {
      cout("The GameBoy core is already running.", 1);
    }
  }
  else {
    cout("GameBoy core cannot run while it has not been initialized.", 1);
  }
}

function pausePlay() {
  if (GameBoyEmulatorInitialized()) {
    if (GameBoyEmulatorPlaying()) {
      clearLastEmulation();
    }
    else {
      cout("GameBoy core has already been paused.", 1);
    }
  }
  else {
    cout("GameBoy core cannot be paused while it has not been initialized.", 1);
  }
}

function clearLastEmulation() {
  if (GameBoyEmulatorInitialized() && GameBoyEmulatorPlaying()) {
    gameboy!.stopEmulator |= 2;
    cout("The previous emulation has been cleared.", 0);
  }
  else {
    cout("No previous emulation was found to be cleared.", 0);
  }
}

function openSRAM(filename: string): number[] {
  return [];
}

function openRTC(filename: string): number[] {
  return [];
}

function GameBoyEmulatorInitialized() {
  return (typeof gameboy == "object" && gameboy != null);
}

function GameBoyEmulatorPlaying() {
  return ((gameboy!.stopEmulator & 2) == 0);
}

//The emulator will call this to sort out the canvas properties for (re)initialization.
function initNewCanvas() {
  if (GameBoyEmulatorInitialized()) {
    gameboy!.canvas!.width = gameboy!.canvas!.clientWidth;
    gameboy!.canvas!.height = gameboy!.canvas!.clientHeight;
  }
}

// Start of realtime.js file.
// ROM code from Public Domain LPC2000 Demo "realtime" by AGO.

let gameboy_rom = 'r+BPyZiEZwA+AeBPySAobeEq6gAgKlYj5WJv6SRmZjjhKuXqACDJ/////////////////////////////////xgHZwCYhGcA2fX6/3/1xdXlIRPKNgHN9f/h0cHx6gAg+hLKtyAC8cnwgLcoF/CC7hjgUT6Q4FOv4FLgVOCAPv/gVfHZ8IG3IALx2fBA7gjgQA8PD+YB7gHgT/CC4FHuEOCCPojgU6/gUuBU4IE+/uBV4ID6NMs86jTL8dkKCgoKbWFkZSBieSBhZ28uIGVtYWlsOmdvYnV6b3ZAeWFob28uY29tCnVybDogc3BlY2N5LmRhLnJ1CgoKCv///////wDDSgnO7WZmzA0ACwNzAIMADAANAAgRH4iJAA7czG7m3d3Zmbu7Z2NuDuzM3dyZn7u5Mz5BR08nUyBSRUFMVElNRSCAAAAAAgEDADMBSTQeIUD/y37I8P/1y4fg//BE/pEg+su+8eD/yT7A4EY+KD0g/cnF1eWvEQPK1RITEhMGAyEAyuXFTgYAIWAMCQkqEhMqEhPB4SMFIOrhrwYIzYsU4dHByf////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////8AAgMFBggJCwwOEBETFBYXGBobHR4fISIjJSYnKSorLC0uLzAxMjM0NTY3ODg5Ojo7PDw9PT4+Pj8/Pz9AQEBAQEBAQEBAPz8/Pz4+PT08PDs7Ojk5ODc2NTU0MzIxMC8uLCsqKSgmJSQjISAfHRwaGRcWFRMSEA8NCwoIBwUEAgH//fz6+ff29PPx8O7t6+ro5+Xk4uHg3t3c2tnY19bU09LR0M/OzczLysnJyMfGxsXFxMPDw8LCwcHBwcDAwMDAwMDAwMDBwcHBwsLDw8PExcXGxsfIycnKy8zNzs/Q0dLT1NXX2Nna3N3e4OHi5OXn6Onr7O7v8fL09vf5+vz9AAEECRAZJDFAUWR5kKnE4QAhRGmQueQRQHGk2RBJhMEAQYTJEFmk8UCR5DmQ6UShAGHEKZD5ZNFAsSSZEIkEgQCBBIkQmSSxQNFk+ZApxGEAoUTpkDnkkUDxpFkQyYRBAMGESRDZpHFAEeS5kGlEIQDhxKmQeWRRQDEkGRAJBAEAAQQJEBkkMUBRZHmQqcThACFEaZC55BFAcaTZEEmEwQBBhMkQWaTxQJHkOZDpRKEAYcQpkPlk0UCxJJkQiQSBAIEEiRCZJLFA0WT5kCnEYQChROmQOeSRQPGkWRDJhEEAwYRJENmkcUAR5LmQaUQhAOHEqZB5ZFFAMSQZEAkEAQAAAAAAAAAAAAAAAAAAAAABAQEBAQEBAgICAgIDAwMDBAQEBAUFBQUGBgYHBwcICAkJCQoKCgsLDAwNDQ4ODw8QEBEREhITExQUFRUWFxcYGRkaGhscHB0eHh8gISEiIyQkJSYnJygpKisrLC0uLzAxMTIzNDU2Nzg5Ojs8PT4/QEFCQ0RFRkdISUpLTE1OT1FSU1RVVldZWltcXV9gYWJkZWZnaWprbG5vcHJzdHZ3eXp7fX5/gYKEhYeIiouNjpCRk5SWl5manJ2foKKkpaepqqytr7GytLa3ubu9vsDCxMXHycvMztDS1NXX2dvd3+Hi5Obo6uzu8PL09vj6/P4A//z38Ofcz8CvnIdwVzwfAN+8l3BHHO/Aj1wn8Ld8PwC/fDfwp1wPwG8cx3AXvF8AnzzXcAecL8BP3Gfwd/x/AH/8d/Bn3E/AL5wHcNc8nwBfvBdwxxxvwA9cp/A3fL8AP3y38Cdcj8DvHEdwl7zfAB88V3CHnK/Az9zn8Pf8/wD//Pfw59zPwK+ch3BXPB8A37yXcEcc78CPXCfwt3w/AL98N/CnXA/AbxzHcBe8XwCfPNdwB5wvwE/cZ/B3/H8Af/x38GfcT8AvnAdw1zyfAF+8F3DHHG/AD1yn8Dd8vwA/fLfwJ1yPwO8cR3CXvN8AHzxXcIecr8DP3Ofw9/z/AP/////////////////////+/v7+/v79/f39/fz8/Pz8+/v7+vr6+vn5+fj4+Pf39/b29fX19PTz8/Ly8fHw8PDv7u7t7ezs6+vq6uno6Ofn5uXl5OPj4uHh4N/e3t3c3Nva2djY19bV1NTT0tHQz8/OzczLysnIx8bFxMPCwcDAvr28u7q5uLe2tbSzsrGwr62sq6qpqKalpKOioJ+enZyamZiWlZSTkZCPjYyLiYiHhYSCgYB+fXt6eHd1dHJxcG5sa2loZmVjYmBfXVtaWFdVU1JQTk1LSUhGREJBPz08Ojg2NDMxLy0rKigmJCIgHx0bGRcVExEPDQsJBwUDAf9/Px8PBwMBgEAgEAgEAgEAAQEBAQEBAQEBAQEA//////////////+AEAcAAQABAAEBAAEBAAEA/wD//wD//wD/AP+AKwcBAAEAAQD/AP8A/wD/AP8A/wABAAEAAQCARgcBAQEBAQD//////////////wABAQEBAQGAYQf///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////+AwODw+Pz+/xEAwAGxwj4E9cU+BfUKbwMKZ37+gCALI34LAiN+AwILGOsahhIDHBwcHPE9IN7BIRAAGVRdPgX1Cm8DCmcalhIjfAILfQIDAx0dHR3xPSDnIRgAGVRd8T0grskRAcAB6cI+BPUKbwMKZ37+gCALI34LAiN+AwILGOs+CvUahhIcHBwc8T0g9CN8Agt9AgMD8T0g0MkgIEZJTExFRCAgIFBPTFlHT05TIEhFTElDT1BURVJJTiBBQ1RJT04gIQDADgpwLHQsGhPWICI2ACwNIPE+oOoQyngBCQDlYmsJVF3hDMYKR3AsdCwaG9YgIjYALA0g8a/qEcrJ+hDK/jDI1gTqEMpHPqCQ/lA4Aj5QDgAM1ggw+3ghAcARBAB3xggZDSD5+hHKg+oRykf+UDgCPlAOAAzWCDD7eC4td9YIGQ0g+ckh9grzMf/PzVABr+Am4P/gD+BD4EL2SOBFPkDgQT4E4AfN9RM+CuoAAA4HeeBwJqCvIstsKPsNIPIh/v8yy30g+wEKABH1/yFpAc3kE+cCAVYAEQDBIVt2zeQTrwYYIWsOzYsUIYsOzaQUxwGwAxEAgCGhF8XlzeQT4cERAIjN5BMhAJgRAwABYMDHcc9yIwUg+BQdIPHN9RMhuxUGAc2WE82JEz5E4EGv4EU+A+D/+z4B6hLK4E0QAAB4zccTBSD6zZATxwEACFkhAIhzIwt4sSD5IQDHPv9FdyRwJCJ3JXclcCwg8x5/IQCYx3PPNgDL1DYIx3PLlCPLVCjuPoABDxARIAAhIpjF5XfL1HfLlDwZDSD1POEswQUg7D486jPLr+o0yz3qL8s+oOCCPgLqG8vNiRM+ROBBr+BFPgPg/68+ACEXyyI+CiI+IHev6h7L4ITgluodyz4B6h/L6g/D6g3KBlARnAjNxAjNcwsBLAHFzTsLzQAJwQt4sSDzzZATxwEACFkhAIhzIwt4sSD5zfUTeQYQIYMOzYsUPv/qKcsGgBGwCM3ECM2JEwEsAcXNbAzNAAnBC3ixIPOv6hLKzZATPpDgU/PHAbADEQCIIaEXzeQTzfUTIQIWBgHNlhPNiRM+ROBBr+BFPgPg//sY/j4D6gAgzcRGBgMhF8t+gCJ+gDwifoB3zckP+jDLb/oxy2fNtgs+AeCB8IG3IPv6Dcq3KAPNcwHJ+h3LBgARTg2Hb2AZKmZvTgkq4ItfKjzgjD1PKuCNe4eHg0cRAMUqEhwFIPp5h4eBRxEAxCoSHAUg+n3qMMt86jHLyfCL4I7wjOCP8I3gkBEAw9XlzcoQ4dHwpeaAEhwBAwAJ8JA94JAg6CEAxQYPKk+gXxq3IB95yzegXxq3IBYqT6BfGrcgD3nLN6BfGrcgBiwsLBhHLOXNyhDwlrcoKwYB8KXGP0/LfygBBcXwpMY/Vx4AzZMOe8H18KPGP1ceAM2TDsHhJCJwGAzhJPCjxj8i8KTGPyIsJRbDBg/wjj3gjsLiCz4C6gAgw1JhfBjcHwAL7mpIYL9vBgMhF8t+gCJ+gDwifoB3zckPIcsNEQDGzf4MI+U+A+oAICEgy83+DPocy9YIb+ocy82vYAYDESDLIWIOxeXVzcoQ4fCjxhQi8KQiNg8jVF3hIyMjwQUg5M3ERsE+AeoAIAr+/ygiEQDGbyYAKRnlAwoDbyYAKRleI1bhKmZvxc0xHMwAQMEY2T4B4IHwgbcg+8l+PMjl1c3KEAYB8KVPy38oAQXF8KTLf/UoAi88Vx4AzZMO8XsgAi88xn/B9fCjy3/1KAIvPFceAM2TDvF7KAIvPMZ/wdESE3gSE+EjIyMYsFANAgAIDAYCRCgoFANEKAAUE0QAABQSRAAoFAJVKCjsA1UoAOwTVQAA7BJVACjsAAAEBQAAAAEFAAEBAwIGAQEDBwYCAgAHAwICAAcEAwMBAgYDAwEFBgQEAAECBAQAAwIFBQQFBgUFBAcGMgAAzgAAADIAAM4AAAAyAADOKAAAHhEAChEAAAAACu8AHu8AFAAKFAD2FAAPCgAF6AAC4gAQ3gAQ4gD+CgD74g4C3Q4C4QAC4vIC3fIC4AAM4PsM4PsQ4/sJ3fsJ/wABAQICAwMEBAUFAAAGAQYCBgMGBAYFBgAHAQcCBwMHBAcFBwYICQoKCwsMDA0NDgoPDxAQEQoSEhMTERQVFRYVFxUYCBkIGggb/yAAD/AbD/DlD/9//3+XEQAAAGD/f5cRAAAYAP9/lxEAAIB8lxH/f/9/QHz/f18IAADLI8sSeC9HeS9PAyEAAH2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEn2Pb3yPZwk4BWd9kW+3yxPLEssoyxkJ0BPJ+hfLJgJvfuCcLzzgnn3GQG9+4Jvgn6/gmOCZ4JrgneChPkDgl/oYy29OfcZAb0bFeOCgeeCizdMQ8KPgpvCk4KnwpeCsr+Cg4KI+QOChzdMQ8KPgp/Ck4KrwpeCtwXkvPOCgr+CheOCizdMQ8KPgmfCk4JzwpeCf8Kbgl/Cp4JrwrOCd8KfgmPCq4JvwreCe+hnLJgJvTn3GQG9GxXjgoHkvPOChr+CizdMQ8KPgpvCk4KnwpeCswXngoHjgoa/gos3TEPCj4KfwpOCq8KXgra/goOChPkDgos3TEPCj4JnwpOCc8KXgn/Cm4JfwqeCa8KzgnfCn4JjwquCb8K3gnskq4KAq4KEq4KLwl1/woCYGV8t6ICDLe3soJy88X3qTMAIvPG96g1YlXiVvfiVuZxl8LzwYH3ovPFfLeyjhey88X5IwAi88b3qDViVeJW9+JW5nGXxH8Jhf8KEmBlfLeiAgy3t7KCcvPF96kzACLzxveoNWJV4lb34lbmcZfC88GB96LzxXy3so4XsvPF+SMAIvPG96g1YlXiVvfiVuZxl8T/CZX/CiJgZXy3ogIMt7eygnLzxfepMwAi88b3qDViVeJW9+JW5nGXwvPBgfei88V8t7KOF7LzxfkjACLzxveoNWJV4lb34lbmcZfICB4KPwml/woCYGV8t6ICDLe3soJy88X3qTMAIvPG96g1YlXiVvfiVuZxl8LzwYH3ovPFfLeyjhey88X5IwAi88b3qDViVeJW9+JW5nGXxH8Jtf8KEmBlfLeiAgy3t7KCcvPF96kzACLzxveoNWJV4lb34lbmcZfC88GB96LzxXy3so4XsvPF+SMAIvPG96g1YlXiVvfiVuZxl8T/CcX/CiJgZXy3ogIMt7eygnLzxfepMwAi88b3qDViVeJW9+JW5nGXwvPBgfei88V8t7KOF7LzxfkjACLzxveoNWJV4lb34lbmcZfICB4KTwnV/woCYGV8t6ICDLe3soJy88X3qTMAIvPG96g1YlXiVvfiVuZxl8LzwYH3ovPFfLeyjhey88X5IwAi88b3qDViVeJW9+JW5nGXxH8J5f8KEmBlfLeiAgy3t7KCcvPF96kzACLzxveoNWJV4lb34lbmcZfC88GB96LzxXy3so4XsvPF+SMAIvPG96g1YlXiVvfiVuZxl8T/CfX/CiJgZXy3ogIMt7eygnLzxfepMwAi88b3qDViVeJW9+JW5nGXwvPBgfei88V8t7KOF7LzxfkjACLzxveoNWJV4lb34lbmcZfICB4KXJ9T6D4EDxyfWv4EDxyfXF1eXHKv7/KFD+FiAaTiMqh4eHVF1vJgApKXgGmAlHelRne11vGNzGYBLPeBIcGNN2ACETyjQ1KPc1yfvFBmR2AAUg+8HJ+3YABSD7yfXF1eUqEhMLeLEg+OHRwfHJxeUBAKAhAMDNAxThwcnF5XEjBSD74cHJxdXlAQCAIZXKzQMU4dHBycXV5a/qFcuwIAwaEyIaEzIEDXjqFcvlxRq+EyAPIxq+IAkTIw0gCMHhGBkrGyMjBSDmecFPBBoTIhoTIiEVyzThDSDS+hXL4dHBydVfzXIUuzD60cnF9cH6FMrLD6mAR/CLkR+AR/AFqOoUysHJ9cXltxcXF/aA4Ggq4GkFIPo+5OBH4cHxyfXF5bcXFxf2gOBqKuBrBSD6PuTgSOBJ4cHxyT4Q4ADwAC/LN+bwRz4g4ADwAC/mD7DqFsvJzyEAgK8GIE8+CCINIPwFIPnHIQCABiBPIg0g/AUg+cnFzQMVSs0eFcHJxc0RFUjNGRVLzSMVwcnFBgHNKxXBycUGABj2xQYDGPHFBgLNKxXByfXlh4eAJsBvceHxyfXlh4cmwG9GI04jXiNW4fHJ9cXV5eCDKjzK8BPWIF/wg835FF95xghPezwY6PXF1eXF1c13FdHBex4FIS3LGNUBKssR8NjNlRURGPzNlRURnP/NlRUR9v/NlRUR//8+LzwZOPwCA3ovV3svXxMZyTAwRlBT/zAwUE5UU/8wMExJTkVT/xYFB1dFTENPTUUgVE8WBQgtUkVBTFRJTUUtFgAJREVNTyBNQURFIEVTUEVDSUFMTFkWAQpGT1IgTENQJzIwMDAgUEFSVFn/FgAAR1JFRVRJTlg6ICAgICAgICAgICAWAAFEU0MsUEFOLFNBQixGQVRBTElUWRYAAkpFRkYgRlJPSFdFSU4sSUNBUlVTFgADRE9YLFFVQU5HLEFCWVNTICAgICAWAAQgICAgICAgICAgICAgICAgICAgIBYABUNSRURJVFM6ICAgICAgICAgICAgFgAGQUxMIEdGWCZDT0RFIEJZIEFHTyAWAAdIRUxJQ09QVEVSIDNEIE1PREVMIBYACENSRUFURUQgQlkgQlVTWSAgICAgFgAJICAgICAgICAgICAgICAgICAgICAWAApVU0VEIFNPRlRXQVJFOiAgICAgIBYAC1JHQkRTLE5PJENBU0gsRkFSICAgFgAMICAgICAgICAgICAgICAgICAgICAWAA1DT05UQUNUOiAgICAgICAgICAgIBYADkdPQlVaT1ZAWUFIT08uQ09NICAgFgAPSFRUUDovL1NQRUNDWS5EQS5SVSAWABAgICAgICAgICAgICAgICAgICAgIBYAEVNFRSBZT1UgT04gR0JERVYyMDAw/wAAAAAAAAAAAAAAAAAAAAAICBwUHBQ4KDgoMDBwUCAgKCh8VHxUKCgAAAAAAAAAABQUPip/QT4qfFT+gnxUKCgICDw0fkL8rP6Cfmr8hHhYJCR+Wn5SPCR4SPyU/LRISBgYPCR+Wjwkflr8tH5KNDQQEDgocFAgIAAAAAAAAAAABAQOChwUOCg4KDgoHBQICBAQOCgcFBwUHBQ4KHBQICAAABQUPio8NH5CPCx8VCgoAAAICBwUPDR+QjwsOCgQEAAAAAAAAAAAEBA4KHBQcFAAAAAAAAB8fP6CfHwAAAAAAAAAAAAAAAAwMHhIeEgwMAQEDgoeEjwkeEjwkOCgQEAYGDwkflr+qv6q/LR4SDAwGBg8JHxUPDQ4KHxs/oJ8fBwcPiJ+Wjw0eEj8vP6CfHwcHD4iflo8NE5K/LR4SDAwJCR+Wn5afFT8tP6CfGwQEBwcPiJ8XPyEfnr8tHhIMDAYGDwkeFj8pP66/LR4SDAwPDx+Qv66XFQ4KHBQcFAgIBwcPiJ+Wjwkflr8tPiIcHAcHD4iflr+sn5KfHT4iHBwAAAAAAgIHBQICBAQOCgQEAAACAgcFAgIEBA4KDgocFAAAAAAHBQ4KHBQcFA4KAAAAAAAADw8fkJ8fPyEeHgAAAAAAAA4KBwUHBQ4KHBQAAAYGDwkflr8tHhoEBA4KBAQHBw+In5a/rL8pPi4+IhwcBwcPiJ+Wv66/oL+uvy0SEg4OHxEflr8pP6a/LT4iHBwHBw+In5a5qbgoP6y/IxwcDAweEh8VH5a7qr+uvyEeHgcHD4ifFx8RHhY/Lz+gnx8HBw+Inxc/IT4uOCg4KBAQBwcPiJ+Wvy8/qL+uvyEeHgkJH5a/rr+gv66/LT8tEhIPDx+QjwsOChwUHhY/IR4eDw8fkI+Og4KXFT8tHhIMDAkJH5afFR+Qv66/LT8tEhIICBwUHBQ4KDkpP66fEQ4OCgofFR+Qv6q/rr8tPy0SEgkJH5a/pr+qv6y7qr8tEhIHBw+In5a7qruqvy0+IhwcBwcPiJ+Wv66/IT4uOCgQEAcHD4iflr+uv6q/LT+inZ2HBw+In5a/LT4iPy0/LRISBwcPiJ8XP6Cfnr8tPiIcHB8fP6CfGw4KHBQcFBwUCAgJCR+Wn5a7qruqvy0eEgwMERE7qruqnxUfFR4SHBQICAkJH5aflr+uv6q/KR8VCgoJCR+WnxUOCg8JH5a/LRISCQkflr8tPy0eEhwUHBQICA8PH5C/LT46Dwsflr8hHh4HBw+IjwsOChwUHhYfEQ4OEBA4KDwkHhIPCQeEg4KBAQ4OHxEPDQcFDgoeGj4iHBwGBg8JH5a7qpERAAAAAAAAAAAAAAAAAAAAAB8fP6CfHx81rdPfJJne5X1MAIvPEevyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxnLEcsXlDABhMsRyxeUMAGEyxHLF5QwAYTLEcsXlDABhMsRyxeUMAGEyxHLF5QwAYTLEcsXlDABhMsRyxeUMAGEeRcvT/F5MAIvPIVvJrcBAAA+t7zLEbrLED6/vcsRu8sQPj+8P8sRuj/LEL0/yxG7P8sQeLHIeKHAebcgB3xiV31rX3jLH9L/HD5AlU97lW96lPUwAi88R6/LGTABgB/LGTABgB/LGTABgB/LGTABgB/LGTABgB/LGTABgB/LGTABgB/LGTABgB/LGcsRyxeVMAGFyxHLF5UwAYXLEcsXlTABhcsRyxeVMAGFyxHLF5UwAYXLEcsXlTABhcsRyxeVMAGFyxHLF5UwAYV5Fy9P8XkwAi88hGcuQMMxHMsf0pcdPkCUT3qUZ3uV9TACLzxHr8sZMAGAH8sZMAGAH8sZMAGAH8sZMAGAH8sZMAGAH8sZMAGAH8sZMAGAH8sZMAGAH8sZyxHLF5QwAYTLEcsXlDABhMsRyxeUMAGEyxHLF5QwAYTLEcsXlDABhMsRyxeUMAGEyxHLF5QwAYTLEcsXlDABhHkXL0/xeTACLzyFbyZAwzEcyx/SoRt91r9PfZNvepT1MAIvPEevyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxnLEcsXlTABhcsRyxeVMAGFyxHLF5UwAYXLEcsXlTABhcsRyxeVMAGFyxHLF5UwAYXLEcsXlTABhcsRyxeVMAGFeRcvT/F5MAIvPIRnLr/DMRz//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////3q8MAVUZ3tdb3u90pdAfZNPepRfkTA+V3nLPy88g+CDPn+R5YdPbyYARCkpKQkBkVIJweV41kAXb3nWQB8fH+YPZ/CChGd55gcGB/YITwpP8INHLMl5S1+RV3nLPy88g+CDPneR5YdPbyYARCkpKQkBklsJweV41kAXb3nWQB8fH+YPZ/CChGd55gcGB/YITwpP8INHLMmVT3qUX5EwPld5yz8vPIPggz5/keWHT28mAEQpKSkJAR9BCcHleNZAF2951kAfHx/mD2fwgoRneeYHBgf2CE8KT/CDRyzJeUtfkVd5yz8vPIPggz53keWHT28mAEQpKSkJASBKCcHleNZAF2951kAfHx/mD2fwgoRneeYHBgf2CE8KT/CDRyzJfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkfrF3e8t4IAN6LCyAR8sJMAEkyX6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALH6xInvLeCAGessJMAEkgEcALMl+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASV+sXd7y3ggA3osLIBHywEwASXJfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsfrF3e8t4IAZ6ywEwASWARywsyf///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////wHRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyLRe7o4A1pXewYHoE8K9XqgTwQK4JF6Hx8f5g9X8JNnTixGLXsfHx/mD1/wgoNne5LRxADB8JGiVy+mX3qhsyJ6L6ZfeqCzItF7ujgDWld7BgegTwr1eqBPBArgkXofHx/mD1fwk2dOLEYtex8fH+YPX/CCg2d7ktHEAMHwkaJXL6ZfeqGzInovpl96oLMi0Xu6OANaV3sGB6BPCvV6oE8ECuCReh8fH+YPV/CTZ04sRi17Hx8f5g9f8IKDZ3uS0cQAwfCRolcvpl96obMiei+mX3qgsyIxDsrh+eEWwxgNIf3Er+oLyuoMyiwsLPCPPcjgj14sGrcqKPDGeeCT+g3Ktygm+gvKPP4DIAI+AeoLyiAH+gzKPOoMyvoMyl8WyvCT1nkSe8bH4JMqTypHKuUmxl+Hh4M8PG8qX1Z5h4eBPDxveE4sh4eARjw8bypmb3y6OAViV31rX3y4OAVgR31pT3q4OAVQR3tZT3iU4JR8h+CV5dXFr+CSzUpifeCS0eHVzUpi0eE+AeCSzUpi8JRfPniTZy5Hr8sdMAGEH8sdMAGEH8sdMAGEH8sdMAGEH8sdMAGEH8sdMAGEH8sdMAGEH8sdMAGEH8sdxkBnCA7KMQDC5fCVb8l7vTBVfZNPepRfkTAkV3nLPy88Rz5/kU3Fh09vJgBEKSkJAfdiCcHlJsLwkm94BoDJeUtfkVd5yz8vPEc+d5FNxYdPbyYARCkpCQH4ZwnB5SbC8JJveAaAyZVPepRfkTAkV3nLPy88Rz5/kU3Fh09vJgBEKSkJAalsCcHlJsLwkm94BoDJeUtfkVd5yz8vPEc+d5FNxYdPbyYARCkpCQGqcQnB5SbC8JJveAaAyYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNg7gwBZOCcSwsDYO4MAWTgnEsLA2DuDAFk4JxLCwNyXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDXEsLIO4MAOTgg1xLCyDuDADk4INcSwsg7gwA5OCDcmDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDIO4MAWTgnEsLAyDuDAFk4JxLCwMg7gwBZOCcSwsDMlxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggxxLCyDuDADk4IMcSwsg7gwA5OCDHEsLIO4MAOTggzJxg+Hh+oawXovpl96obMiei+mX3qgszIkeRgAInAtJCJwLSQicC0kInAtJCJwLSQicC0kInAtJCJwLSQicC0kInAtJCJwLSQicC0kInAtJCJwLSQW/8n///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////+qqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVACEzDDPAABIAEjPAMwwAIQAhMwwzwAASABIzwDMMACEAITMMM8AAEgASM8AzDAAhACEzDDPAABIAEjPAMwwAIQAhMwwzwAASABIzwDMMACEAITMMM8AAEgASM8AzDAAhACEzDDPAABIAEjPAMwwAIQAhMwwzwAASABIzwDMMACEAITMMM8AAEgASM8AzDAAhACEzDDPAABIAEjPAMwwAIQAhMwwzwAASABIzwDMMACEAITMMM8AAEgASM8AzDAAhACEzDDPAABIAEjPAMwwAIQAhMwwzwAASABIzwDMMACEAITMMM8AAEgASM8AzDAAhACEzDDPAABIAEjPAMwwAIQj8GH4y/WT7wO+B50CzINkI/Bh+Mv1k+8DvgedAsyDZCPwYfjL9ZPvA74HnQLMg2Qj8GH4y/WT7wO+B50CzINkI/Bh+Mv1k+8DvgedAsyDZCPwYfjL9ZPvA74HnQLMg2Qj8GH4y/WT7wO+B50CzINkI/Bh+Mv1k+8DvgedAsyDZCPwYfjL9ZPvA74HnQLMg2Qj8GH4y/WT7wO+B50CzINkI/Bh+Mv1k+8DvgedAsyDZCPwYfjL9ZPvA74HnQLMg2Qj8GH4y/WT7wO+B50CzINkI/Bh+Mv1k+8DvgedAsyDZCPwYfjL9ZPvA74HnQLMg2Qj8GH4y/WT7wO+B50CzINnMzMzMMzMzM8zMzMwzMzMzzMzMzDMzMzPMzMzMMzMzM8zMzMwzMzMzzMzMzDMzMzPMzMzMMzMzM8zMzMwzMzMzzMzMzDMzMzPMzMzMMzMzM8zMzMwzMzMzzMzMzDMzMzPMzMzMMzMzM8zMzMwzMzMzzMzMzDMzMzPMzMzMMzMzM8zMzMwzMzMzzMzMzDMzMzPMzMzMMzMzM8zMzMwzMzMzzMzMzDMzMzPMzMzMMzMzM8zMzMwzMzMzzMzMzDMzMzPMzMzMMzMzM8zMzMwzMzMzzMzMzDMzMzPMzMzMMzMzM8zMzMwzMzMzzMzMzDMzMzPMzMzMMzMzM8zMzMwzMzMzwMDAwAwMDAzAwMDADAwMDMDAwMAMDAwMwMDAwAwMDAzAwMDADAwMDMDAwMAMDAwMwMDAwAwMDAzAwMDADAwMDMDAwMAMDAwMwMDAwAwMDAzAwMDADAwMDMDAwMAMDAwMwMDAwAwMDAzAwMDADAwMDMDAwMAMDAwMwMDAwAwMDAzAwMDADAwMDMDAwMAMDAwMwMDAwAwMDAzAwMDADAwMDMDAwMAMDAwMwMDAwAwMDAzAwMDADAwMDMDAwMAMDAwMwMDAwAwMDAzAwMDADAwMDMDAwMAMDAwMwMDAwAwMDAzAwMDADAwMDMDAwMAMDAwMwMDAwAwMDAzAwMDADAwMDPHxAQEBAQEBHx8QEBAQEBDx8QEBAQEBAR8fEBAQEBAQ8fEBAQEBAQEfHxAQEBAQEPHxAQEBAQEBHx8QEBAQEBDx8QEBAQEBAR8fEBAQEBAQ8fEBAQEBAQEfHxAQEBAQEPHxAQEBAQEBHx8QEBAQEBDx8QEBAQEBAR8fEBAQEBAQ8fEBAQEBAQEfHxAQEBAQEPHxAQEBAQEBHx8QEBAQEBDx8QEBAQEBAR8fEBAQEBAQ8fEBAQEBAQEfHxAQEBAQEPHxAQEBAQEBHx8QEBAQEBDx8QEBAQEBAR8fEBAQEBAQ8fEBAQEBAQEfHxAQEBAQEPHxAQEBAQEBHx8QEBAQEBCqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlVVqqpVVaqqVVWqqlUC4XIscAl7InAJInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJLCwly2XIJGjJycnJyeEicAlyLHAJeyJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSwsJctlyCRoycnJycnhInAJInAJcixwCXsicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAksLCXLZcgkaMnJycnJ4SJwCSJwCSJwCXIscAl7InAJInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJLCwly2XIJGjJycnJyeEicAkicAkicAkicAlyLHAJeyJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSwsJctlyCRoycnJycnhInAJInAJInAJInAJInAJcixwCXsicAkicAkicAkicAkicAkicAkicAkicAkicAkicAksLCXLZcgkaMnJycnJ4SJwCSJwCSJwCSJwCSJwCSJwCXIscAl7InAJInAJInAJInAJInAJInAJInAJInAJInAJLCwly2XIJGjJycnJyeEicAkicAkicAkicAkicAkicAkicAlyLHAJeyJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSwsJctlyCRoycnJycnhInAJInAJInAJInAJInAJInAJInAJInAJcixwCXsicAkicAkicAkicAkicAkicAkicAksLCXLZcgkaMnJycnJ4SJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCXIscAl7InAJInAJInAJInAJInAJInAJLCwly2XIJGjJycnJyeEicAkicAkicAkicAkicAkicAkicAkicAkicAkicAlyLHAJeyJwCSJwCSJwCSJwCSJwCSwsJctlyCRoycnJycnhInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJcixwCXsicAkicAkicAkicAksLCXLZcgkaMnJycnJ4SJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCXIscAl7InAJInAJInAJLCwly2XIJGjJycnJyeEicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAlyLHAJeyJwCSJwCSwsJctlyCRoycnJycnhInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJInAJcixwCXsicAksLCXLZcgkaMnJycnJ4SJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCSJwCXIscAl7LCwly2XIJGjJycnJydE+t5LI4IXmB8RSRPCFHx8focjlzTJE4XkicCwicCwicCwicCwicCwicCwicCwicCzJ+ABUXWhHeZAfyx1nATNZCfCCMQCv/qAoAzEAvwH/AOlHPgeQVF1HDjOvyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxkwAYAfyxlHIbRXCeViaz7/AQ8Ayfoay2/6G8uFZ/4UIAU+/y0YBtbsIAU8LOoby3zqGsvNr2AhlEbNyhDwpMagV/Cjxn9f1SGXRs3KEPCkxqBn8KPGf2/RzTEcKAsf2hhZH9oYWcPERny6OAViV31rX+XNmkbh1Xu90sxFe9ZA4Ih9k0884Il6lF/ghjzgij2RMGvgh3nLPy88g+CF8IIBDwBvVHzWQBfLN6GFZ3rmBxdvGAjwij3KAETgivCJX/CGV/CFGASCHSgLy38g+Ffwh4LghR3NYkUY2nvgifCIg1/l5gf2CG8mB1Z7aB8fHx/LHR/LHeYDxkBnrx7/6XnghpPgh3vLPy88geCF8IIBDwBvVHzWQBfLN6GFZ3rmBxdv8Ilf8IZX8IXLfyAHV/CHgh0YAYLghc1iRfCKPcoAROCKGN171kDgiHuVTzzgiXqUX+CGPOCKPZEwa+CHecs/LzyD4IXwggEPAG9UfNZAF8s3oYVneuYHF28YCPCKPcoAROCK8Ilf8IZX8IUYBIIdKAvLfyD4V/CHguCFHc0qRhjae+CJ8IiTX+XmB/YQbyYHVntoHx8fH8sdH8sd5gPGQGc+/1jpeeCGk+CHe8s/LzyB4IXwggEPAG9UfNZAF8s3oYVneuYHF2/wiV/whlfwhct/IAdX8IeCHRgBguCFzSpG8Io9ygBE4IoY3UYAALoAAHzWQMhPHx8f5h9HeeYHKAsE/gUwBvUhylblBT4PkCHJRoRn5fCCZ69vyfCCZ69vIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIiIsnxAQ8APcqEVz0odj0oOj0idwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwksLCXLZSgCJGgidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwksLCXLZSgCJGgidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwksLCXLZSgCJGgidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkidwkid8kicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAksLCUicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAksLCUicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAksLCUicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAksLCUicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAksLCUicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAksLCUicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAkicAloyfgAVF3wgjEAr/6gKAMxAL8B/wDFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcXFxcVia/nJJgJ+4JovPOCYfcZAb37gl+Cbr+CZ4JzgneCePkDgn8n/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Aw==';
// End of realtime.js file.

type TNextArray = Int8Array | Uint8Array | Int32Array | Float32Array;

class ArrayObject {
  array: TNextArray = new Int32Array()
}

function deBugLog(str: string) {
  let isLog = false;
  if (isLog) {
      print(str);
  }
}

declare interface ArkTools {
  timeInUs(args: number): number;
}

function gbemuRunIteration() {
  let start = ArkTools.timeInUs();
  setupGameboy();
  for (let i = 0; i < 120; ++i) {
    runGameboy();
  }
  tearDownGameboy();
  let end = ArkTools.timeInUs();
  print("gbemu: ms = " + String((end - start)/1000));
}

gbemuRunIteration();



