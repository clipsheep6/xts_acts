
import inputDevice from ' @ohos.multimodalInput.inputMonitor';
import {
  describe,
  beforeAll,
  beforeEach,
  afterEach,
  afterAll,
  it,
  expect
} from 'deccjsunit/index'

describe('MultimodalInput_test', function () {


    it("inputDevice::off-01", 0, function () {
       
        inputMonitor.on("touch",(event)=>{
            if(event){
                expect(true).assertTure();
            }else{
                expect(false).assertTrue();
            }
        })
        inputMonitor.off("touch")
    })

    it("inputDevice::off-01", 0, function () {
       
        inputMonitor.on("mouse",(event)=>{
            if(event){
                expect(true).assertTure();
            }else{
                expect(false).assertTrue();
            }
        })
        inputMonitor.off("touch")
    })

})