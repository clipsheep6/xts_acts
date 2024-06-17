import { printDir } from 'library'
export let systemApi;
let a = printDir(getContext());
if (a == getContext().filesDir) {
    systemApi = 'success';
    console.log('ModuleTest systemApi test success');
}