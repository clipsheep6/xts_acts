import {card,networkType,regStatus,nsaState} from '../../util/constEnumerate.js'
import radio from '@ohos.telephony.radio';
//·
export default {
  data: {
    signalType:0, //信号对应的网络类型 0未知 1GSM 2CDMA 3WCDMA 4TDSCDMA 5LTE 6NR
    signalLevel:0, //网络信号强度级别
    longOperatorName:'',//注册网络的长字母数字格式的运营商名称。
    shortOperatorName:'',//注册网络的短字母数字格式的运营商名称。
    plmnNumeric:'',//注册网络的PLMN代码。
    isRoaming:false, //设备是否正在漫游。
    regStatus:0, //设备的网络注册状态。
    nsaState:0, //设备的 NSA 网络注册状态
    isCaActive:false, //CA是否处于激活状态。
    isEmergency:false,//是否只允许此设备拨打紧急电话。
    handSearchResult:false, //获取手动搜网结果
    handSearchResultList:[] //手动搜网结果列表
  },
  onShow(){
    this.getNetworkSingle()
    this.getSingleMsg()
    this.getManualResult()
  },
  //获取信号信息
  getSingleMsg(){
    radio.getSignalInformation(card.MAJOR_CARD).then((data) => {
      console.log("data.getSignalInformation = " + data)
      this.signalType = this.dealNetworkType(data[0].signalType)
      this.signalLevel = data[0].signalLevel
    }).catch((error) => {
      console.log("error.data.getSignalInformation = " + error)
      this.signalType = 0
      this.signalLevel = 0
    });
  },
  //处理网络类型的函数
  dealNetworkType(number){
    if(typeof number ==  'Number'){
      return
    }
    switch(number){
      case networkType.NETWORK_TYPE_UNKNOWN :
        return 0
        break;
      case networkType.NETWORK_TYPE_GSM :
        return 1
        break;
      case networkType.NETWORK_TYPE_CDMA :
        return 2
        break;
      case networkType.NETWORK_TYPE_WCDMA :
        return 3
        break;
      case networkType.NETWORK_TYPE_TDSCDMA :
        return 4
        break;
      case networkType.NETWORK_TYPE_LTE :
        return 5
        break;
      case networkType.NETWORK_TYPE_NR :
        return 6
        break;
      default:
        return 0
    }
  },
  //获取网络信息
  getNetworkSingle(){
    radio.getNetworkState(card.MAJOR_CARD).then((res) => {
      console.log("getNetworkState res"+JSON.stringify(res))
      let data = res
      this.longOperatorName= data.longOperatorName
      this.shortOperatorName = data.shortOperatorName
      this.plmnNumeric = data.plmnNumeric
      this.isRoaming = this.isRoaming
      this.regStatus =  this.dealRegStatusFun(data.regStatus)
      this.nsaState =   this.dealNsaStateFun(data.nsaState)
      this.isCaActive =  data.isCaActive
      this.isEmergency =  data.isEmergency
    }).catch((error) => {
      this.longOperatorName= ''
      this.shortOperatorName = ''
      this.plmnNumeric = ''
      this.isRoaming = false
      this.regStatus =  0
      this.nsaState =   0
      this.isCaActive =  false
      this.isEmergency =  false
    });
  },
  //  处理regStatus的函数
  dealRegStatusFun(number){
    if(typeof number ==  'Number'){
      return
    }
    switch(number){
      case regStatus.REG_STATE_NO_SERVICE:
        return 0
        break;
      case regStatus.REG_STATE_IN_SERVICE:
        return 1
        break;
      case regStatus.REG_STATE_EMERGENCY_CALL_ONLY:
        return 2
        break;
      case regStatus.REG_STATE_POWER_OFF:
        return 3
        break;
      default:
        return 0
    }
  },
  //  处理
  dealNsaStateFun(number){
    if(typeof number ==  'Number'){
      return
    }
    switch(number){
      case nsaState.NSA_STATE_NOT_SUPPORT:
        return 1
        break;
      case nsaState.NSA_STATE_NO_DETECT:
        return 2
        break;
      case nsaState.NSA_STATE_CONNECTED_DETECT:
        return 3
        break;
      case nsaState.NSA_STATE_IDLE_DETECT:
        return 4
        break;
      case nsaState.NSA_STATE_DUAL_CONNECTED:
        return 5
        break;
      case nsaState.NSA_STATE_SA_ATTACHED:
        return 6
        break;
      default:
        return  0
    }
  },
//  获取手动搜网结果
  getManualResult(){
    radio.getNetworkSearchInformation(card.MAJOR_CARD,(err,data) => {
      if(err){
        console.log("data.getNetworkSearchInformation = "+ err);
        this.handSearchResult = false
        this.handSearchResultList = []
        return;
      }
      else{
        console.log("getManualResult data = "+ JSON.stringify(data));
        console.log("getManualResult data length = "+ data.networkSearchResult.length );
        this.handSearchResult = data.isNetworkSearchSuccess
        this.handSearchResultList = data.networkSearchResult
        console.log("data.isNetworkSearchSuccess"+data.isNetworkSearchSuccess)
        console.log("data.networkSearchResult"+JSON.stringify(data.networkSearchResult))
        console.log("this.handSearchResult"+this.handSearchResult)
        console.log("this.handSearchResultList"+this.handSearchResultList)
      }
    });
  },
  onDestroy(){
    this.simStatusNum = 0
    this.signalType = 0
    this.signalLevel = 0
    this.longOperatorName = ''
    this.shortOperatorName = ''
    this.plmnNumeric = ''
    this.isRoaming = false
    this.regStatus = 0
    this.nsaState = 0
    this.isCaActive = false
    this.isEmergency = false
  }
}
