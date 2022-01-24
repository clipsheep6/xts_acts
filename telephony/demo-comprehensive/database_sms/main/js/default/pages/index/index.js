import prompt from '@system.prompt';
import featureAbility from '@ohos.ability.featureAbility';
import ohosDataAbility from '@ohos.data.dataability';
const URI_MESSAGE_LOG = "dataability:///com.ohos.smsmmsability";
// JS公共常量

let message_info = {
    msg_id:'msg_id',
    receiver_number:'receiver_number',
    sender_number:'sender_number',
    start_time:'start_time',
    end_time:'end_time',
    msg_type:'msg_type',//sms = 0,mms,
    sms_type:'sms_type',//0-普通，1-通知
    msg_title:'msg_title',
    msg_content:'msg_content',
    msg_state:'msg_state',//消息状态
    operator_service_number:'operator_service_number',
    msg_code:'msg_code',
    is_lock:'is_lock',
    is_read:'is_read',
    is_collect:'is_collect',
    session_type:'session_type',//0 - 普通  1 - 广播 2 - 群发
    retry_number:'retry_number',//重发次数
    is_subsection:'is_subsection',
    session_id:'session_id',
    group_id:'group_id',
    //        mms_protocol_id:'mms_protocol_id',
    is_sender:'is_sender',
}
export default {
    data: {
        lists: []
    },
    getAllMsg() {
        this.queryMessageDetail();
    },
    addMsg() {
        this.insertMessageDetail();
    },
    deleteItem(id) {
        const actionData = {
            msgIds: [id]
        }
        this.deleteMessageByIds(actionData);
    },
    modifyItem(value) {
        const hasLock = value.isLock == 0 ? 1: 0;
        const actionData = {
            msgIds: [value.msgId],
            hasLock: hasLock
        }
        this.updateLock(actionData)
    },
    updateItem(value){
        console.log(value)
        const hasCollect = value.isCollect == 0 ? 1: 0;
        const msgIds = value.msgId
        const actionsData = {
            msgIds: [msgIds],
            hasCollect: hasCollect
        }
        this.updateCollect(actionsData)
    },
    async queryMessageDetail(actionData, callback) {
        console.log('queryMessageDetail param:' + JSON.stringify(actionData));
        try {
            var dataAbilityHelper = await featureAbility.getDataAbilityHelper(
                URI_MESSAGE_LOG
            );
            console.log('dataAbilityHelper create: ' + JSON.stringify(dataAbilityHelper));
            //返回的数据集字段
            var resultColumns = [
                message_info.msg_id,
                message_info.receiver_number,
                message_info.sender_number,
                message_info.start_time,
                message_info.end_time,
                message_info.msg_type, //sms = 0,mms,
                message_info.sms_type, //0-普通，1-通知
                message_info.msg_title,
                message_info.msg_content,
                message_info.msg_state, //消息状态
                message_info.operator_service_number,
                message_info.msg_code,
                message_info.is_lock,
                message_info.is_read,
                message_info.is_collect,
                message_info.session_type, //0 - 普通  1 - 广播 2 - 群发
                message_info.retry_number, //重发次数
                message_info.is_subsection,
                message_info.session_id,
                message_info.group_id,
                //            message_info.mms_protocol_id,
                message_info.is_sender,
            ];
            //根据thradId获取短信详情
            //查询条件
            let condition = new ohosDataAbility.DataAbilityPredicates();
            //        condition.equalTo(message_info.session_id, actionData.sessionId);
            let managerUri = URI_MESSAGE_LOG + '/sms_mms/sms_mms_info';
            dataAbilityHelper.query(managerUri, resultColumns, condition).then(resultSet => {
                prompt.showToast({message: '查询成功'});
                let resultList = [];
                while (resultSet.goToNextRow()) {
                    let result = {};
                    result.msgId = resultSet.getString(0);
                    result.receiverNumber = resultSet.getString(1);
                    result.senderNumber = resultSet.getString(2);
                    result.startTime = resultSet.getString(3);
                    result.endTime = resultSet.getString(4);
                    result.msgType = resultSet.getString(5);
                    result.smsType = resultSet.getString(6);
                    result.msgTitle = resultSet.getString(7);
                    result.msgContent = resultSet.getString(8);
                    result.msgState = resultSet.getString(9);
                    result.operatorServiceNumber = resultSet.getString(10);
                    result.msgCode = resultSet.getString(11);
                    result.isLock = resultSet.getString(12);
                    result.isRead = resultSet.getString(13);
                    result.isCollect = resultSet.getString(14);
                    result.sessionType = resultSet.getString(15);
                    result.retrNumber = resultSet.getString(16);
                    result.isSubsection = resultSet.getString(17);
                    result.sessionId = resultSet.getString(18);
                    result.groupId = resultSet.getString(19);
                    //              result.mmsProtocolId = resultSet.getString(20);
                    result.isSender = resultSet.getString(20);
                    console.log('queryMessageDetail result:' + JSON.stringify(result));
                    resultList.push(result);
                }
                this.lists = resultList;
                console.log('resultList: '+ JSON.stringify(resultList));
            }).catch(error => {
                prompt.showToast({message: '查询失败'});
                console.log('queryMessageDetail error:' + error);
            });
        } catch(ex) {
            prompt.showToast({message: '查询失败'});
            console.log('add msg ex: ' + ex);
        }

    },
    async insertMessageDetail(actionData, callback) {
        /* 获取DataAbilityHelper对象 */
        var dataAbilityHelper = await featureAbility.getDataAbilityHelper(
            URI_MESSAGE_LOG
        );
        console.log('dataAbilityHelper 22' + JSON.stringify(dataAbilityHelper));
        var stringValue = {
            "receiver_number": '1889',
            "sender_number": '1889',
            "start_time": 1221,
            "end_time": 1221,
            "msg_type": "0",
            "sms_type": 0,
            "msg_title": 'sasa',
            "msg_content": 'asa',
            "msg_state": 0,
            "operator_service_number": '',
            "msg_code": '',
            "session_id": 1,
            "is_lock": "0",
            "is_read": 1, //会话列表- 1  在详情页接收0
            "is_collect": "0",
            "session_type": 1,
            "is_subsection": "0",
            "is_sender": 1,
            "group_id": 1
        };
        /* Promise 形式调用 */
        let managerUri = URI_MESSAGE_LOG + '/sms_mms/sms_mms_info';
        dataAbilityHelper.insert(managerUri, stringValue).then(data => {
            console.log('insertMessageDetail, success:' + data);
            if(data){
                prompt.showToast({message: '添加成功'});
            }
            else{
                prompt.showToast({message: '添加失败'});
            }
        }).catch(error => {
            console.log('insertMessageDetail fail:' + error);
            prompt.showToast({message: '添加失败' + error});
        });
    },
    async updateLock(actionData, callback) {
        console.log('updateLock , actionData = ' + JSON.stringify(actionData));
        //锁定信息
        var dataAbilityHelper = await featureAbility.getDataAbilityHelper(
            URI_MESSAGE_LOG
        );
        //删除短信根据group_ids删除
        var msgIds = actionData.msgIds;
        var condition = new ohosDataAbility.DataAbilityPredicates();
//        condition.in(message_info.group_id, actionData.groupIds);
        condition.in(message_info.msg_id, msgIds);
        var stringValue = {
            "is_lock": actionData.hasLock,
        };
        let managerUri = URI_MESSAGE_LOG + '/sms_mms/sms_mms_info';
        dataAbilityHelper.update(managerUri, stringValue, condition).then((data) => {
            console.log('updateLock success! data = ' + JSON.stringify(data));
            let code = JSON.stringify(data)
            if(code){
                prompt.showToast({message: '更新成功'});
            }else{
                prompt.showToast({message: '更新失败'});
            }
        }).catch((err) => {
            console.log('updateLock err = ' + err);
            console.log( 'updateLock err = ' + JSON.stringify(err));
            prompt.showToast({message: '更新失败' + err});
        });
    },
    deleteMessageByIds(actionData) {
        console.log('deleteMessage, actionData :' + JSON.stringify(actionData));
        prompt.showDialog({
            title: '删除',
            message: '您确定删除这条数据',
            buttons: [
                {
                    text: '取消',
                    color: '#FF0000',
                },
                {
                    text: '确定',
                    color: '#0033CC',
                },
            ],
            success: function(data) {
                console.log('dialog success callback，click button : ' + data.index);
                let index = data.index
                if(!index){
                    console.log("取消")
                }else{
                    this.deleteInter(actionData)
                }
            },
            cancel: function() {
                console.log('dialog cancel callback');
            },
        });
    },
//    接口参数
    async deleteInter(actionData){
        var dataAbilityHelper = await featureAbility.getDataAbilityHelper(
            URI_MESSAGE_LOG
        );
        //删除短信根据msg_ids删除
        var msgIds = actionData.msgIds;
        var condition = new ohosDataAbility.DataAbilityPredicates();
        condition.in(message_info.msg_id, msgIds);
        let managerUri = URI_MESSAGE_LOG + '/sms_mms/sms_mms_info';
        dataAbilityHelper.delete(managerUri, condition).then((data)=>{
            console.log('deleteMessageByIds success! data = ' + JSON.stringify(data));
            let code = JSON.stringify(data)
            console.log("deleteMessageByIds-code"+typeof code)
            if(code){
                prompt.showToast({message: '删除成功'});
            }else{
                prompt.showToast({message: '删除失败'});
            }
        }).catch((err)=>{
            console.log('deleteMessageByIds err! err = ' + JSON.stringify(err));
            prompt.showToast({message: '删除失败'});
        });
    },

    async updateCollect(actionData){
        console.log('updateCollect , actionData = ' + JSON.stringify(actionData));
        //锁定信息
        var dataAbilityHelper = await featureAbility.getDataAbilityHelper(
            URI_MESSAGE_LOG
        );
        //删除短信根据group_ids删除
        var msgIds = actionData.msgIds;
        var condition = new ohosDataAbility.DataAbilityPredicates();
        condition.in(message_info.msg_id, msgIds);
        var stringValue = {
            "is_collect": actionData.hasCollect,
        };
        console.log('updateCollect-stringValue'+JSON.stringify(stringValue))
        let managerUri = URI_MESSAGE_LOG + '/sms_mms/sms_mms_info';
        dataAbilityHelper.update(managerUri, stringValue, condition).then((data) => {
            console.log('updateCollect success! data = ' + JSON.stringify(data));
            let code = JSON.stringify(data)
            if(code){
                prompt.showToast({message: '修改成功'});
            }else{
                prompt.showToast({message: '修改失败'});
            }
        }).catch((err) => {
            console.log('updateCollect err = ' + err);
            console.log( 'updateCollect err = ' + JSON.stringify(err));
            prompt.showToast({message: '修改失败' + err});
        });
    }
}
