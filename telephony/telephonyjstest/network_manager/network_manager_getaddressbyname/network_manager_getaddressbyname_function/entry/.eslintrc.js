module.exports = {
  'env': {
    'browser': true,
    'es2021': true,
    'jasmine':true,
    'commonjs':true,
  },
  'extends': 'eslint:recommended',
  'parserOptions': {
    'ecmaVersion': 12,
    'sourceType': 'module'
  },
  'rules': {
    'indent': [
      'error',
      4,
      {
        SwitchCase:2
      }
    ],
    'linebreak-style': [
      'error',
      'unix'
    ],
    'quotes': [
      'error',
      'single',
      {'allowTemplateLiterals': false}
    ],
    'semi': [
      'error',
      'always'
    ],
    'no-unused-vars':['warn'],
    'no-async-promise-executor':['warn'],
    'no-redeclare':['warn'],
    'no-ex-assign':['warn'],
    'no-self-assign':['warn'],
    'no-constant-condition':['warn'],
    'camelcase':['error', {'ignoreDestructuring': true}],
    'new-cap':['error'],
    'max-len':['error', {code:120}],
    'brace-style':['error', '1tbs', {'allowSingleLine': false}],
    'curly':['error'],
    'no-multi-spaces':['error'],
    'array-bracket-spacing':['error'],
    'block-spacing':['error'],
    'comma-spacing':['error'],
    'computed-property-spacing':['error'],
    'func-call-spacing':['error'],
    'keyword-spacing':['error'],
    'no-trailing-spaces':['error'],
    'object-curly-spacing':['error'],
    'semi-spacing':['error', {'before': false, 'after': false}],
    'space-before-blocks':['error'],
    'space-before-function-paren':['error'],
    'space-in-parens':['error'],
    'space-infix-ops':['error'],
    'space-unary-ops':['error'],
    'spaced-comment':['error'],
    'switch-colon-spacing':['error'],
    'template-tag-spacing': ['error'],
    'arrow-spacing':['error'],
    'rest-spread-spacing':['error'],
    'template-curly-spacing':['error'],
    // 'no-inner-declarations':['error', 'functions'],//(所有的{}之间不能使用函数声明,不包含函数声明中)
    'no-with':['error'],
    'no-invalid-this':['error'],
    'no-proto':['error'],
    'no-prototype-builtins':['error'],
    'no-array-constructor':['error'],
    'no-new-object':['error'],
    'prefer-template':['error'],
    'guard-for-in':['error'],
    'array-bracket-newline':['error'],
    'object-curly-newline':['error'],
    'multiline-comment-style':['error', 'bare-block'], // 此处一般情况下注释，头部注释和vscode快捷注释冲突，建议应急使用
    // 'multiline-comment-style':["error"],//此处一般情况下注释，头部注释和vscode快捷注释冲突，建议应急使用
    'eqeqeq':['error'],
    'no-useless-return':['error'],
    'max-lines-per-function':['warn'], // 默认最大50行
    'lines-around-comment':['error'],
    'max-depth':['warn', 4], // 默认最大深度4,此处未生效
    'max-nested-callbacks':['warn', 3],
    'one-var':['error', 'never'],
    'one-var-declaration-per-line':['error', 'always'],
    'semi-style': ['error', 'last'],
    'no-empty':['warn']
  }
};


/* 1.'须使用正确的英文拼写进行命名，禁止使用拼音拼写。      n
   2.命名尽量少用缩写，除非是常见词或者业务线的领域词汇。比如：`context`可以简写成`ctx`，`request`可简写成`req`，`response`可简写成`resp`。  n
   3.类名、枚举名、命名空间名采用upperCamelCase风格。    n
   6.避免使用否定的布尔变量名，布尔型的局部变量或方法须加上表达是非意义的前缀。  n
   13.表达式换行须保持一致性，运算符放行末。  n
   19.函数块内须使用函数表达式声明函数。  n
   20.禁止封装基本类型  n
   23.禁止使用IE下的条件注释     n
   27.不要使用函数构造器创建函数   n
   30.在使用原型prototype实现继承时，尽量使用现有稳定的库方法而非自行实现    n
   31.定义类时，应在原型下定义方法，在构造方法内定义属性    n
   32.使用闭包时，应避免构成循环引用，导致内存泄露    n
   33.警惕JavaScript的浮点数      n
   36.数组遍历采用for...of，对象遍历采用for...in。    n(有但是没找到)
   建议22 块语句的最大可嵌套深度不要超过4层      n
   规则1.2 功能失效时必须彻底删除对应的功能代码    n
   WordsTool.100 huawei         n//解决方法是使用/**来替换注释的/*,可以屏蔽对该部分代码的注释格式化
   OAT.1 二进制文件
    */




/* 4.变量名、方法名、参数名采用lowerCamelCase风格。    y(单词中间不能出现_,但是首尾是可以出现_)
   5.静态常量名、枚举值名采用全部大写，单词间使用下划线隔开。  y(能满足一般常量)
   7.采用2个空格缩进，禁止使用tab字符。    y
   8.行宽不超过120个字符。  y
   9.大括号的使用须遵循约定：如果大括号内为空，则允许简写成{}，且无需换行；左大括号前不换行，括号后换行；右大括号前换行，括号后还有else、catch等情况下不换行，其他情况都换行。  y
   10.条件语句和循环语句的实现必须使用大括号包裹，即使只有一条语句。    y
   11.条件语句和循环语句都不允许写在同一行。   y
   12.switch语句的case和default 须缩进一层。 y
   15.空格应该突出关键字和重要信息，避免不必要的空格。   y
   16.表达式语句须以分号结尾。  y
   17.优先使用单引号包裹字符串。 y
   18.声明变量时须使用var、let或const关键字进行声明，避免变量暴露到全局作用域上。  y
   21.禁止使用with   y
   22.this仅可在对象构造函数、方法、闭包中使用     y
   24.禁止修改内置对象的原型     y(可能不准确)
   25.禁止直接使用Object.prototype的内置属性    y
   26.使用Object.getPrototypeOf函数而不要使用_proto_    y
   34.不要使用可变参数的Array构造函数   y(同时添加了对对象创建的限制)
   35.构建字符串时，优先使用字符串模板而不是字符串链接。   y
   14.多个变量定义和赋值语句不允许写在一行。     y
   
   规则66 禁止多余的 return 语句  y
   建议20 方法长度不超过50行  y
   规则11 注释和上面代码块要有空行，//和注释之间要有一个空格  y
   */





/* 28.针对线程安全性，需要进行文档（javadoc）说明?????
   29.Java 8使用CompletableFuture编写异步任务?????? */








