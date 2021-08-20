import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import util from '@ohos.util'
describe('textEncoderTest', function () {
    it('encoding_test_001', 0, function () {
        var  that = new util.TextDecoder("utf-8",{ignoreBOM:true})
        var retStr = that.encoding
        expect(retStr).assertEqual("utf-8")
    }),

    // encoding test
    it('encoding_test_002', 0, function () {
        var that = new util.TextDecoder("utf-16le")
        var encodingStr = that.encoding
        expect(encodingStr).assertEqual("utf-16le")
    }),

    it('encoding_test_003', 0, function () {
        var that = new util.TextDecoder("utf-16be")
        var encodingStr = that.encoding
        expect(encodingStr).assertEqual('utf-16be')
    }),

    // fatal test
    it('fatal_test_001', 0, function () {
        var that = new util.TextDecoder("utf-16be",{fatal:true})
        var fatalStr = that.fatal
        expect(fatalStr).assertEqual(true)
    }),

    it('fatal_test_002', 0, function () {
        var that = new util.TextDecoder("utf-16be",{fatal:false})
        var fatalStr = that.fatal
        expect(fatalStr).assertEqual(false)
    }),

    it('fatal_test_003', 0, function () {
        var that = new util.TextDecoder("utf-16be")
        var fatalStr = that.fatal
        expect(fatalStr).assertEqual(false)
    }),

    it('fatal_test_004', 0, function () {
        var that = new util.TextDecoder("utf-8")
        var fatalStr = that.fatal
        expect(fatalStr).assertEqual(false)
    })
    ,
    //ignoreBOM test
    it('ignoreBOM_test_001', 0, function () {
        var that = new util.TextDecoder("utf-16be", {ignoreBOM:true})
        var ignoreBOMStr = that.ignoreBOM
        expect(ignoreBOMStr).assertEqual(true)
    }),

    it('ignoreBOM_test_002', 0, function () {
        var that = new util.TextDecoder("utf-16be", {ignoreBOM:false})
        var ignoreBOMStr = that.ignoreBOM
        expect(ignoreBOMStr).assertEqual(false)
    }),

    it('ignoreBOM_test_003', 0, function () {
        var that = new util.TextDecoder("utf-16be")
        var ignoreBOMStr = that.ignoreBOM
        expect(ignoreBOMStr).assertEqual(false)
    }),

    it('ignoreBOM_test_004', 0, function () {
        var that = new util.TextDecoder("utf-8")
        var ignoreBOMStr = that.ignoreBOM
        expect(ignoreBOMStr).assertEqual(false)
    }),

    it('decode_test_001', 0, function () {
        var that = new util.TextDecoder("utf-8");
        var arr = new Uint8Array(3);
        for (var i = 0; i < 3; i++) {
            arr[i] = 0x61 + i;
        }
        var retStr = that.decode(arr);
        var rel = "abc";
        expect(retStr).assertEqual(rel);
    }),

    it('decode_test_002', 0, function () {
        var that = new util.TextDecoder('utf-16le')
        var arr = new Uint8Array(6)
        arr[0] = 0x61;
        arr[1] = 0x00;
        arr[2] = 0x62;
        arr[3] = 0x00;
        arr[4] = 0x63;
        arr[5] = 0x00;
        var retStr = that.decode(arr)
        var rel = "abc"
        expect(retStr).assertEqual(rel)
    }),

    it('decode_test_003', 0, function () {
        var that = new util.TextDecoder("utf-16be");
        var arr = new Uint8Array(6);
        arr[0] = 0x00;
        arr[1] = 0x61;
        arr[2] = 0x00;
        arr[3] = 0x62;
        arr[4] = 0x00;
        arr[5] = 0x63;
        var retStr = that.decode(arr);
        var rel = "abc"
        expect(retStr).assertEqual(rel);
    }),

    it('decode_test_004', 0, function () {
        var that = new  util.TextDecoder('utf-8', {ignoreBOM:true})
        var arr = new Uint8Array(6)
        arr[0] = 0xEF;
        arr[1] = 0xBB;
        arr[2] = 0xBF;
        arr[3] = 0x61;
        arr[4] = 0x62;
        arr[5] = 0x63;
        var retStr = that.decode(arr, {stream:true})
        var BOM = "\uFEFF"
        var rel = "abc"
        var re = BOM + rel
        expect(retStr).assertEqual(re);
    }),

    it('decode_test_005', 0, function () {
        var that = new util.TextDecoder('utf-16le', {ignoreBOM:false})
        var arr = new Uint8Array(8)
        arr[0] = 0xFF;
        arr[1] = 0xFE;
        arr[2] = 0x61;
        arr[3] = 0x00;
        arr[4] = 0x62;
        arr[5] = 0x00
        arr[6] = 0x63;
        arr[7] = 0x00;
        var retStr = that.decode(arr, {stream:false})
        var BOM = "\uFEFF"
        var rel = "abc"
        var re = BOM + rel
        expect(retStr).assertEqual(re)
    }),

    // encode test
    it('test_get_encoding', 0, function () {
        var that = new util.TextEncoder()
        var str = that.encoding
        expect(str).assertEqual("utf-8")
    }),

    it('test_encode_01', 0, function () {
        var that = new util.TextEncoder()
        var buffer = new ArrayBuffer(20)
        var result = new Uint8Array(buffer)
        result = that.encode("\uD800¥¥")
        expect(result[0]).assertEqual(0xef)
        expect(result[2]).assertEqual(0xbd)
        expect(result[5]).assertEqual(0xc2)
    })
    it('test_encode_02', 0, function () {
        var that = new util.TextEncoder()
        var buffer = new ArrayBuffer(20)
        var result = new Uint8Array(buffer)
        result = that.encode("a\uD800¥¥")
        expect(result[0]).assertEqual(0x61)
        expect(result[2]).assertEqual(0xbf)
        expect(result[3]).assertEqual(0xbd)
    }),
    it('test_encode_03', 0, function () {
        var that = new util.TextEncoder()
        var buffer = new ArrayBuffer(20)
        var result = new Uint8Array(buffer)
        result = that.encode("abc\uD800¥¥")
        expect(result[1]).assertEqual(0x62)
        expect(result[3]).assertEqual(0xef)
        expect(result[6]).assertEqual(0xc2)
    }),

    it('test_encode_04', 0, function () {
        var that = new util.TextEncoder()
        var buffer = new ArrayBuffer(20)
        var result = new Uint8Array(buffer)
        result = that.encode("123\uD800¥¥")
        expect(result[0]).assertEqual(49)
        expect(result[5]).assertEqual(189)
        expect(result[9]).assertEqual(165)
    }),

    it('test_encodeInto_01', 0, function () {
        var that = new util.TextEncoder()
        var buffer = new ArrayBuffer(20)
        var dest = new Uint8Array(buffer, 0, 13)
        var result = new Uint32Array(20)
        result = that.encodeInto("\uD800A\uDF06A¥HiA", dest)
        expect(result.read).assertEqual(8)
        expect(result.written).assertEqual(13)
    }),

    it('test_encodeInto_02', 0, function () {
        var that = new util.TextEncoder()
        var buffer = new ArrayBuffer(6)
        var dest = new Uint8Array(buffer)
        var result = new Object()
        result = that.encodeInto("abc\u2603d", dest)
        expect(result.read).assertEqual(4)
        expect(result.written).assertEqual(6)
    }),

    it('test_encodeInto_03', 0, function () {
        var that = new util.TextEncoder()
        var buffer = new ArrayBuffer(4)
        var dest = new Uint8Array(buffer)
        var result = new Object()
        result = that.encodeInto("abcd", dest)
        expect(result.read).assertEqual(4)
        expect(result.written).assertEqual(4)
    }),

    it('test_encodeInto_04', 0, function () {
        var that = new util.TextEncoder()
        var buffer = new ArrayBuffer(4)
        var dest = new Uint8Array(buffer)
        var result = new Object()
        result = that.encodeInto("12345", dest)
        expect(result.read).assertEqual(4)
        expect(result.written).assertEqual(4)
    }),

    it('test_encodeInto_05', 0, function () {
        var that = new util.TextEncoder()
        var buffer = new ArrayBuffer(4)
        var dest = new Uint8Array(buffer)
        var result = new Object()
        result = that.encodeInto("123 4*!@#", dest)
        expect(result.read).assertEqual(4)
        expect(result.written).assertEqual(4)
    })
})