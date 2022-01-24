//检测数据类型
export function isObjectType(obj){
  if(Object.prototype.toString.call(obj) == "[object object]"){
    return true
  }else{
    return false
  }
}
export function isArrayType(arr){
  if(Array.isArray(arr)){
    return true
  }else{
    return false
  }
}