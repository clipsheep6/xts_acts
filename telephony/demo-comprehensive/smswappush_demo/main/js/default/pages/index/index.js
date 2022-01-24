export default {
  data: {
    timestemp: '',
    smsList: []
  },
  onShow() {
    console.log('recevie show');
    this.timestemp = new Date().getTime();
    this.smsList = this.$app.$def.data.smsList;
  },
  computed: {
//    smsList2 () {
//      console.log('smsList update')
//      const list = this.$app.$def.data.smsList;
//      console.log('list11:' + JSON.stringify(list));
      // test data
//      const data = {
//        "messageType": 130,
//        "mmsType": {
//          "transactionId": "##3xcH40UIy2",
//          "messageClass": 128,
//          "messageSize": 20480,
//          "expiry": 1640897056,
//          "version": 16,
//          "from": {
//          "address": "16620807672/TYPE=PLMN",
//          "charset": 106
//          },
//          "subject": "",
//          "deliveryReport": 0,
//          "contentLocation": "http://120.198.247.46:80/Za0GeW2",
//          "contentClass": 0
//          },
//        "attachment": [{
//                         "path": "",
//                         "contentId": "<picture.gif>",
//                         "contentLocation": "picture.gif",
//                         "contentDisposition": "picture.gif",
//                         "contentTransferEncoding": "",
//                         "contentType": "image/gif",
//                         "isSmil": false,
//                         "charset": 0
//                       }, {
//                         "path": "",
//                         "contentId": "<content.text>",
//                         "contentLocation": "content.text",
//                         "contentDisposition": "content.text",
//                         "contentTransferEncoding": "",
//                         "contentType": "text/plain",
//                         "isSmil": false,
//                         "charset": 0
//                       }, {
//                         "path": "",
//                         "contentId": "<0000>",
//                         "contentLocation": "618C0A89.smil",
//                         "contentDisposition": "618C0A89.smil",
//                         "contentTransferEncoding": "",
//                         "contentType": "application/smil",
//                         "isSmil": true,
//                         "charset": 0
//                       }]
//        }
//      const list = [{messageType: data.messageType, mmsType: JSON.stringify(data.mmsType, null, '\n'), attachment: JSON.stringify(data.attachment, null, '\n')}, {messageType: data.messageType, mmsType: JSON.stringify(data.mmsType, null, '\n'), attachment: JSON.stringify(data.attachment, null, '\n')}]
//      return list || [];
//    }
  }
}
