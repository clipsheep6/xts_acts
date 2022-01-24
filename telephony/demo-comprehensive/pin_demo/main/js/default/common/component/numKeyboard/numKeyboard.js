export default {
  props: {
    openKeyWord: {
      default: false
    }
  },
  data: {
    inputValue: '',
    showKeyBoard: false
  },
  onShow() {
    this.showKeyBoard = this.openKeyWord;
  },
  openCloseKeyWord() {
    this.showKeyBoard = !this.showKeyBoard;
  },
  setProcess(num){
    if(this.$parent().inputValue !== undefined) {
      this.inputValue = this.$parent().inputValue;
    }
    this.inputValue += num;
    this.$emit('onInputChange', this.inputValue);
  },
  delNum(){
    if(this.$parent().inputValue !== undefined) {
      this.inputValue = this.$parent().inputValue;
    }
    this.inputValue = this.inputValue.substr(0,this.inputValue.length-1);
    this.$emit('onInputChange', this.inputValue);
  },
}
