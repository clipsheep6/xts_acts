import router from '@system.router';

export default {
  data: {
    lists: [
      {icon: '/common/images/add_msg.png', title: '添加短信', uri: 'pages/add/add'},
      {icon: '/common/images/get_msg.png', title: '获取sim卡中的短信', uri: 'pages/simMsgList/simMsgList'},
      {icon: '/common/images/send_msg.png', title: '发送短信', uri: 'pages/send/index'},
      {icon: '/common/images/list_msg.png', title: '短信列表', uri: 'pages/msgList/msgList'},
    ]
  },
  gotoUrl(uri) {
    router.push({uri});
  }
}
