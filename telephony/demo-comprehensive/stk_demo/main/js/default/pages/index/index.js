export default {
  data: {
    slotID: '',
    msgCmd: '',
    cardStatus: ''
  },
  onShow() {
    console.log(`slotID: ${this.slotID}`);
    console.log(`cardStatus: ${this.cardStatus}`);

  },
  onInit() {
    this.title = this.$t('strings.world');
  }
}
