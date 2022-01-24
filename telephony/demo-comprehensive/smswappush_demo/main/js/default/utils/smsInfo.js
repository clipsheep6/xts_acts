  export const TYPE_MMS_SEND_REQ = 128;
  export const TYPE_MMS_SEND_CONF = 129;
  export const TYPE_MMS_NOTIFICATION_IND = 130;
  export const TYPE_MMS_RESP_IND = 131;
  export const TYPE_MMS_RETRIEVE_CONF = 132;
  export const TYPE_MMS_ACKNOWLEDGE_IND = 133
  export const TYPE_MMS_DELIVERY_IND = 134;
  export const TYPE_MMS_READ_REC_IND = 135;
  export const TYPE_MMS_READ_ORIG_IND = 136;

  export const MMS_CONTENT_TYPE_MESSAGE = 'application/vnd.wap.mms-message'
  export const MMS_CONTENT_TYPE_SLC = 'application/vnd.wap.slc'
  export const MMS_CONTENT_TYPE_SIC = 'application/vnd.wap.sic'

  export const MMS_TYPE_MESSAGE = 'WapPush'
  export const MMS_TYPE_SLC = 'WapPush SL'
  export const MMS_TYPE_SIC = 'WapPush SI'


  export const MessageType = {
    TYPE_MMS_SEND_REQ,
    TYPE_MMS_SEND_CONF,
    TYPE_MMS_NOTIFICATION_IND,
    TYPE_MMS_RESP_IND,
    TYPE_MMS_RETRIEVE_CONF,
    TYPE_MMS_ACKNOWLEDGE_IND,
    TYPE_MMS_DELIVERY_IND,
    TYPE_MMS_READ_REC_IND,
    TYPE_MMS_READ_ORIG_IND
  }

  export const MessageTypeTxt = {
    [MessageType.TYPE_MMS_SEND_REQ]: '发送请求',
    [MessageType.TYPE_MMS_SEND_CONF]: '发送确认',
    [MessageType.TYPE_MMS_NOTIFICATION_IND]: '通知发送',
    [MessageType.TYPE_MMS_RESP_IND]: '通知回应',
    [MessageType.TYPE_MMS_RETRIEVE_CONF]: '通知确认',
    [MessageType.TYPE_MMS_ACKNOWLEDGE_IND]: '接收通知',
    [MessageType.TYPE_MMS_DELIVERY_IND]: '状态回执',
    [MessageType.TYPE_MMS_READ_REC_IND]: '',
    [MessageType.TYPE_MMS_READ_ORIG_IND]: ''
  }

  export const MsgContentType = {
    MMS_CONTENT_TYPE_MESSAGE,
    MMS_CONTENT_TYPE_SLC,
    MMS_CONTENT_TYPE_SIC
  }

  export const MsgType = {
    [MsgContentType.MMS_CONTENT_TYPE_MESSAGE]: MMS_TYPE_MESSAGE,
    [MsgContentType.MMS_CONTENT_TYPE_SLC]: MMS_TYPE_SLC,
    [MsgContentType.MMS_CONTENT_TYPE_SIC]: MMS_TYPE_SIC,
  }
