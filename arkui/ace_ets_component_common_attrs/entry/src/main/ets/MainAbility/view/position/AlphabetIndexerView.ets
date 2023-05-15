@Component
export struct AlphabetIndexerView {
  @Link _position: Position;
  private componentKey: string;
  private value: string[] = ['#', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
    'H', 'I', 'J', 'K', 'L', 'M', 'N',
    'O', 'P', 'Q', 'R', 'S', 'T', 'U',
    'V', 'W', 'X', 'Y', 'Z']

  build() {
    AlphabetIndexer({ arrayValue: this.value, selected: 0 })
      .selectedColor(0xFFFFFF)
      .popupColor(0xFFFAF0)
      .selectedBackgroundColor(0xCCCCCC)
      .popupBackground(0xD2B48C)
      .usingPopup(true)
      .selectedFont({ size: 16, weight: FontWeight.Bolder })
      .popupFont({ size: 30, weight: FontWeight.Bolder })
      .itemSize(28)
      .alignStyle(IndexerAlign.Left)
      .position(this._position)
      .key(this.componentKey)
  }
}