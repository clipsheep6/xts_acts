// sim卡插槽id


export const slotId_major = 0
export const slotId_minor = 1

export const simObj= {
  slotId_major,
  slotId_minor,
}

export const SimStateObj = {
  0: 'SIM卡状态未知',
  1: 'SIM卡处于不存在，即卡槽中没有插入SIM卡',
  2: 'SIM卡处于锁定状态，即SIM卡被个人识别码（PIN）、PIN解锁码（PUK）或网络锁定',
  3: 'SIM卡未就绪，即SIM卡在位但无法正常工作',
  4: 'SIM卡已就绪，即SIM卡可工作正常',
  5: 'SIM卡已加载'
}