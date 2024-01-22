export const add: (a: number, b: number) => number;
export const nativeWebInit: (webName: string) => void;
export const runJavaScript: (webName: string, jsCode: string) => void;
export const registerJavaScriptProxy: (webName: string) => string;