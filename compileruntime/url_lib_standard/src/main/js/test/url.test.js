/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License')
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/lite'
import  Url from '@ohos.url'
describe('Url_mxa_jk_Test', function () {

    it('Url_append_test_001', 0, function () {
        var that = new Url.URL('http://username:password@host:8080/directory/file?foo=1&bar=2');
        var params = new Url.URLSearchParams(that.search);
        params.append('ma','jk')
        var result = params.toString()
        console.log("---lxl---Url_append_test_01:"+ result)
        expect(result).assertEqual('foo=1&bar=2&ma=jk')
    })

    it('Url_append_test_002', 0, function () {
        let that = new Url.URL('https://example.com?foo=1&bar=2')
        let params = new Url.URLSearchParams(that.search)
        params.append("ma 大","jk￥")
        var result = params.toString()
        console.log("lxl...Url_append_test_02:"+ result)
        expect(result).assertEqual("foo=1&bar=2&ma+%E5%A4%A7=jk%EF%BF%A5")
    })
	
    it('Url_append_test_003', 0, function () {
        let that = new Url.URL('https://example.com?foo=1&bar=2')
        let params = new Url.URLSearchParams(that.search)
        params.append("foo~!@#$%^&*()_+-=","jk")
        var result = params.toString()
        console.log("lxl...Url_append_test_003:"+ result)
        expect(result).assertEqual("foo=1&bar=2&foo%7E%21%40%23%24%25%5E%26*%28%29_%2B-%3D=jk")
    })
	
    it('Url_append_test_004', 0, function () {
        let that = new Url.URL('https://example.com?foo=1&bar=2')
        let params = new Url.URLSearchParams(that.search)
        params.append("app","par")
        var result = params.toString()
        console.log("lxl...Url_append_test_004:"+ result)
        expect(result).assertEqual("foo=1&bar=2&app=par")
    })
	
    it('Url_append_test_005', 0, function () {
        let that = new Url.URL('https://example.com?foo=1&bar=2')
        let params = new Url.URLSearchParams(that.search)
        params.append("123","456")
        var result = params.toString()
        console.log("lxl...Url_append_test_005:"+ result)
        expect(result).assertEqual("foo=1&bar=2&123=456")
    })
	
    it('Url_delete_test_001', 0, function () {
        let that = new Url.URL('https://example.com?foo=1&bar=2')
        let params = new Url.URLSearchParams(that.search)
        params.delete("foo")
        var result = params.toString()
        console.log("lxl...Url_delete_test_001:"+ result)
        expect(result).assertEqual("bar=2")
    })
	
    it('Url_delete_test_002', 0, function () {
        let that = new Url.URL('https://example.com?foo大=1&bar=2');
        let params = new Url.URLSearchParams(that.search);
        params.delete('foo');
        var result = params.toString();
        console.log("lxl...Url_delete_test_002:"+ result);
        expect(result).assertEqual("foo%E5%A4%A7=1&bar=2");
    })
	
    it('Url_delete_test_003', 0, function () {
        let that = new Url.URL('https://example.com?foo大=1&bar=2');
        let params = new Url.URLSearchParams(that.search);
        params.delete("foo大");
        var result = params.toString();
        console.log("lxl...Url_delete_test_003:"+ result);
        expect(result).assertEqual("bar=2")
    })
	
    it('Url_delete_test_004', 0, function () {
        let that = new Url.URL('https://example.com?foo=1&bar=2');
        let params = new Url.URLSearchParams(that.search);
        params.delete('bar');
        var result = params.toString();
        console.log("lxl...Url_delete_test_004:"+ result);
        expect(result).assertEqual("foo=1");
    })
	
    it('Url_delete_test_005', 0, function () {
        let that = new Url.URL('https://example.com?foo=1&bar=2');
        let params = new Url.URLSearchParams(that.search);
        params.delete("faa");
        var result = params.toString();
        console.log("lxl...Url_delete_test_005:"+ result);
        expect(result).assertEqual("foo=1&bar=2")
    })
	
    it('Url_entries_test_001', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2");
        console.log("lxl...Url_entries_test_001:" );
        var i=0;
        var arr={};
        for(var pair of params.entries()) {
            arr[i]=pair[0];
            i++;
            arr[i]=pair[1];
            i++;
        };
        console.log("lxl...Url_entries_test_001:" + arr[1]);
        expect(arr[1]).assertEqual("value1");
    })
	
    it('Url_entries_test_002', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2")
        console.log("lxl...Url_entries_test_002:" );
        var i=0;
        var arr={};
        for(var pair of params.entries()) {
            arr[i]=pair[0];
            i++;
            arr[i]=pair[1];
            i++;
        }
        console.log("lxl...Url_entries_test_002:" + arr[2])
        expect(arr[2]).assertEqual("key2")
    })
	
    it('Url_entries_test_003', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2")
        console.log("lxl...Url_entries_test_003:" );
        params.append("foo","jk")
        var i=0;
        var arr={};
        for(var pair of params.entries()) {
            arr[i]=pair[0];
            i++;
            arr[i]=pair[1];
            i++;
        }
        console.log("lxl...Url_entries_test_003:" + arr[5])
        expect(arr[5]).assertEqual("jk")
    })
	
    it('Url_entries_test_004', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2")
        console.log("lxl...Url_entries_test_004:" );
        var i=0;
        var arr={};
        for(var pair of params.entries()) {
            arr[i]=pair[0];
            i++;
            arr[i]=pair[1];
            i++;
        }
        console.log("lxl...Url_entries_test_004:" + arr[3])
        expect(arr[3]).assertEqual("value2")
    })
	
    it('Url_entries_test_005', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2")
        console.log("lxl...Url_entries_test_005:" );
        params.append("jss","txt")
        var i=0;
        var arr={};
        for(var pair of params.entries()) {
            arr[i]=pair[0];
            i++;
            arr[i]=pair[1];
            i++;
        }
        console.log("lxl...Url_entries_test_005:" + arr[5])
        expect(arr[4]).assertEqual("jss")
    })
	
    it('Url_forEach_test_001', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2")
        var arr={};
        var i = 0;
        function func(value, key, SearchParams)
        {
            console.log(value, key, params === SearchParams)
            arr[i] = value + " " + key + " " + (params === SearchParams)
            i++
        };
        params.forEach(func);
        console.log("pss...Url_forEach_test_001:   "+ arr[0] );
        expect(arr[0]).assertEqual("value1 key1 true");
    })
	
    it('Url_forEach_test_002', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2");
        var arr={};
        var i = 0;
        function func(value, key, SearchParams)
        {
            console.log(value, key, params === SearchParams)
            arr[i] = value + " " + key + " " + (params === SearchParams)
            i++
        };
        params.forEach(func);
        console.log("pss...Url_forEach_test_002:   "+ arr[1]);
        expect(arr[1]).assertEqual("value2 key2 true");
    })
	
    it('Url_forEach_test_003', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2");
        params.append("foo","jk");
        var arr={};
        var i = 0;
        function func(value, key, SearchParams)
        {
            console.log(value, key, params === SearchParams)
            arr[i] = value + " " + key + " " + (params === SearchParams)
            i++
        };
        params.forEach(func);
        console.log("pss...Url_forEach_test_003:   "+ arr[2]);
        expect(arr[2]).assertEqual("jk foo true");
    })
	
    it('Url_forEach_test_004', 0, function () {
        let params = new Url.URLSearchParams("foo=bar&jss=txt");
        var arr={};
        var i = 0;
        function func(value, key, SearchParams)
        {
            arr[i] = value + " " + key + " " + (params === SearchParams)
            i++
        };
        params.forEach(func);
        console.log("pss...Url_forEach_test_004:   "+ arr[1]);
        expect(arr[1]).assertEqual("txt jss true");
    })
	
    it('Url_forEach_test_005', 0, function () {
        let params = new Url.URLSearchParams("foo=bar&jss=txt");
        params.append("foo","jk");
        var arr={};
        var i = 0;
        function func(value, key, SearchParams)
        {
            arr[i] = value + " " + key + " " + (params === SearchParams)
            i++
        };
        params.forEach(func);
        console.log("pss...Url_forEach_test_005:   "+ arr[0]);
        expect(arr[0]).assertEqual("bar foo true");
    })
	
    it('Url_get_test_001', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2")
        var result =  params.get("1")
        console.log("lxl...Url_get_test_001:   "+ result)
        expect(result).assertEqual(undefined)
    })
	
    it('Url_get_test_002', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2")
        var result =  params.get("key2")
        console.log("lxl...Url_get_test_002:   "+ result)
        expect(result).assertEqual("value2")
    })
	
    it('Url_get_test_003', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2")
        params.append("5","JKL")
        var result =  params.get("5")
        console.log("lxl...Url_get_test_003:   "+ result)
        expect(result).assertEqual("JKL")
    })
	
    it('Url_get_test_004', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2")
        var result =  params.get("key1")
        console.log("lxl...Url_get_test_004:   "+ result)
        expect(result).assertEqual("value1")
    })
	
    it('Url_get_test_005', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2")
        params.append("jss","JL")
        var result =  params.get("jss")
        console.log("lxl...Url_get_test_005:   "+ result)
        expect(result).assertEqual("JL")
    })
	
    it('Url_getAll_test_001', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2")
        params.append("key1","AAA")
        var result =  params.getAll("key1")
        console.log("lxl...Url_getAll_test_001:   "+ result)
        expect(result).assertEqual("value1,AAA")
    })
	
    it('Url_getAll_test_002', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&8=DEF")
        params.append("8","A8A")
        var result =  params.getAll("8")
        console.log("lxl...Url_getAll_test_002:   "+ result)
        expect(result).assertEqual("DEF,A8A")
    })
	
    it('Url_getAll_test_003', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2&key3=大")
        params.append("key3","A3A")
        var result =  params.getAll("key3")
        console.log("lxl...Url_getAll_test_003:   "+ result)
        expect(result).assertEqual("大,A3A")
    })
	
    it('Url_getAll_test_004', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2&key3=大")
        params.append("key3","A3A")
        var result =  params.getAll("key4")
        console.log("lxl...Url_getAll_test_004:   "+ result)
        expect(result).assertEqual('')
    })
	
    it('Url_getAll_test_005', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2&key3=大")
        params.append("key3","A3A")
        var result =  params.getAll("key2")
        console.log("lxl...Url_getAll_test_005:   "+ result)
        expect(result).assertEqual("value2")
    })
	
    it('Url_has_test_001', 0, function () {
        let params = new Url.URLSearchParams("key1=value1&key2=value2&key3=大")
        var result =  params.has("2")
        console.log("lxl...Url_has_test_001:   "+ result)
        expect(result).assertEqual(false)
    })
	
    it('Url_has_test_002', 0, function () {
        let params = new Url.URLSearchParams("小=value1&key2=value2&key3=大")
        var result =  params.has("小")
        console.log("lxl...Url_has_test_002:   "+ result)
        expect(result).assertEqual(true)
    })
	
    it('Url_has_test_003', 0, function () {
        let params = new Url.URLSearchParams("小=value1&￥=value2&key3=大")
        params.append("￥","ACA")
        var result =  params.has("￥")
        console.log("lxl...Url_has_test_003:   "+ result)
        expect(result).assertEqual(true)
    })
	
    it('Url_has_test_004', 0, function () {
        let params = new Url.URLSearchParams("小=value1&key2=value2&key3=大")
        var result =  params.has("无")
        console.log("lxl...Url_has_test_004:   "+ result)
        expect(result).assertEqual(false)
    })
	
    it('Url_has_test_005', 0, function () {
        let params = new Url.URLSearchParams("小=value1&￥=value2&key3=大")
        params.append("￥","ACA")
        var result =  params.has("￥11")
        console.log("lxl...Url_has_test_005:   "+ result)
        expect(result).assertEqual(false)
    })
	
    it('Url_keys_test_001', 0, function () {
        let params = new Url.URLSearchParams("小=value1&￥=value2&key3=大");
        var arr={};
        var i = 0;
        for(var key of params.keys()) {
            console.log("lxl..."+key)
            arr[i] = key
            i++
        };
        console.log("lxl...Url_keys_test_001:   "+ arr[0]);
        expect(arr[0]).assertEqual("小");
    })
	
    it('Url_keys_test_002', 0, function () {
        let params = new Url.URLSearchParams("小=value1&￥=value2&key3=大");
        var arr={};
        var i = 0;
        for(var key of params.keys()) {
            console.log("lxl..."+key)
            arr[i] = key
            i++
        };
        console.log("lxl...Url_keys_test_002:   "+ arr[1]);
        expect(arr[1]).assertEqual("￥");
    })
	
    it('Url_keys_test_003', 0, function () {
        let params = new Url.URLSearchParams("小=value1&￥=value2&key3=大");
        var arr={};
        var i = 0;
        for(var key of params.keys()) {
            console.log("lxl..."+key)
            arr[i] = key
            i++
        };
        console.log("lxl...Url_keys_test_003:   "+ arr[2]);
        expect(arr[2]).assertEqual("key3");
    })
	
    it('Url_keys_test_004', 0, function () {
        let params = new Url.URLSearchParams("小=value1&￥=value2&key3=大&key4=六");
        var arr={};
        var i = 0;
        for(var key of params.keys()) {
            console.log("lxl..."+key)
            arr[i] = key
            i++
        };
        console.log("lxl...Url_keys_test_004:   "+ arr[3]);
        expect(arr[3]).assertEqual("key4");
    })

    it('Url_keys_test_005', 0, function () {
        let params = new Url.URLSearchParams("小=value1&￥=value2&key3=大&key4=六&key5=发");
        var arr={};
        var i = 0;
        for(var key of params.keys()) {
            console.log("lxl..."+key)
            arr[i] = key
            i++
        };
        console.log("lxl...Url_keys_test_005:   "+ arr[4]);
        expect(arr[4]).assertEqual("key5");
    })
	
    it('Url_set_test_001', 0, function () {
        let params = new Url.URLSearchParams("1=value1&2=value2&key3=3");
        // params.append("11","ACA");
        params.set("11","CCC");
        var res = params.toString();
        console.log("lxl...Url_set_test_001:   "+ res);
        expect(res).assertEqual("1=value1&2=value2&key3=3&11=CCC");
    })
	
    it('Url_set_test_002', 0, function () {
        let params = new Url.URLSearchParams("1=value1&2=value2&key3=3");
        params.set('10','BBB');
        var res = params.toString();
        console.log("lxl...Url_set_test_002:   "+  res);
        expect(res).assertEqual("1=value1&2=value2&key3=3&10=BBB");
    })
	
    it('Url_set_test_003', 0, function () {
        let params = new Url.URLSearchParams("1=value1&2=value2&key3=3");
        params.set("ma 大" ,"10￥");
        var res = params.toString();
        console.log("lxl...Url_set_test_003:   "+  res);
        expect(res).assertEqual("1=value1&2=value2&key3=3&ma+%E5%A4%A7=10%EF%BF%A5");
    })
	
    it('Url_set_test_004', 0, function () {
        let params = new Url.URLSearchParams("1=value1&2=value2&key3=3");
        // params.append("1","ACA");
        params.set("1","CCC");
        var res = params.toString();
        console.log("lxl...Url_set_test_004:   "+ res);
        expect(res).assertEqual("1=CCC&2=value2&key3=3");
    })
	
    it('Url_set_test_005', 0, function () {
        let params = new Url.URLSearchParams("1=value1&2=value2&key3=3");
        params.set('12','BBB');
        var res = params.toString();
        console.log("lxl...Url_set_test_005:   "+  res);
        expect(res).assertEqual("1=value1&2=value2&key3=3&12=BBB");
    })
	
    it('Url_sort_test_001', 0, function () {
        let params = new Url.URLSearchParams("1=value1&3=value3&2=key2");
        params.sort();
        var res = params.toString();
        console.log("lxl...Url_sort_test_001:   "+  res);
        expect(res).assertEqual("1=value1&2=key2&3=value3");
    })
	
    it('Url_sort_test_002', 0, function () {
        let params = new Url.URLSearchParams("a=value1&c=value2&b=key2");
        params.sort();
        var res = params.toString();
        console.log("lxl...Url_sort_test_002:   "+  res);
        expect(res).assertEqual("a=value1&b=key2&c=value2");
    })
	
    it('Url_sort_test_003', 0, function () {
        let params = new Url.URLSearchParams("d=value1&c=value2&b=33");
        params.append("a","ACA");
        params.sort();
        var res = params.toString();
        console.log("lxl...Url_sort_test_003:   "+  res);
        expect(res).assertEqual("a=ACA&b=33&c=value2&d=value1");
    })
	
    it('Url_sort_test_004', 0, function () {
        let params = new Url.URLSearchParams("1=value1&3=value3&2=key2&4=key4");
        params.sort();
        var res = params.toString();
        console.log("lxl...Url_sort_test_004:   "+  res);
        expect(res).assertEqual("1=value1&2=key2&3=value3&4=key4");
    })
	
    it('Url_sort_test_005', 0, function () {
        let params = new Url.URLSearchParams("a=value1&c=value2&4=key4&b=key2");
        params.sort();
        var res = params.toString();
        console.log("lxl...Url_sort_test_005:   "+  res);
        expect(res).assertEqual("4=key4&a=value1&b=key2&c=value2");
    })
	
    it('Url_Values_test_001', 0, function () {
        let params = new Url.URLSearchParams("d=value1&c=value2&b=大")
        var arr={}
        var i = 0
        for(var value  of params.values()) {
            console.log("lxl..."+value )
            arr[i] = value
            i++
        }
        console.log("lxl...Url_Values_test_001:   "+ arr[0])
        expect(arr[0]).assertEqual("value1")
    })
	
    it('Url_Values_test_002', 0, function () {
        let params = new Url.URLSearchParams("d=value1&c=value2&b=大")
        var arr={}
        var i = 0
        for(var value  of params.values()) {
            console.log("lxl..."+value )
            arr[i] = value
            i++
        }
        console.log("lxl...Url_Values_test_002:   "+ arr[2])
        expect(arr[1]).assertEqual("value2")
    })
	
    it('Url_Values_test_003', 0, function () {
        let params = new Url.URLSearchParams("d=value1&c=value2&b=大")
        params.append("a","ACA")
        var arr={}
        var i = 0
        for(var value  of params.values()) {
            console.log("lxl..."+value )
            arr[i] = value
            i++
        }
        console.log("lxl...Url_Values_test_003:   "+ arr[3])
        expect(arr[3]).assertEqual("ACA")
    })
	
    it('Url_Values_test_004', 0, function () {
        let params = new Url.URLSearchParams("d=value1&c=value2&b=大&4=key4")
        var arr={}
        var i = 0
        for(var value  of params.values()) {
            console.log("lxl..."+value )
            arr[i] = value
            i++
        }
        console.log("lxl...Url_Values_test_004:   "+ arr[3])
        expect(arr[3]).assertEqual("key4")
    })
	
    it('Url_Values_test_005', 0, function () {
        let params = new Url.URLSearchParams("d=value1&c=value2&b=大&4=key4&5=key5")
        var arr={}
        var i = 0
        for(var value  of params.values()) {
            console.log("lxl..."+value )
            arr[i] = value
            i++
        }
        console.log("lxl...Url_Values_test_005:   "+ arr[4])
        expect(arr[4]).assertEqual("key5")
    })
	
    it('Url_toString_test_001', 0, function () {
        let params = new Url.URLSearchParams("d=value1&c=value2&b=大")
        var result= params.toString()
        console.log("lxl...Url_toString_test_001:   "+ result)
        expect(result).assertEqual("d=value1&c=value2&b=%E5%A4%A7")
    })
	
    it('Url_toString_test_002', 0, function () {
        let params = new Url.URLSearchParams("d=value1&c=value2&b= 大")
        params.append("1 12","QQQ")
        var result= params.toString()
        console.log("lxl...Url_toString_test_002:   "+ result)
        expect(result).assertEqual("d=value1&c=value2&b=+%E5%A4%A7&1+12=QQQ")
    })
	
    it('Url_toString_test_003', 0, function () {
        let params = new Url.URLSearchParams("￥=)")
        params.delete("5")
        var result= params.toString()
        console.log("lxl...Url_toString_test_003:   "+ result)
        expect(result).assertEqual("%EF%BF%A5=%29")
    })
	
    it('Url_toString_test_004', 0, function () {
        let params = new Url.URLSearchParams("d=value1&c=value2&b=大&4=key4")
        var result= params.toString()
        console.log("lxl...Url_toString_test_004:   "+ result)
        expect(result).assertEqual("d=value1&c=value2&b=%E5%A4%A7&4=key4")
    })
	
    it('Url_toString_test_005', 0, function () {
        let params = new Url.URLSearchParams("d=value1&c=value2&b= 大&4=key4&5=key5")
        params.append("1 12","QQQ")
        var result= params.toString()
        console.log("lxl...Url_toString_test_005:   "+ result)
        expect(result).assertEqual("d=value1&c=value2&b=+%E5%A4%A7&4=key4&5=key5&1+12=QQQ")
    })

    it('UrlSearchParams_construction_test_001', 0, function () {
        let params = new Url.URLSearchParams('?user=abc&query=xyz')
        var result= params.toString()
        console.log("lxl...zhangyouyou...Url_construction_test_001:   "+ result)
        expect(result).assertEqual("user=abc&query=xyz")
    })
	
    it('UrlSearchParams_construction_test_002', 0, function () {
        let params = new Url.URLSearchParams({
            user: 'abc',
            query: ['first', 'second']
        });
        var result= params.toString()
        console.log("lxl...zhangyouyou...Url_construction_test_002:   "+ result)
        expect(result).assertEqual("user=abc&query=first%2Csecond")
    })
	
    it('UrlSearchParams_construction_test_003', 0, function () {
        let params = new Url.URLSearchParams([
                ['user', 'abc'],
                ['query', 'first'],
                ['query', 'second'],
        ]);
        var result= params.toString()
        console.log("lxl...zhangyouyou...Url_construction_test_003:   "+ result)
        expect(result).assertEqual("user=abc&query=first&query=second")
    })
	
    it('UrlSearchParams_construction_test_004', 0, function () {
        const map = new Map();
        map.set('user', 'abc');
        map.set('query', 'xyz');
        let params = new Url.URLSearchParams(map)
        var result= params.toString()
        console.log("lxl...zhangyouyou...Url_construction_test_004:   "+ result)
        expect(result).assertEqual("user=abc&query=xyz")
    })
	
    it('UrlSearchParams_construction_test_005', 0, function () {
        function* getQueryPairs() {
            yield ['user', 'abc'];
            yield ['query', 'first'];
            yield ['query', 'second'];
        }
        let params = new Url.URLSearchParams(getQueryPairs());
        var result= params.toString()
        console.log("lxl...zhangyouyou...Url_construction_test_004:   "+ result)
        expect(result).assertEqual("user=abc&query=first&query=second")
    })
	
    it('UrlSearchParams_construction_test_006', 0, function () {
        let params = new Url.URLSearchParams()
        params.append('abcde','fghki')
        var paramsResult = params.toString()
        console.log( 'lxl Url_construction_test_006 = ' + paramsResult)
        expect(paramsResult).assertEqual('abcde=fghki')
    })
	
    it('UrlSearchParams_construction_test_007', 0, function () {
        let param
        let params = new Url.URLSearchParams(param)
        params.append('abcde','fghki')
        var paramsResult = params.toString()
        console.log( 'lxl Url_construction_test_007 = ' + paramsResult)
        expect(paramsResult).assertEqual('abcde=fghki')
    })

    it('Url_tostring_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        var result= params.toString()
        console.log("lxl...zhaoduwei...Url_tostring()_test_001:   "+ result)
        expect(result).assertEqual("http://username:password@host:8080/directory/file?query#fragment")
    })

    it('Url_tostring_test_002', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file')
        var result= params.toString()
        console.log("lxl...zhaoduwei...Url_tostring()_test_002:   "+ result)
        expect(result).assertEqual("http://username:password@host:8080/directory/file")
    })

    it('Url_tostring_test_003', 0, function () {
        let params = new Url.URL('http://username:password@host:8080#fragment')
        var result= params.toString()
        console.log("lxl...zhaoduwei...Url_tostring()_test_003:   "+ result)
        expect(result).assertEqual("http://username:password@host:8080/#fragment")
    })

    it('Url_tostring_test_004', 0, function () {
        let params = new Url.URL('http1://host/directory/file?query#fragment')
        var result= params.toString()
        console.log("lxl...zhaoduwei...Url_tostring()_test_004:   "+ result)
        expect(result).assertEqual("http1://host/directory/file?query#fragment")
    })

    it('Url_tostring_test_005', 0, function () {
        let params = new Url.URL('http:host:8080/directory/file?query#fragment')
        var result= params.toString()
        console.log("lxl...zhaoduwei...Url_tostring()_test_005:   "+ result)
        expect(result).assertEqual("http://host:8080/directory/file?query#fragment")
    })

    it('Url_href_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_href_test_001:   "+ result)
        expect(result).assertEqual("http://username:password@host:8080/directory/file?query#fragment")
    })

    it('Url_href_test_002', 0, function () {
        let params = new Url.URL('http://host:8080/directory/file?query#fragment')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_href_test_002:   "+ result)
        expect(result).assertEqual("http://host:8080/directory/file?query#fragment")
    })

    it('Url_href_test_003', 0, function () {
        let params = new Url.URL('http://username:password@host:8080')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_href_test_003:   "+ result)
        expect(result).assertEqual("http://username:password@host:8080/")
    })

    it('Url_href_test_004', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.href = 'http1://myhost/path?sss=1#ff';
        var result= params.href
        console.log("lxl...zhaoduwei...Url_href_test_004:   "+ result)
        expect(result).assertEqual("http1://myhost/path?sss=1#ff")
    })

    it('Url_href_test_005', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.href = 'http://myhost:99/path#ff';
        var result= params.href
        console.log("lxl...zhaoduwei...Url_href_test_005:   "+ result)
        expect(result).assertEqual("http://myhost:99/path#ff")
    })


    it('Url_origin_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        var result= params.origin
        console.log("lxl...zhaoduwei...Url_origin_test_001:   "+ result)
        expect(result).assertEqual('http://host:8080')
    })

    it('Url_origin_test_002', 0, function () {
        let params = new Url.URL('http://username:password@host:11/directory/file?query#fragment')
        var result= params.origin
        console.log("lxl...zhaoduwei...Url_origin_test_002:   "+ result)
        expect(result).assertEqual('http://host:11')
    })

    it('Url_origin_test_003', 0, function () {
        let params = new Url.URL('http://username:password@host/directory/file?query#fragment')
        var result= params.origin
        console.log("lxl...zhaoduwei...Url_origin_test_003:   "+ result)
        expect(result).assertEqual('http://host')
    })

    it('Url_origin_test_004', 0, function () {
        let params = new Url.URL('http://username:password@aaaasshost:212/directory/file?query#fragment')
        var result= params.origin
        console.log("lxl...zhaoduwei...Url_origin_test_004:   "+ result)
        expect(result).assertEqual('http://aaaasshost:212')
    })

    it('Url_origin_test_005', 0, function () {
        let params = new Url.URL('http://username:password@host22:100#fragment')
        var result= params.origin
        console.log("lxl...zhaoduwei...Url_origin_test_005:   "+ result)
        expect(result).assertEqual('http://host22:100')
    })

    it('Url_protocol_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        var result= params.protocol
        console.log("lxl...zhaoduwei...Url_protocol_test_001:   "+ result)
        expect(result).assertEqual('http:')
    })

    it('Url_protocol_test_002', 0, function () {
        let params = new Url.URL('http1://username:password@host:8080/directory/file?query#fragment')
        var result= params.protocol
        console.log("lxl...zhaoduwei...Url_protocol_test_002:   "+ result)
        expect(result).assertEqual('http1:')
    })

    it('Url_protocol_test_003', 0, function () {
        let params = new Url.URL('https://username:password@host:8080/directory/file?query#fragment')
        var result= params.protocol
        console.log("lxl...zhaoduwei...Url_protocol_test_003:   "+ result)
        expect(result).assertEqual('https:')
    })

    it('Url_protocol_test_004', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.protocol = 'https:';
        var result= params.protocol
        console.log("lxl...zhaoduwei...Url_protocol_test_004:   "+ result)
        expect(result).assertEqual('https:')
    })

    it('Url_protocol_test_005', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.protocol = 'ftp:';
        var result= params.protocol
        console.log("lxl...zhaoduwei...Url_protocol_test_005:   "+ result)
        expect(result).assertEqual('ftp:')
    })

    it('Url_username_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        var result= params.username
        console.log("lxl...zhaoduwei...Url_username_test_001:   "+ result)
        expect(result).assertEqual('username')
    })

    it('Url_username_test_002', 0, function () {
        let params = new Url.URL('http://zhao:password@host:8080/directory/file?query#fragment')
        var result= params.username
        console.log("lxl...zhaoduwei...Url_username_test_002:   "+ result)
        expect(result).assertEqual('zhao')
    })

    it('Url_username_test_003', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.username = 'skk'
        var result= params.username
        console.log("lxl...zhaoduwei...Url_username_test_003:   "+ result)
        expect(result).assertEqual('skk')
    })

    it('Url_username_test_004', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.username = 'skp111'
        var result= params.username
        console.log("lxl...zhaoduwei...Url_username_test_004:   "+ result)
        expect(result).assertEqual('skp111')
    })

    it('Url_username_test_005', 0, function () {
        let params = new Url.URL('http://usme@host:8080/directory/file?query#fragment')
        var result= params.username
        console.log("lxl...zhaoduwei...Url_username_test_005:   "+ result)
        expect(result).assertEqual('usme')
    })

    it('Url_password_test_001', 0, function () {
        let params = new Url.URL('http://username:11@host:8080/directory/file?query#fragment')
        var result= params.password
        console.log("lxl...zhaoduwei...Url_password_test_001:   "+ result)
        expect(result).assertEqual('11')
    })

    it('Url_password_test_002', 0, function () {
        let params = new Url.URL('http://username:23aa@host:8080/directory/file?query#fragment')
        var result= params.password
        console.log("lxl...zhaoduwei...Url_password_test_002:   "+ result)
        expect(result).assertEqual('23aa')
    })

    it('Url_password_test_003', 0, function () {
        let params = new Url.URL('http://username@host:8080/directory/file?query#fragment')
        var result= params.password
        console.log("lxl...zhaoduwei...Url_password_test_003:   "+ result)
        expect(result).assertEqual('')
    })

    it('Url_password_test_004', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.password = '1234'
        var result= params.password
        console.log("lxl...zhaoduwei...Url_password_test_004:   "+ result)
        expect(result).assertEqual('1234')
    })

    it('Url_password_test_005', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.password = '';
        var result= params.password
        console.log("lxl...zhaoduwei...Url_password_test_005:   "+ result)
        expect(result).assertEqual('')
    })

    it('Url_host_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        var result= params.host
        console.log("lxl...zhaoduwei...Url_host_test_001:   "+ result)
        expect(result).assertEqual('host:8080')
    })

    it('Url_host_test_002', 0, function () {
        let params = new Url.URL('http://username:password@hosthost/directory/file?query#fragment')
        var result= params.host
        console.log("lxl...zhaoduwei...Url_host_test_002:   "+ result)
        expect(result).assertEqual('hosthost')
    })

    it('Url_host_test_003', 0, function () {
        let params = new Url.URL('http://username:password@host:199/directory/file?query#fragment')
        var result= params.host
        console.log("lxl...zhaoduwei...Url_host_test_003:   "+ result)
        expect(result).assertEqual('host:199')
    })

    it('Url_host_test_004', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.host = 'jkjk'
        var result= params.host
        console.log("lxl...zhaoduwei...Url_host_test_004:   "+ result)
        expect(result).assertEqual('jkjk:8080')
    })

    it('Url_host_test_005', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.host = 'jkjk:100'
        var result= params.host
        console.log("lxl...zhaoduwei...Url_host_test_005:   "+ result)
        expect(result).assertEqual('jkjk:100')
    })

    it('Url_hostname_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        var result= params.hostname
        console.log("lxl...zhaoduwei...Url_hostname_test_001:   "+ result)
        expect(result).assertEqual('host')
    })

    it('Url_hostname_test_002', 0, function () {
        let params = new Url.URL('http://username:password@host123:8080/directory/file?query#fragment')
        var result= params.hostname
        console.log("lxl...zhaoduwei...Url_hostname_test_002:   "+ result)
        expect(result).assertEqual('host123')
    })

    it('Url_hostname_test_003', 0, function () {
        let params = new Url.URL('http://username:password@885ssa:8080/directory/file?query#fragment')
        var result= params.hostname
        console.log("lxl...zhaoduwei...Url_hostname_test_003:   "+ result)
        expect(result).assertEqual('885ssa')
    })

    it('Url_hostname_test_004', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.hostname = 'sksk'
        var result= params.hostname
        console.log("lxl...zhaoduwei...Url_hostname_test_004:   "+ result)
        expect(result).assertEqual('sksk')
    })

    it('Url_hostname_test_005', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.hostname = 'hosthost'
        var result= params.hostname
        console.log("lxl...zhaoduwei...Url_hostname_test_005:   "+ result)
        expect(result).assertEqual('hosthost')
    })

    it('Url_port_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        var result= params.port
        console.log("lxl...zhaoduwei...Url_port_test_001:   "+ result)
        expect(result).assertEqual('8080')
    })

    it('Url_port_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:100/directory/file?query#fragment')
        var result= params.port
        console.log("lxl...zhaoduwei...Url_port_test_001:   "+ result)
        expect(result).assertEqual('100')
    })

    it('Url_port_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host/directory/file?query#fragment')
        var result= params.port
        console.log("lxl...zhaoduwei...Url_port_test_001:   "+ result)
        expect(result).assertEqual('')
    })

    it('Url_port_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.port = '99'
        var result= params.port
        console.log("lxl...zhaoduwei...Url_port_test_001:   "+ result)
        expect(result).assertEqual('99')
    })

    it('Url_port_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.port = '123'
        var result= params.port
        console.log("lxl...zhaoduwei...Url_port_test_001:   "+ result)
        expect(result).assertEqual('123')
    })

    it('Url_pathname_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        var result= params.pathname
        console.log("lxl...zhaoduwei...Url_pathname_test_001:   "+ result)
        expect(result).assertEqual('/directory/file')
    })

    it('Url_pathname_test_002', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory?query#fragment')
        var result= params.pathname
        console.log("lxl...zhaoduwei...Url_pathname_test_002:   "+ result)
        expect(result).assertEqual('/directory')
    })

    it('Url_pathname_test_003', 0, function () {
        let params = new Url.URL('http://username:password@host:8080?query#fragment')
        var result= params.pathname
        console.log("lxl...zhaoduwei...Url_pathname_test_003:   "+ result)
        expect(result).assertEqual('/')
    })

    it('Url_pathname_test_004', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.pathname = 'path'
        var result= params.pathname
        console.log("lxl...zhaoduwei...Url_pathname_test_004:   "+ result)
        expect(result).assertEqual('/path')
    })

    it('Url_pathname_test_005', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query#fragment')
        params.pathname = '/directory/file11'
        var result= params.pathname
        console.log("lxl...zhaoduwei...Url_pathname_test_005:   "+ result)
        expect(result).assertEqual('/directory/file11')
    })

    it('Url_search_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query=qqqq#fragment')
        var result= params.search
        console.log("lxl...zhaoduwei...Url_search_test_001:   "+ result)
        expect(result).assertEqual('?query=qqqq')
    })

    it('Url_search_test_002', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query=qqqq&ll=pp#fragment')
        var result= params.search
        console.log("lxl...zhaoduwei...Url_search_test_002:   "+ result)
        expect(result).assertEqual('?query=qqqq&ll=pp')
    })

    it('Url_search_test_003', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?ppp9875=77#fragment')
        var result= params.search
        console.log("lxl...zhaoduwei...Url_search_test_003:   "+ result)
        expect(result).assertEqual('?ppp9875=77')
    })

    it('Url_search_test_004', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query=qqqq#fragment')
        params.search = 'kk=99'
        var result= params.search
        console.log("lxl...zhaoduwei...Url_search_test_004:   "+ result)
        expect(result).assertEqual('?kk=99')
    })

    it('Url_search_test_005', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query=qqqq#fragment')
        params.search = 'pppk=99'
        var result= params.search
        console.log("lxl...zhaoduwei...Url_search_test_005:   "+ result)
        expect(result).assertEqual('?pppk=99')
    })

    it('Url_hash_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query=pppppp#fragment')
        var result= params.hash
        console.log("lxl...zhaoduwei...Url_hash_test_001:   "+ result)
        expect(result).assertEqual('#fragment')
    })

    it('Url_hash_test_002', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query=pppppp#fragment')
        params.hash = '123456'
        var result= params.hash
        console.log("lxl...zhaoduwei...Url_hash_test_002:   "+ result)
        expect(result).assertEqual('#123456')
    })

    it('Url_hash_test_003', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query=pppppp#poiu')
        var result= params.hash
        console.log("lxl...zhaoduwei...Url_hash_test_003:   "+ result)
        expect(result).assertEqual('#poiu')
    })

    it('Url_hash_test_004', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query=pppppp')
        var result= params.hash
        console.log("lxl...zhaoduwei...Url_hash_test_004:   "+ result)
        expect(result).assertEqual('')
    })

    it('Url_hash_test_005', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query=pppppp#fragment')
        params.hash = 'qwer'
        var result= params.hash
        console.log("lxl...zhaoduwei...Url_hash_test_005:   "+ result)
        expect(result).assertEqual('#qwer')
    })

    it('Url_toJSON_test_001', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory/file?query=pppppp#qwer=da')
        var result= params.toJSON()
        console.log("lxl...zhaoduwei...set...Url_toJSON_test_001:   "+ result)
        expect(result).assertEqual('http://username:password@host:8080/directory/file?query=pppppp#qwer=da')
    })

    it('Url_toJSON_test_002', 0, function () {
        let params = new Url.URL('http://host:8080/directory/file?query=pppppp#qwer=da')
        var result= params.toJSON()
        console.log("lxl...zhaoduwei...set...Url_toJSON_test_002:   "+ result)
        expect(result).assertEqual('http://host:8080/directory/file?query=pppppp#qwer=da')
    })

    it('Url_toJSON_test_003', 0, function () {
        let params = new Url.URL('http://username:password@host:8080')
        var result= params.toJSON()
        console.log("lxl...zhaoduwei...set...Url_toJSON_test_003:   "+ result)
        expect(result).assertEqual('http://username:password@host:8080/')
    })

    it('Url_toJSON_test_004', 0, function () {
        let params = new Url.URL('http11://username:password@host:8080?query=pppppp#qwer=da')
        var result= params.toJSON()
        console.log("lxl...zhaoduwei...set...Url_toJSON_test_004:   "+ result)
        expect(result).assertEqual('http11://username:password@host:8080?query=pppppp#qwer=da')
    })

    it('Url_toJSON_test_005', 0, function () {
        let params = new Url.URL('http://username:password@host:8080/directory')
        var result= params.toJSON()
        console.log("lxl...zhaoduwei...set...Url_toJSON_test_005:   "+ result)
        expect(result).assertEqual('http://username:password@host:8080/directory')
    })

    it('Url_IPV6_test_001', 0, function () {
        let params = new Url.URL('http://[FEDC:BA98:7654:3210:FEDC:BA98:7654:3210]:80/index.html')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_IPV6_test_001:   "+ result)
        expect(result).assertEqual('http://[fedc:ba98:7654:3210:fedc:ba98:7654:3210]/index.html')
    })
    it('Url_IPV6_test_002', 0, function () {
        let params = new Url.URL('http://[1080:0:0:0:8:800:200C:417A]/index.html')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_IPV6_test_002:   "+ result)
        expect(result).assertEqual('http://[1080::8:800:200c:417a]/index.html')
    })
    it('Url_IPV6_test_003', 0, function () {
        let params = new Url.URL('http://[::FFFF:129.144.52.38]:80/index.html')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_IPV6_test_003:   "+ result)
        expect(result).assertEqual('http://[::ffff:8190:3426]/index.html')
    })

    it('Url_IPV4_test_001', 0, function () {
        let params = new Url.URL('http://0377.0xff.255.1:80/index.html')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_IPV4_test_001:   "+ result)
        expect(result).assertEqual('http://255.255.255.1/index.html')
    })
	
    it('Url_IPV4_test_002', 0, function () {
        let params = new Url.URL('http://0377.0xff.255.g/index.html')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_IPV4_test_002:   "+ result)
        expect(result).assertEqual('http://0377.0xff.255.g/index.html')
    })
	
    it('Url_IPV4_test_003', 0, function () {
        let params = new Url.URL('http://190.254.245.9:80/index.html')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_IPV4_test_003:   "+ result)
        expect(result).assertEqual('http://190.254.245.9/index.html')
    })

    it('Url_construction_test_001', 0, function () {
        let params = new Url.URL('https://developer.mozilla.org',)
        var result= params.href
        console.log("lxl...zhaoduwei...Url_base_test_001:   "+ result)
        expect(result).assertEqual('https://developer.mozilla.org/')
    })
	
    it('Url_construction_test_002', 0, function () {
        let params = new Url.URL('https://developer.mozilla.org','flie:/developer.mozilla.org')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_base_test_002:   "+ result)
        expect(result).assertEqual('https://developer.mozilla.org/')
    })
	
    it('Url_construction_test_003', 0, function () {
        let params = new Url.URL('https://developer.mozilla.org','ftp://www.example.com')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_base_test_003:   "+ result)
        expect(result).assertEqual('https://developer.mozilla.org/')
    })
	
    it('Url_construction_test_004', 0, function () {
        let params = new Url.URL(' ', 'http://www.example.com')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_base_test_004:   "+ result)
        expect(result).assertEqual('http://www.example.com/')
    })
	
    it('Url_construction_test_005', 0, function () {
        let params = new Url.URL('.', 'http://www.example.com')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_base_test_005:   "+ result)
        expect(result).assertEqual('http://www.example.com/')
    })
	
    it('Url_construction_test_006', 0, function () {
        let params = new Url.URL('../h:', 'http://www.example.com')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_base_test_006:   "+ result)
        expect(result).assertEqual('http://www.example.com/h:')
    })
	
    it('Url_construction_test_007', 0, function () {
        let params = new Url.URL('/sca/./path/path/../scasa/jjjjj', 'http://www.example.com')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_base_test_007:   "+ result)
        expect(result).assertEqual('http://www.example.com/sca/path/scasa/jjjjj')
    })

    it('Url_construction_test_009', 0, function () {
        let params = new Url.URL('/../sca/./path/path/../scasa/jjjjj', 'http://www.example.com')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_base_test_009:   "+ result)
        expect(result).assertEqual('http://www.example.com/sca/path/scasa/jjjjj')
    })
	
    it('Url_construction_test_010', 0, function () {
        let params = new Url.URL( '/../sca/./path/path/../scasa/jjjjj', 'file://www.example.com')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_base_test_010:   "+ result)
        expect(result).assertEqual('file://www.example.com/sca/path/scasa/jjjjj')
    })
	
    it('Url_construction_test_011', 0, function () {
        let params = new Url.URL('/../sca/./path/path/../scasa/jjjjj', 'file1://www.example.com')
        var result= params.href
        console.log("lxl...zhaoduwei...Url_base_test_011:   "+ result)
        expect(result).assertEqual('file1://www.example.com/sca/path/scasa/jjjjj')
    })
	
    it('Url_construction_test_012', 0, function () {
        let params = new Url.URL('htt1p://www.0902zy.cn/path?abc=123&def=456#yyyy')
        let params1 = new Url.URL('www.baidu.com/ssaa',params)
        var result = params1.href
        console.log( 'lxl Url_base_test_012 = ' + result);
        expect(result).assertEqual('htt1p://www.0902zy.cn/www.baidu.com/ssaa')
    })

    it('Url_construction_test_013', 0, function () {
        let params = new Url.URL('htt1p://www.0902zy.cn/path?abc=123&def=456#yyyy')
        let params1 = new Url.URL('//www.baidu.com/ssaa',params)
        var result = params1.href
        console.log( 'lxl Url_base_test_013 = ' + result);
        expect(result).assertEqual('htt1p://www.baidu.com/ssaa')
    })

    it('Url_construction_test_014', 0, function () {
        let params = new Url.URL('htt1p://www.0902zy.cn/path?abc=123&def=456#yyyy')
        let params1 = new Url.URL('',params)
        var result = params1.href
        console.log( 'lxl Url_base_test_013 = ' + result);
        expect(result).assertEqual('htt1p://www.0902zy.cn/path?abc=123&def=456#yyyy')
    })

    it('Url_construction_test_015', 0, function () {
        let params = new Url.URL('htt1p://www.0902zy.cn/path?abc=123&def=456#yyyy')
        var result = params.searchParams.toString();
        console.log( 'lxl Url_base_test_015 = ' + result);
        expect(result).assertEqual('abc=123&def=456')
    })
})