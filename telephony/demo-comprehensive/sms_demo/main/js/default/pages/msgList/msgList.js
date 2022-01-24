import router from '@system.router';
export default {
  data: {
  },
  onShow() {
    console.log('recevie show')
  },
  computed: {
    smsList () {
      console.log('smsList update')
      const list = this.$app.$def.data.smsList;
      console.log('list11:' + JSON.stringify(list));
      // test data
//      const list1 = [{visibleRawAddress: '13212345565', visibleMessageBody: '短信内容，你好',smsType:'CDMA'}, {visibleRawAddress: '13212345565', visibleMessageBody: '短信内容，短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好你好'}, {visibleRawAddress: '13212345565', visibleMessageBody: '短信内容，你好'}, {visibleRawAddress: '13212345565', visibleMessageBody: '短信内容，你好'}, {visibleRawAddress: '13212345565', visibleMessageBody: '短信内容，你好',smsType:'CDMA'}, {visibleRawAddress: '13212345565', visibleMessageBody: '短信内容，短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好你好',smsType:'CDMA'}]
//      const list = [{visibleRawAddress: '13212345565', visibleMessageBody: '短信内容，你好'}, {visibleRawAddress: '13212345565', visibleMessageBody: '短信内容，短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好短信内容，你好你好'}, {visibleRawAddress: '13212345565', visibleMessageBody: '短信内容，你好'}, {visibleRawAddress: '13212345565', visibleMessageBody: '短信内容，你好'}, {visibleRawAddress: '13212345565', visibleMessageBody: '短信内容，你好'}]
      return list || [];
    }
  }
}
