/*
 * Copyright (C) 2017 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

import { File } from "./file";
import { registerPattern, fprPattern } from "./registers";
import { instructionSet } from "./instructions";
import {
  Node,
  NoChildren,
  StructOffset,
  Immediate,
  Sizeof,
  AddImmediates,
  SubImmediates,
  MulImmediates,
  NegImmediate,
  OrImmediates,
  AndImmediates,
  XorImmediates,
  BitnotImmediate,
  RegisterID,
  FPRegisterID,
  SpecialRegister,
  Variable,
  Address,
  BaseIndex,
  AbsoluteAddress,
  Instruction,
  Error,
  ConstExpr,
  ConstDecl,
  Label,
  LocalLabel,
  LabelReference,
  LocalLabelReference,
  Sequence,
  True,
  False,
  Setting,
  And,
  Or,
  Not,
  Skip,
  StringLiteral,
  IfThenElse,
  Macro,
  MacroCall,
  SourceFile,
  CodeOrigin
} from './ast';

let debug: boolean = true;
function DeBugLog(msg: string): void {
  if (debug) {
    print(msg);
  }
}


let GlobalAnnotation: string = "global";
let LocalAnnotation: string = "local";

/*
 * Create IncludeFile File Class Splice
 */
export class IncludeFile extends Node {
  includeDirs: string = '';
  fileName: string = '';

  constructor(moduleName: string, defaultDir: string) {
    super(null);
    this.fileName = moduleName + ".asm";
  }

  toString(): string {
    return this.fileName;
  }
}

/*
 * Define Token Class
 */
export class Token {
  codeOrigin: CodeOrigin;
  string: string;
  constructor(codeOrigi: CodeOrigin, string: string) {
    this.codeOrigin = codeOrigi;
    this.string = string;
  }

  isEqualTo(other: Token | string): boolean {
    if (other instanceof Token) {
      return this.string === other.string;
    }else {
      return this.string === other;
    }
  }

  isNotEqualTo(other: Token | string): boolean {
    return !this.isEqualTo(other);
  }

  toString(): string {
    return "" + this.string + "\\at " + this.codeOrigin.toString();
  }

  parseError(comment: string | null) {
   print("Parse error:" + comment);
  }
}

/*
 * Define Annotation class
 */
export class Annotation {
  codeOrigin: CodeOrigin;
  string: string = "";
  type: string;

  constructor(codeOrigi: CodeOrigin, typ: string, strin: string) {
    this.codeOrigin = codeOrigi;
    this.type = typ;
    this.string = strin;
  }
  
  isEqualTo(other: Token | string): boolean {
    if (other instanceof Token) {
      return this.string === other.string;
    }else {
      return this.string === other;
    }
  }

  isNotEqualTo(other: Annotation | string | Token): boolean {
    return !this.isEqualTo(other);
  }

  toString(): string {
    return "" + this.string + "\at" + this.codeOrigin.toString();
  }

  parseError(comment: string | null) {
    print("Annotation error:" + comment);
  }
}

/*
 * Returns a Token Array
 */
function lex(strs: string, file: SourceFile): Array<Token | Annotation> {
  // Regex gets a data array containing a character
  let scanRegExp = (source: string, regexp: string): string[] | null => {
    return source.match(regexp);
  }

  // The lexer. Takes a string and returns an array of tokens.
  let result: Array<Token | Annotation> = [];
  let lineNumber: number = 1;
  let whitespaceFound: boolean = false;
  let str = strs;
  while (str.length) {
    let tokenMatch: string[] | null;
    let annotation: string | null = null;
    let annotationType: string = '';

    if (tokenMatch = scanRegExp(str, '^#([^\n]*)')) {
      // comment, ignore
      tokenMatch = tokenMatch;
    } else if (tokenMatch = scanRegExp(str, '^\/\/\ ?([^\n]*)')) {
      // annotation
      tokenMatch = tokenMatch;
      annotation = tokenMatch[0];
      annotationType = whitespaceFound ? LocalAnnotation : GlobalAnnotation;
    } else if (tokenMatch = scanRegExp(str, '^\n')) {
      /* We've found a '\n'.  Emit the last comment recorded if appropriate:
       * We need to parse annotations regardless of whether the backend does
       * anything with them or not. This is because the C++ backend may make
       * use of this for its cloopDo debugging utility even if
       * enableInstrAnnotations is not enabled.
       */
      tokenMatch = tokenMatch;
      
      if (annotation) {
        result.push(new Annotation(new CodeOrigin(file, lineNumber), annotationType, annotation));
        annotation = null;
      }
      result.push(new Token(new CodeOrigin(file, lineNumber), tokenMatch[0]));
      lineNumber += 1;
    } else if (tokenMatch = scanRegExp(str, '^[a-zA-Z]([a-zA-Z0-9_.]*)')) {
      tokenMatch = tokenMatch;
      result.push(new Token(new CodeOrigin(file, lineNumber), tokenMatch[0]));
    } else if (tokenMatch = scanRegExp(str, '^\\.([a-zA-Z0-9_]*)')) {
      tokenMatch = tokenMatch;
      result.push(new Token(new CodeOrigin(file, lineNumber), tokenMatch[0]));
    } else if (tokenMatch = scanRegExp(str, '^_([a-zA-Z0-9_]*)')) {
      tokenMatch = tokenMatch;
      result.push(new Token(new CodeOrigin(file, lineNumber), tokenMatch[0]));
    } else if (tokenMatch = scanRegExp(str, '^([ \t]+)')) {
      // whitespace, ignore
      whitespaceFound = true;
      str = str.slice(tokenMatch[0].length);
      continue;
    } else if (tokenMatch = scanRegExp(str, '^0x([0-9a-fA-F]+)')) {
      tokenMatch = tokenMatch;
      result.push(new Token(new CodeOrigin(file, lineNumber), Number.parseInt(tokenMatch[1], 16).toString()));
    } else if (tokenMatch = scanRegExp(str, '^0([0-7]+)')) {
      tokenMatch = tokenMatch;
      result.push(new Token(new CodeOrigin(file, lineNumber), Number.parseInt(tokenMatch[1], 8).toString()));
    } else if (tokenMatch = scanRegExp(str, '^([0-9]+)')) {
      tokenMatch = tokenMatch;
      result.push(new Token(new CodeOrigin(file, lineNumber), tokenMatch[0]));
    } else if (tokenMatch = scanRegExp(str, '^::')) {
      // Match with double colons:: Text line at the beginning
      tokenMatch = tokenMatch;
      result.push(new Token(new CodeOrigin(file, lineNumber), tokenMatch[0]));
    } else if (tokenMatch = scanRegExp(str, '^[:,\\(\\)\\[\\]=\\+\\-~\\|&^*]')) {
      // ^[:,\(\)\[\]=\+\-~\|&^*] Matches strings starting with colon, comma, parenthesis, square brackets, equals, plus, minus, tilde, pipe, and, or characters, or asterisks
      tokenMatch = tokenMatch;
      result.push(new Token(new CodeOrigin(file, lineNumber), tokenMatch[0]));
    } else if (tokenMatch = scanRegExp(str, '^\".*\"')) {
      // Matches strings enclosed in double quotes
      tokenMatch = tokenMatch;
      result.push(new Token(new CodeOrigin(file, lineNumber), tokenMatch[0]));
    } else {
      print(`Lexer error at ${new CodeOrigin(file, lineNumber)}`);
    }

    whitespaceFound = false;
    str = str!.slice(tokenMatch![0].length);
  }

  if(debug) {
    for (let i = 0; i < result.length; i++) {
      // DeBugLog(i + ' line in result: ' + result[i].toString());
    }
  }

  return result;
}

// Token identification.
function isRegister(token: Token): boolean {
  return registerPattern.test(token.string);
}

function isInstruction(token: Token): boolean {
  return instructionSet.has(token.string);
}

function isKeyword(token: Token): boolean {
  return RegExp('^((true)|(false)|(if)|(then)|(else)|(elsif)|(end)|(and)|(or)|(not)|(global)|(macro)|(const)|(constexpr)|(sizeof)|(error)|(include))$').test(token.string)
    || isRegister(token)
    || isInstruction(token);
}

function isIdentifier(token: Token): boolean {
  return RegExp('^[a-zA-Z]([a-zA-Z0-9_.]*)$').test(token.string) && !isKeyword(token);
}

function isLabel(token: Token | string): boolean {
  let tokenString: string;
  if (token instanceof Token) {
    tokenString = token.string;
  } else {
    tokenString = token;
  }
  // Matches regular expressions that start with an underscore followed by letters, numbers, or underscores
  return RegExp('^_([a-zA-Z0-9_]*)$').test(tokenString);
}

function isLocalLabel(token: string | Token): boolean {
  let tokenString: string;
  if (token instanceof Token) {
    tokenString = token.string;
  } else {
    tokenString = token;
  }
  return RegExp('^\\.([a-zA-Z0-9_]*)$').test(tokenString);
}

function isVariable(token: Token): boolean {
  return isIdentifier(token) || isRegister(token);
}

function isInteger(token: Token): boolean {
  return RegExp('^[0-9]').test(token.string);
}

function isString(token: Token): boolean {
  return RegExp('^".*"').test(token.string);
}

// The parser. Takes an array of tokens and returns an AST. Methods
// other than parse(tokens) are not for public consumption.
export class Parser {
  tokens = Array<Token>();
  idx: number = 0;
  annotation: string | null;

  constructor(data: string, fileName: SourceFile) {
    this.tokens = lex(data, fileName) as Array<Token>;
    this.idx = 0;
    this.annotation = null;
  }

  parseError(comment: string | null) {
    if (this.tokens[this.idx] != null) {
      this.tokens[this.idx].parseError(comment);
    } else {
      if (comment != null) {
        print("Parse error at end of file");
      } else {
        print("Parse error at end of file: \(String(describing: comment))");
      }
    }
  }

  consume(regexp: string) {
    if (regexp) {
      if (!RegExp(regexp).test(this.tokens[this.idx].string)) {
        this.parseError(null);
      }
    } else if (this.idx != this.tokens.length) {
      this.parseError(null);
    }
    this.idx += 1;
  }

  skipNewLine() {
    while (this.tokens[this.idx].isEqualTo("\n")) {
      this.idx += 1;
    }
  }

  parsePredicateAtom(): Node | null {
    if (this.tokens[this.idx].isEqualTo("not")) {
      let codeOrigin = this.tokens[this.idx].codeOrigin;
      this.idx += 1;
      let par = this.parsePredicateAtom();
      if (par) {
        return new Not(codeOrigin, par);
      }
    }

    if (this.tokens[this.idx].isEqualTo("(")) {
      this.idx += 1;
      this.skipNewLine();
      let result = this.parsePredicate();
      if (this.tokens[this.idx].isNotEqualTo(")")) {
        this.parseError(null);
      }
      this.idx += 1;
      return result;
    }

    if (this.tokens[this.idx].isEqualTo("true")) {
      let result = True.instance();
      this.idx += 1;
      return result;
    }

    if (this.tokens[this.idx].isEqualTo("false")) {
      let result = False.instance();
      this.idx += 1;
      return result;
    }
    
    if (isIdentifier(this.tokens[this.idx])) {
      let result: Setting = Setting.forName(this.tokens[this.idx].codeOrigin, this.tokens[this.idx].string);
      this.idx += 1;
      return result;
    }
    this.parseError(null);
    return null;
  }

  parsePredicateAnd(): Node | null {
    let result = this.parsePredicateAtom();
    while (this.tokens[this.idx].isEqualTo("and")) {
      let codeOrigin = this.tokens[this.idx].codeOrigin;
      this.idx += 1;
      this.skipNewLine();
      let right = this.parsePredicateAtom();
      if (right != null) {
        result = new And(codeOrigin, result, right);
      }
    }

    return result;
  }

  parsePredicate(): Node | null {
    // some examples of precedence:
    // not a and b -> (not a) and b
    // a and b or c -> (a and b) or c
    // a or b and c -> a or (b and c)

    let result = this.parsePredicateAnd();
    while (this.tokens[this.idx].isEqualTo("or")) {
      let codeOrigin = this.tokens[this.idx].codeOrigin;
      this.idx += 1;
      this.skipNewLine();
      let right = this.parsePredicateAnd();
      if (result != null && right != null) {
        result = new Or(codeOrigin, result, right);
      }
    }

    return result;
  }

  parseVariable(): Node {
    let result = new Node(null);
    if (isRegister(this.tokens[this.idx])) {
      if (fprPattern.test(this.tokens[this.idx].toString())) {
        result = FPRegisterID.forName(this.tokens[this.idx].codeOrigin, this.tokens[this.idx].string);
      } else {
        result = RegisterID.forName(this.tokens[this.idx].codeOrigin, this.tokens[this.idx].string);
      }
    } else if (isIdentifier(this.tokens[this.idx])) {
      result = Variable.forName(this.tokens[this.idx].codeOrigin, this.tokens[this.idx].string);
    } else {
      this.parseError(null);
    }

    this.idx += 1;
    return result;
  }

  // Resolution address
  parseAddress(offset: Node | null): Node | null {
    if (this.tokens[this.idx].isNotEqualTo("[")) {
      this.parseError(null);
    }

    let codeOrigin = this.tokens[this.idx].codeOrigin;
    let result: Node | null;

    // Three possibilities:
    // []       -> AbsoluteAddress
    // [a]      -> Address
    // [a,b]    -> BaseIndex with scale = 1
    // [a,b,c]  -> BaseIndex

    this.idx += 1;
    if (this.tokens[this.idx].isEqualTo("]")) {
      this.idx += 1;
      return new AbsoluteAddress(codeOrigin, offset);
    }

    let a = this.parseVariable();
    if (this.tokens[this.idx].isEqualTo("]")) {
      result = new Address(codeOrigin, a, offset);
    } else {
      if (this.tokens[this.idx].isNotEqualTo(",")) {
        this.parseError(null);
      }
      this.idx += 1;
      let b = this.parseVariable();
      if (this.tokens[this.idx].isEqualTo("]")) {
        result = new BaseIndex(codeOrigin, a, b, 1, offset);
      } else {
        if (this.tokens[this.idx].isNotEqualTo(",")) {
          this.parseError(null);
        }
        this.idx += 1;
        if (!["1", "2", "4", "8"].includes(this.tokens[this.idx].string)) {
          this.parseError(null);
        }
        let c = Number.parseInt(this.tokens[this.idx].string);
        this.idx += 1;
        if (this.tokens[this.idx].isNotEqualTo("]")) {
          this.parseError(null);
        }
        result = new BaseIndex(codeOrigin, a, b, c, offset);
      }

    }
    this.idx += 1;
    return result!
  }

  parseColonColon(): Map<string, string[] | CodeOrigin> {
    this.skipNewLine();
    let firstToken = this.tokens[this.idx];
    let codeOrigin = this.tokens[this.idx].codeOrigin;
    if (isIdentifier(firstToken) == false) {
      this.parseError(null);
    }

    let names: string[] = [this.tokens[this.idx].string];
    this.idx += 1;
    while (this.tokens[this.idx].isEqualTo("::")) {
      this.idx += 1;
      if (isIdentifier((this.tokens[this.idx])) == false) {
        this.parseError(null);
      }
      names.push(this.tokens[this.idx].string);
      this.idx += 1;
    }
    if (names.length == 0) {
      firstToken.parseError(null);
    }
    return new Map<string, string[] | CodeOrigin>([['codeOrigin', codeOrigin],['names', names]])
  }

  parseTextInParens(): Map<string, string[] | CodeOrigin> {
    this.skipNewLine();
    let codeOrigin = this.tokens[this.idx].codeOrigin;
    if (this.tokens[this.idx].isNotEqualTo("(")) {
      print("Missing ( at \(String(describing: codeOrigin))");
    }
    this.idx += 1;
    // need at least one item
    if (this.tokens[this.idx].isEqualTo(")")) {
      print("No items in list at\(String(describing: codeOrigin))");
    }
    let numEnclosedParens: number = 0;
    let text = Array<string>();
    while (this.tokens[this.idx].isNotEqualTo(")") || numEnclosedParens > 0) {
      if (this.tokens[this.idx].isEqualTo("(")) {
        numEnclosedParens += 1;
      } else if (this.tokens[this.idx].isEqualTo(")")) {
        numEnclosedParens -= 1;
      }

      text.push(this.tokens[this.idx].string);
      this.idx += 1;
    }
    this.idx += 1;
    return new Map<string, string[] | CodeOrigin>([['codeOrigin', codeOrigin],['text', text]])
  }

  parseExpressionAtom(): Node | null {
    let result: Node | null;
    this.skipNewLine();
    if (this.tokens[this.idx].isEqualTo("-")) {
      this.idx += 1;
      return new NegImmediate(this.tokens[this.idx-1].codeOrigin, this.parseExpressionAtom());
    }

    if (this.tokens[this.idx].isEqualTo("~")) {
      this.idx += 1;
      return new BitnotImmediate(this.tokens[this.idx-1].codeOrigin, this.parseExpressionAtom());
    }

    if (this.tokens[this.idx].isEqualTo("(")) {
      this.idx += 1;
      result = this.parseExpression();
      if (this.tokens[this.idx].isNotEqualTo(")")) {
        this.parseError(null);
      }
      this.idx += 1;
      return result;
    }

    if (isInteger(this.tokens[this.idx])) {
      result = new Immediate((this.tokens[this.idx].codeOrigin), Number(this.tokens[this.idx].string));
      this.idx += 1;
      return result;
    }

    if (isString(this.tokens[this.idx])) {
      result = new StringLiteral((this.tokens[this.idx].codeOrigin), (this.tokens[this.idx].string));
      this.idx += 1;
      return result;
    }

    if (isIdentifier((this.tokens[this.idx]))) {
      let dic = this.parseColonColon();
      let names = dic.get('names') as Array<string>;
      if (names.length > 1) {
        return StructOffset.forField(dic["codeOrigin"], names.slice(0, -1).join('::'), names[names.length - 1]);
      }
      return Variable.forName(dic["codeOrigin"], names[0]);
    }

    if (isRegister((this.tokens[this.idx]))) {
      return this.parseVariable();
    }

    if (this.tokens[this.idx].isEqualTo("sizeof")) {
      this.idx += 1;
      let dic = this.parseColonColon();
      let co = dic.get('codeOrigin') as CodeOrigin;
      let names = dic.get('names') as Array<string>;
      return Sizeof.forName(co, names.join("::"));
    }

    if (this.tokens[this.idx].isEqualTo("constexpr")) {
      this.idx += 1;
      this.skipNewLine();
      let codeOrigin: CodeOrigin;
      let text: Array<string>;
      let names: Array<string>;
      let textStr: string = "";

      if (this.tokens[this.idx].isEqualTo("(")) {
        let dic = this.parseTextInParens();
        codeOrigin = dic.get('codeOrigin') as CodeOrigin;
        text = dic.get('text') as Array<string>;
        textStr = text.join("");
      } else {
        let dic = this.parseColonColon();
        codeOrigin = dic.get('codeOrigin') as CodeOrigin;
        names = dic.get('names') as Array<string>;
        textStr = names.join("::");
      }
      return ConstExpr.forName(codeOrigin, textStr);
    }

    if (isLabel(this.tokens[this.idx])) {
      result = new LabelReference(this.tokens[this.idx].codeOrigin, Label.forName((this.tokens[this.idx].codeOrigin), this.tokens[this.idx].string));
      this.idx += 1;
      return result;
    }

    if (isLocalLabel(this.tokens[this.idx])) {
      result = new LocalLabelReference(this.tokens[this.idx].codeOrigin, LocalLabel.forName(this.tokens[this.idx].codeOrigin, this.tokens[this.idx].string));
      this.idx += 1;
      return result;
    }
    this.parseError(null);
    return null;
  }

  parseExpressionMul(): Node | null {
    this.skipNewLine();
    let result = this.parseExpressionAtom();
    while (this.tokens[this.idx].isEqualTo("*")) {
      if (this.tokens[this.idx].isEqualTo("*")) {
        this.idx += 1;
        result = new MulImmediates(this.tokens[this.idx-1].codeOrigin, result, this.parseExpressionAtom());
      } else {
        print("Invalid token \(String(describing: this.tokens[this.idx])) in multiply expression");
      }
    }
    return result!
  }

  couldBeExpression(): boolean {
    return this.tokens[this.idx].isEqualTo("-") || this.tokens[this.idx].isEqualTo("~") || this.tokens[this.idx].isEqualTo("constexpr") || this.tokens[this.idx].isEqualTo("sizeof") || isInteger(this.tokens[this.idx]) || isString(this.tokens[this.idx]) || isVariable(this.tokens[this.idx]) || this.tokens[this.idx].isEqualTo("(");
  }

  parseExpressionAdd(): Node | null {
    this.skipNewLine();
    let result = this.parseExpressionMul();
    while (this.tokens[this.idx].isEqualTo("+") || this.tokens[this.idx].isEqualTo("-")) {
      if (this.tokens[this.idx].isEqualTo("+") == true) {
        this.idx += 1;
        result = new AddImmediates(this.tokens[this.idx-1].codeOrigin, result, this.parseExpressionMul());
      } else if (this.tokens[this.idx].isEqualTo("-")) {
        this.idx += 1;
        result = new SubImmediates(this.tokens[this.idx-1].codeOrigin, result, this.parseExpressionMul());
      } else {
        print("Invalid token  \(String(describing: this.tokens[this.idx])) in addition expression");
      }
    }
    return result
  }

  parseExpressionAnd(): Node | null {
    this.skipNewLine();
    let result = this.parseExpressionAdd();
    while (this.tokens[this.idx].isEqualTo("&")) {
      this.idx += 1;
      result = new AndImmediates(this.tokens[this.idx-1].codeOrigin, result, this.parseExpressionAdd());
    }
    return result;
  }

  parseExpression(): Node | null {
    this.skipNewLine();
    let result = this.parseExpressionAnd();
    while (this.tokens[this.idx].isEqualTo("|") || this.tokens[this.idx].isEqualTo("^")) {
      if (this.tokens[this.idx].isEqualTo("|")) {
        this.idx += 1;
        result = new OrImmediates(this.tokens[this.idx-1].codeOrigin, result, this.parseExpressionAnd());
      } else if (this.tokens[this.idx].isEqualTo("^")) {
        this.idx += 1;
        result = new XorImmediates(this.tokens[this.idx-1].codeOrigin, result, this.parseExpressionAnd());
      } else {
        print("Invalid token \( string(describing: this.tokens[this.idx])) in expression");
      }
    }
    return result;
  }

  parseOperand(comment: string): Node | null {
    this.skipNewLine();
    if (this.couldBeExpression()) {
      let expr = this.parseExpression();
      if (this.tokens[this.idx].isEqualTo("[")) {
        return this.parseAddress(expr);
      }
      return expr;
    }
    if (this.tokens[this.idx].isEqualTo("[")) {
      return this.parseAddress(new Immediate(this.tokens[this.idx].codeOrigin, 0));
    }
    if (isLabel(this.tokens[this.idx])) {
      let result = new LabelReference(this.tokens[this.idx].codeOrigin, Label.forName(this.tokens[this.idx].codeOrigin, this.tokens[this.idx].string));
      this.idx += 1;
      return result;
    }

    if (isLocalLabel(this.tokens[this.idx])) {
      let result = new LocalLabelReference(this.tokens[this.idx].codeOrigin, LocalLabel.forName(this.tokens[this.idx].codeOrigin, this.tokens[this.idx].string));
      this.idx += 1;
      return result;
    }

    this.parseError(comment);
    return new Node(null);
  }

  parseMacroVariables(): Array<Variable> {
    this.skipNewLine();
    this.consume('^\\($');
    let variables = Array<Variable>();
    while (true) {
      this.skipNewLine();
      if (this.tokens[this.idx].isEqualTo(")")) {
        this.idx += 1;
        break;
      } else if (isIdentifier(this.tokens[this.idx])) {
        variables.push(Variable.forName(this.tokens[this.idx].codeOrigin, this.tokens[this.idx].string));
        this.idx += 1;
        this.skipNewLine();
        if (this.tokens[this.idx].isEqualTo(")")) {
          this.idx += 1;
          break;
        } else if (this.tokens[this.idx].isEqualTo(",") == true) {
          this.idx += 1;
        } else {
          this.parseError(null);
        }
      } else {
        this.parseError(null);
      }
    }
    return variables;
  }

  parseSequence(final: string | null, comment: string | null): Sequence {
    let firstCodeOrigin = this.tokens[this.idx].codeOrigin;
    let list = Array<Node>();
    while (true) {
      if ((this.idx == this.tokens.length && !final) || (final && RegExp(final).test(this.tokens[this.idx].string))) {
        break;
      } else if (this.tokens[this.idx] instanceof Annotation) {
        // This is the only place where we can encounter a global
        // annotation, and hence need to be able to distinguish between
        // them.
        // globalAnnotations are the ones that start from column 0. All
        // others are considered localAnnotations.  The only reason to
        // distinguish between them is so that we can format the output
        // nicely as one would expect.

        let codeOrigin = this.tokens[this.idx].codeOrigin;
        list.push(new Instruction(codeOrigin, 'localAnnotation', [], this.tokens[this.idx].string));
        this.annotation = null;
        this.idx += 2;
      } else if (this.tokens[this.idx].isEqualTo("\n")) {
        this.idx += 1;
      } else if (this.tokens[this.idx].isEqualTo("const")) {
        this.idx += 1;
        if (!isVariable(this.tokens[this.idx])) {
          this.parseError(null);
        }
        let variable: Variable = Variable.forName(this.tokens[this.idx].codeOrigin, this.tokens[this.idx].string);
        this.idx += 1;
        if (this.tokens[this.idx].isNotEqualTo("=")) {
          this.parseError(null);
        }
        this.idx += 1;
        let value = this.parseOperand("while inside of const" + variable.name);
        list.push(new ConstDecl(this.tokens[this.idx].codeOrigin, variable, value));
      } else if (this.tokens[this.idx].isEqualTo("error")) {
        list.push(new Error(this.tokens[this.idx].codeOrigin));
        this.idx += 1;
      } else if (this.tokens[this.idx].isEqualTo("if") == true) {
        let codeOrigin = this.tokens[this.idx].codeOrigin;
        this.idx += 1;
        this.skipNewLine();
        let predicate = this.parsePredicate();
        this.consume('^((then)|(\n))$');
        this.skipNewLine();
        let ifThenElse = new IfThenElse(codeOrigin, predicate, this.parseSequence('^((else)|(end)|(elsif))$', "while inside of \"if " + predicate!.dump() + "\""));
        list.push(ifThenElse);
        while (this.tokens[this.idx].isEqualTo("elsif")) {
          let codeOrigin = this.tokens[this.idx].codeOrigin;
          this.idx += 1;
          this.skipNewLine();
          predicate = this.parsePredicate();
          this.consume('^((then)|(\n))$');
          this.skipNewLine();
          if (predicate != null) {
            let elseCase = new IfThenElse(codeOrigin, predicate, this.parseSequence('^((else)|(end)|(elsif))$', "while inside of \"if " + predicate!.dump() + "\""));
            ifThenElse.elseCase = elseCase;
            ifThenElse = elseCase;
          }
        }
        if (this.tokens[this.idx].isEqualTo("else")) {
          this.idx += 1;
          ifThenElse.elseCase = this.parseSequence('^end$', "while inside of else case for \"if " + predicate!.dump() + "\"");
          this.idx += 1;
        } else {
          if (this.tokens[this.idx].isNotEqualTo("end")) {
            this.parseError(null);
          }
          this.idx += 1;
        }
      } else if (this.tokens[this.idx].isEqualTo("macro")) {
        let codeOrigin = this.tokens[this.idx].codeOrigin;
        this.idx += 1;
        this.skipNewLine();
        if (!isIdentifier(this.tokens[this.idx])) {
          this.parseError(null);
        }
        let name = this.tokens[this.idx].string;
        this.idx += 1;
        let variables = this.parseMacroVariables();
        let body = this.parseSequence('^end$', "while inside of macro " + name as string);
        this.idx += 1;
        list.push(new Macro(codeOrigin, name, variables, body));
      } else if (this.tokens[this.idx].isEqualTo("global")) {
        let codeOrigin = this.tokens[this.idx].codeOrigin;
        this.idx += 1;
        this.skipNewLine();
        let name = this.tokens[this.idx].string;
        this.idx += 1;
        Label.setAsGlobal(codeOrigin, name);
      } else if (isInstruction(this.tokens[this.idx])) {
        let codeOrigin = this.tokens[this.idx].codeOrigin;
        let name = this.tokens[this.idx].string;
        this.idx += 1;
        if ((!final && this.idx == this.tokens.length) || (final && RegExp(final).test(this.tokens[this.idx].toString()))) {
          // Zero operand instruction, and it's the last one.
          list.push(new Instruction(codeOrigin, name, [], this.annotation));
          this.annotation = null;
          break;
        } else if (this.tokens[this.idx] instanceof Annotation) {
          list.push(new Instruction(codeOrigin, name, [], this.tokens[this.idx].string));
          this.annotation = null;
          this.idx += 2; // Consume the newline as well.
        } else if (this.tokens[this.idx].isEqualTo("\n")) {
          // Zero operand instruction.
          list.push(new Instruction(codeOrigin, name, [], this.annotation));
          this.annotation = null;
          this.idx += 1;
        } else {
          // It's definitely an instruction, and it has at least one operand.
          let operands = Array<Node | null>();
          let endOfSequence = false;
          while (true) {
            operands.push(this.parseOperand("while inside of instruction " + name));
            if ((!final && this.idx == this.tokens.length) || (final && RegExp(final).test(this.tokens[this.idx].string))) {
              // The end of the instruction and of the sequence.
              endOfSequence = true;
              break;
            } else if (this.tokens[this.idx].isEqualTo(",")) {
              // Has another operand.
              this.idx += 1
            } else if (this.tokens[this.idx] instanceof Annotation) {
              this.annotation = this.tokens[this.idx].string;
              this.idx += 2; // Consume the newline as well.
              break;
            } else if (this.tokens[this.idx].isEqualTo("\n")) {
              // The end of the instruction.
              this.idx += 1;
              break;
            } else {
              print("Expected a comma, newline, or: \(final)");
            }
          }
          list.push(new Instruction(codeOrigin, name, operands, this.annotation));
          this.annotation = null;
          if (endOfSequence) {
            break;
          }
        }
      } else if (isIdentifier(this.tokens[this.idx])) {
        // Check for potential macro invocation:
        let codeOrigin = this.tokens[this.idx].codeOrigin;
        let name = this.tokens[this.idx].string;
        this.idx += 1;
        if (this.tokens[this.idx].isEqualTo("(")) {
          // Macro invocation.
          this.idx += 1;
          let operands = Array<Node | null>();
          this.skipNewLine();
          if (this.tokens[this.idx].isEqualTo(")")) {
            this.idx += 1;
          } else {
            while (true) {
              this.skipNewLine();
              if (this.tokens[this.idx].isEqualTo("macro")) {
                // It's a macro lambda!
                let codeOriginInner = this.tokens[this.idx].codeOrigin;
                this.idx += 1;
                let variables = this.parseMacroVariables();
                let body = this.parseSequence('^end$', "while inside of anonymous macro passed as argument to " + name);
                this.idx += 1;
                operands.push(new Macro(codeOriginInner, "", variables, body));
              } else {
                operands.push(this.parseOperand("while inside of macro call to " + name));
              }

              this.skipNewLine();
              if (this.tokens[this.idx].isEqualTo(")")) {
                this.idx += 1;
                break;
              } else if (this.tokens[this.idx].isEqualTo(",")) {
                this.idx += 1;
              } else {
                print("Unexpected \(String(describing: this.tokens[this.idx].string))  while parsing invocation of macro \(name)");
              }
            }
          }

          if (this.tokens[this.idx] instanceof Annotation) {
            this.annotation = this.tokens[this.idx].string;
            this.idx += 2;
          }
          list.push(new MacroCall(codeOrigin, name, operands, this.annotation));
          this.annotation = null;
        } else {
          print("Expected  after\(name)");
        }
      } else if (isLabel(this.tokens[this.idx]) || isLocalLabel(this.tokens[this.idx])) {
        let codeOrigin = this.tokens[this.idx].codeOrigin;
        let name = this.tokens[this.idx].string;
        this.idx += 1;
        if (this.tokens[this.idx].isNotEqualTo(":")) {
          this.parseError(null);
        }
        if (isLabel(name)) {
          list.push(Label.forName(codeOrigin, name, true));
        } else {
          list.push(LocalLabel.forName(codeOrigin, name));
        }
        this.idx += 1;
      } else if (this.tokens[this.idx].isEqualTo("include")) {
        this.idx += 1;
        if (!isIdentifier(this.tokens[this.idx])) {
          this.parseError(null);
        }
        let moduleName = this.tokens[this.idx].string;
        let fileName = new IncludeFile(moduleName, this.tokens[this.idx].codeOrigin.fileName()).fileName;
        this.idx += 1;
        list.push(parse(fileName));
      } else {
        print("Expecting terminal " + final + " " + comment);
      }
    }
    return new Sequence(firstCodeOrigin, list);
  }

  parseIncludes(final: RegExp, comment: string): Array<string> {
    let firstCodeOrigin = this.tokens[this.idx].codeOrigin;
    let fileList = Array<string>();
    fileList.push(this.tokens[this.idx].codeOrigin.fileName());
    while (true) {
      if ((this.idx == this.tokens.length && !final) || (final && final.test(this.tokens[this.idx].toString()))) {
        break;
      } else if (this.tokens[this.idx].isEqualTo("include")) {
        this.idx += 1;
        if (!isIdentifier(this.tokens[this.idx])) {
          this.parseError(null);
        }
        let moduleName = this.tokens[this.idx].string;
        let fileName = new IncludeFile(moduleName, this.tokens[this.idx].codeOrigin.fileName()).fileName;
        this.idx += 1;
        fileList.push(fileName);
      } else {
        this.idx += 1;
      }
    }

    return fileList;
  }
}

function parseData(data: string, fileName: string): Sequence {
  let parser = new Parser(data, new SourceFile(fileName, null, null));
  return parser.parseSequence(null, "");
}

export function parse(fileName: string): Sequence {
  // DeBugLog("Load fileName: "+ fileName)
  return parseData(File.open(fileName).read(), fileName);
}




