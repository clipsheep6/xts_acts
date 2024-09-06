export const Test_AVPlayer_SetMediaKeySystemInfoCallback: (handle:string, callback:string) => number;
export const Test_AVPlayer_GetMediaKeySystemInfo: (handle:string, callback:string) => number;
export const Test_AVPlayer_SetDecryptionConfig: () => number;
export const Test_AudioCodec_SetDecryptionConfig: (a: string, b: string, c:number) => number;
export const Test_VideoDecoder_SetDecryptionConfig: (a: string, b: string, c:number) => number;
export const TestAVDemuxer_SetMediaKeySystemInfoCallback: (a: string, b: string) => number;
export const TestAVDemuxer_SetDemuxerMediaKeySystemInfoCallback: (a: string, b: string) => number;
export const TestAVDemuxer_GetMediaKeySystemInfo: (a: string, b: string) => number;