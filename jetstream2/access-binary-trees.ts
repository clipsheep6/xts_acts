const COMMON_NUMBER_TWO = 2;
const CURRENT_LOOP_COUNT_NUMBER_TWO = 7;
const MAX_LOOP_COUNT = 80;
const MS_CONVERSION_RATIO = 1000;

class TreeNode {
  left: TreeNode | null;
  right: TreeNode | null;
  item: number;

  constructor(left: TreeNode, right: TreeNode, item: number) {
    this.left = left;
    this.right = right;
    this.item = item;
  }

  itemCheck(): number {
    if (this.left == null) {
      return this.item;
    } else {
      return (
        this.item +
        (this.left.itemCheck() ?? 0.0) -
        (this.right.itemCheck() ?? 0.0)
      );
    }
  }
}

function bottomUpTree(item: number, depth: number): TreeNode {
  if (depth > 0) {
    return new TreeNode(
      bottomUpTree(COMMON_NUMBER_TWO * item - 1, depth - 1),
      bottomUpTree(COMMON_NUMBER_TWO * item, depth - 1),
      item
    );
  } else {
    return new TreeNode(null, null, item);
  }
}

declare interface ArkTools {
  timeInUs(args: any): number;
}

/*
 *@State
 */
class Benchmark {
  run(): void {
    let ret = 0.0;
    for (let n = 4; n <= CURRENT_LOOP_COUNT_NUMBER_TWO; n++) {
      let minDepth = 4;
      let maxDepth = Math.max(minDepth + COMMON_NUMBER_TWO, n);
      let stretchDepth = maxDepth + 1;
  
      let check = bottomUpTree(0, stretchDepth).itemCheck();
  
      let longLivedTree = bottomUpTree(0, maxDepth);
      for (
        let depth = minDepth;
        depth < maxDepth;
        depth += COMMON_NUMBER_TWO
      ) {
        let iterations = 1 << (maxDepth - depth + minDepth);
  
        check = 0;
        for (let i = 1; i <= iterations; i++) {
          check += bottomUpTree(i, depth).itemCheck();
          check += bottomUpTree(-i, depth).itemCheck();
        }
      }
      ret += longLivedTree.itemCheck();
    }
  
    let expected: number = -4;
    if (ret != expected) {
      print('ERROR: bad result: expected' + expected + ' but got' + ret);
    }
  }


  /*
   * @Benchmark
   */
  runIterationTime(): void {
    let start = ArkTools.timeInUs();
    for (let i = 0; i < MAX_LOOP_COUNT; i++) {
      this.run();
    }
    let end = ArkTools.timeInUs();
    print(
      'access-binary-trees: ms = ' + (end - start) / MS_CONVERSION_RATIO
    );
  }
}

new Benchmark().runIterationTime();
