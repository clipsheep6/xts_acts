import { getDecoratorDesc } from "har1";
export let harImportLibrary;

let a = getDecoratorDesc();
if (a == "<From har>This is library") {
    harImportLibrary = "success";
    console.log('ModuleTest harImportLibrary test success'); 
}