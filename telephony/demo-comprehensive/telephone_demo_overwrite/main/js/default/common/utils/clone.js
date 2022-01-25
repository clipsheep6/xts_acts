/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */




  

const mapTag = '[object Map]';
const setTag = '[object Set]';
const arrayTag = '[object Array]';
const objectTag = '[object Object]';
const argsTag = '[object Arguments]';
const boolTag = '[object Boolean]';
const dateTag = '[object Date]';
const numberTag = '[object Number]';
const stringTag = '[object String]';
const symbolTag = '[object Symbol]';
const errorTag = '[object Error]';
const regexpTag = '[object RegExp]';
const funcTag = '[object Function]';

const deepTag = [mapTag, setTag, arrayTag, objectTag, argsTag];


function forEach(array, iteratee) {
	let index = -1;
	const length = array.length;
	while (++index < length) {
		iteratee(array[index], index);
	}
	return array;
}

function isObject(target) {
	const type = typeof target;
	return target !== null && (type === 'object' || type === 'function');
}

function getType(target) {
	return Object.prototype.toString.call(target);
}

function getInit(target) {
	const Ctor = target.constructor;
	return new Ctor();
}

function cloneSymbol(targe) {
	return Object(Symbol.prototype.valueOf.call(targe));
}

function cloneReg(targe) {
	const reFlags = /\w*$/;
	const result = new targe.constructor(targe.source, reFlags.exec(targe));
	result.lastIndex = targe.lastIndex;
	return result;
}

function cloneFunction(func) {
	const bodyReg = /(?<={)(.|\n)+(?=})/m;
	const paramReg = /(?<=\().+(?=\)\s+{)/;
	const funcString = func.toString();
	if (func.prototype) {
		const param = paramReg.exec(funcString);
		const body = bodyReg.exec(funcString);
		if (body) {
			if (param) {
				const paramArr = param[0].split(',');
				return new Function(...paramArr, body[0]);
			} else {
				return new Function(body[0]);
			}
		} else {
			return null;
		}
	} else {
		return eval(funcString);
	}
}

function cloneOtherType(targe, type) {
	const Ctor = targe.constructor;
	switch (type) {
		case boolTag:
		case numberTag:
		case stringTag:
		case errorTag:
		case dateTag:
			return new Ctor(targe);
		case regexpTag:
			return cloneReg(targe);
		case symbolTag:
			return cloneSymbol(targe);
		case funcTag:
			return cloneFunction(targe);
		default:
			return null;
	}
}

function clone(target, map = new WeakMap()) {
	if (!isObject(target)) {
		return target;
	}

	const type = getType(target);
	let cloneTarget;
	if (deepTag.includes(type)) {
		cloneTarget = getInit(target, type);
	} else {
		return cloneOtherType(target, type);
	}

	if (map.get(target)) {
		return map.get(target);
	}
	map.set(target, cloneTarget);

	if (type === setTag) {
		target.forEach(value => {
			cloneTarget.add(clone(value, map));
		});
		return cloneTarget;
	}

	if (type === mapTag) {
		target.forEach((value, key) => {
			cloneTarget.set(key, clone(value, map));
		});
		return cloneTarget;
	}

	const keys = type === arrayTag ? undefined : Object.keys(target);
	forEach(keys || target, (value, key) => {
		if (keys) {
			key = value;
		}
		cloneTarget[key] = clone(target[key], map);
	});

	return cloneTarget;
}

export default clone;