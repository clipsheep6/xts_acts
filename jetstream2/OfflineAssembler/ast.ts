/*
 * Copyright (C) 2016-2017 Apple Inc. All rights reserved.
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

/*
 * Base utility types for the AST.
 *
 * Valid methods for Node:
 *
 * node.children -> Returns an array of immediate children.  It has been modified
 *     from the original Ruby version to dump directly nearly the original source.
 *
 * node.descendents -> Returns an array of all strict descendants (children
 *     and children of children, transitively).
 *
 */

export class SourceFile {
  fileName: string;
  fileNames = Array<String>();
  fileNumber: number;

  constructor(fileNam: string, fileNams: Array<String> | null, fileNumbe: number | null) {
    this.fileName = fileNam;
    let fileNum = this.fileNames.indexOf(fileNam);
    if (fileNum == null) {
      this.fileNames.push(this.fileName);
      fileNum = this.fileNames.length;
    } else {
      fileNum += 1; // File numbers are 1 based
    }
    this.fileNumber = fileNum;
  }

  name(): string {
    return this.fileName;
  }
}

/*
 * Define CodeOrigin class for w file path data processing
 */
export class CodeOrigin {
  sourceFile: SourceFile;
  lineNumber: number;

  constructor(sourceFil: SourceFile, lineNumbe: number) {
    this.sourceFile = sourceFil;
    this.lineNumber = lineNumbe;
  }

  fileName(): string {
    return this.sourceFile.name();
  }

  toString(): string {
    return this.fileName() + ":" + String(this.lineNumber);
  }
}


export class Node {
  codeOrigin: CodeOrigin | null;
  isAddress: boolean = false;
  isLabel: boolean = false;
  isImmediate: boolean = false;
  isImmediateOperand: boolean = false;
  isRegister: boolean = false;

  constructor(codeOrig: CodeOrigin | null) {
    this.codeOrigin = codeOrig;
  }

  codeOriginString(): string {
    return (this.codeOrigin != null) ? this.codeOrigin.toString() : "";
  }

  children(): Array<Node | null> {
    return new Array<Node | null>();
  }

  dump(): string {
    return this.codeOriginString();
  }

  value(): string {
    return "";
  }
}

/*
 * NoChild class, that is, leaf node of tree structure
 */
export class NoChildren extends Node {
  children(): Array<Node> {
    return new Array<Node>();
  }
}

function structOffsetKey(astStruct: string, field: string): string {
  return astStruct + "::" + field;
}

export class StructOffset extends NoChildren {
  static mapping = new Map<string, StructOffset>();
  astStruct: string;
  field: string;

  constructor(codeOrigin: CodeOrigin, astStruc: string, fiel: string) {
    super(codeOrigin);
    this.astStruct = astStruc;
    this.field = fiel;

    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = true;
    this.isRegister = false;
  }

  static forField(codeOrigin: CodeOrigin, astStruct: string, field: string): StructOffset | null {
    let key = structOffsetKey(astStruct, field);
    if (StructOffset.mapping.get(key) == null) {
      StructOffset.mapping.set(key, new StructOffset(codeOrigin, astStruct, field));
    }
    return StructOffset.mapping.get(key)!;
  }

  static resetMappings() {
    StructOffset.mapping = new Map();
  }

  dump(): string {
    return this.astStruct + "::" + this.field;
  }
}

export class Sizeof extends NoChildren {
  static mapping = new Map<string, Sizeof>();
  astStruct: string;

  constructor(codeOrigin: CodeOrigin, astStruc: string) {
    super(codeOrigin);
    this.astStruct = astStruc;
  }

  static forName(codeOrigin: CodeOrigin, astStruct: string): Sizeof {
    if (Sizeof.mapping.get(astStruct) == null) {
      Sizeof.mapping.set(astStruct, new Sizeof(codeOrigin, astStruct));
    }
    return Sizeof.mapping.get(astStruct)!;
  }

  static resetMappings() {
    Sizeof.mapping = new Map();
  }

  dump(): string {
    return "sizeof " + this.astStruct;
  }
}

export class Immediate extends NoChildren {
  values: number;

  constructor(codeOrigin: CodeOrigin | null, valu: number) {
    super(codeOrigin);
    this.values = valu;

    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = true;
    this.isImmediateOperand = true;
    this.isRegister = false;
  }

  dump(): string {
    return this.values.toString();
  }

  equals(other: Immediate): boolean {
    return other.values == this.values;
  }
}

export class AddImmediates extends Node {
  left: Node | null;
  right: Node | null;

  constructor(codeOrigin: CodeOrigin, lef: Node | null, righ: Node | null) {
    super(codeOrigin);
    this.left = lef;
    this.right = righ;

    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = true;
    this.isImmediateOperand = true;
    this.isRegister = false;
  }

  children(): Array<Node | null> {
    return [this.left, this.right];
  }

  dump(): string {
    return "(" + this.left!.dump() + " + " + this.right!.dump() + ")";
  }

  value(): string {
    return this.left!.value() + this.right!.value();
  }
}

export class SubImmediates extends Node {
  left: Node | null;
  right: Node | null;

  constructor(codeOrigin: CodeOrigin, lef: Node | null, righ: Node | null) {
    super(codeOrigin);
    this.left = lef;
    this.right = righ;

    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = true;
    this.isImmediateOperand = true;
    this.isRegister = false;
  }

  children(): Array<Node | null> {
    return [this.left, this.right];
  }

  dump(): string {
    return "(" + this.left!.dump() + " - " + this.right!.dump() + ")";
  }


  value(): string {
    return this.left!.value() + "-" + this.right!.value()
  }
}

export class MulImmediates extends Node {
  left: Node | null;
  right: Node | null;

  constructor(codeOrigin: CodeOrigin, lef: Node | null, righ: Node | null) {
    super(codeOrigin);
    this.left = lef;
    this.right = righ;

    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = true;
    this.isImmediateOperand = false;
    this.isRegister = false;
  }

  children(): Array<Node | null> {
    return [this.left, this.right];
  }

  dump(): string {
    return "(" + this.left!.dump() + " * " + this.right!.dump() + ")";
  }
}

export class NegImmediate extends Node {
  child: Node | null;

  constructor(codeOrigin: CodeOrigin, chil: Node | null) {
    super(codeOrigin);
    this.child = chil;

    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = true;
    this.isImmediateOperand = false;
    this.isRegister = false;
  }

  children(): Array<Node | null> {
    return [this.child];
  }

  dump(): string {
    return "(-" + this.child!.dump() + ")";
  }
}

export class OrImmediates extends Node {
  left: Node | null;
  right: Node | null;

  constructor(codeOrigin: CodeOrigin, lef: Node | null, righ: Node | null) {
    super(codeOrigin);
    this.left = lef;
    this.right = righ;

    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = true;
    this.isImmediateOperand = false;
    this.isRegister = false;
  }

  children(): Array<Node | null> {
    return [this.left, this.right];
  }

  dump(): string {
    return "(" + this.left!.dump() + " | " + this.right!.dump() + ")";
  }
}

export class AndImmediates extends Node {
  left: Node | null;
  right: Node | null;

  constructor(codeOrigin: CodeOrigin, lef: Node | null, righ: Node | null) {
    super(codeOrigin);
    this.left = lef;
    this.right = righ;

    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = true;
    this.isImmediateOperand = false;
    this.isRegister = false;
  }

  children(): Array<Node | null> {
    return [this.left, this.right];
  }

  dump(): string {
    return "(" + this.left!.dump() + " & " + this.right!.dump() + ")";
  }
}

export class XorImmediates extends Node {
  left: Node | null;
  right: Node | null;

  constructor(codeOrigin: CodeOrigin, lef: Node | null, righ: Node | null) {
    super(codeOrigin);
    this.left = lef;
    this.right = righ;

    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = true;
    this.isImmediateOperand = false;
    this.isRegister = false;
  }

  children(): Array<Node | null> {
    return [this.left, this.right];
  }

  dump(): string {
    return "(" + this.left!.dump() + " ^ " + this.right!.dump() + ")";
  }
}

export class BitnotImmediate extends Node {
  child: Node | null;

  constructor(codeOrigin: CodeOrigin, chil: Node | null) {
    super(codeOrigin);
    this.child = chil;

    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = true;
    this.isImmediateOperand = false;
    this.isRegister = false;
  }

  children(): Array<Node | null> {
    return [this.child];
  }

  dump(): string {
    return "(~" + this.child!.dump() + ")";
  }
}

export class StringLiteral extends NoChildren {
  values: string;

  constructor(codeOrigin: CodeOrigin, valu: string) {
    super(codeOrigin);
    this.values = valu.slice(1, -1);

    if (!valu.startsWith("\"") || !valu.endsWith("\"")) {
      print("Bad string literal " + this.values + " at " + this.codeOriginString());
    }

    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = false;
    this.isImmediateOperand = false;
    this.isRegister = false;
  }

  dump(): string {
    return "\"" + this.values + "\"";
  }

  equals(other: StringLiteral): boolean {
    return other.values == this.values;
  }
}

export class RegisterID extends NoChildren {
  static mapping = new Map<string, RegisterID>();
  name: string;

  constructor(codeOrigin: CodeOrigin, nam: string) {
    super(codeOrigin);
    this.name = nam;

    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = false;
    this.isRegister = true;
  }

  static forName(codeOrigin: CodeOrigin, name: string): RegisterID {
    if (!RegisterID.mapping.get(name)) {
      RegisterID.mapping.set(name, new RegisterID(codeOrigin, name));
    }
    return RegisterID.mapping.get(name)!;
  }

  dump(): string {
    return this.name;
  }
}

export class FPRegisterID extends NoChildren {
  static mapping = new Map<string, FPRegisterID>();
  name: string;

  constructor(codeOrigin: CodeOrigin, nam: string) {
    super(codeOrigin);
    this.name = nam;

    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = false;
    this.isImmediateOperand = false;
    this.isRegister = true;
  }

  static forName(codeOrigin: CodeOrigin, name: string): FPRegisterID {
    if (FPRegisterID.mapping.get(name) == null) {
      FPRegisterID.mapping.set(name, new FPRegisterID(codeOrigin, name));
    }
    return FPRegisterID.mapping.get(name)!;
  }

  dump(): string {
    return this.name;
  }
}

export class SpecialRegister extends NoChildren {
  name: string;

  constructor(nam: string) {
    super(null);
    this.name = nam;
    this.isAddress = false;
    this.isLabel = false;
    this.isImmediate = false;
    this.isImmediateOperand = false;
    this.isRegister = true;
  }
}

export class Variable extends NoChildren {
  static mapping = new Map<string, Variable>();
  name: string;

  constructor(codeOrigin: CodeOrigin, nam: string) {
    super(codeOrigin);
    this.name = nam;
  }

  static forName(codeOrigin: CodeOrigin, name: string): Variable {
    if (Variable.mapping.get(name) == undefined) {
      Variable.mapping.set(name, new Variable(codeOrigin, name));
    }
    return Variable.mapping.get(name)!;
  }

  dump(): string {
    return this.name;
  }

  inspect(): string {
    return "<variable " + this.name + " at " + this.codeOriginString();
  }
}

export class Address extends Node {
  base: Node;
  offset: Node | null;

  constructor(codeOrigin: CodeOrigin | null, bas: Node, offse: Node | null) {
    super(codeOrigin);
    this.base = bas;
    this.offset = offse;
    if (!(this.base instanceof Variable) && !this.base.isRegister) {
      print("Bad base for address " + this.base!.codeOriginString() + " at " + codeOrigin!.toString());
    }
    if (!(this.offset instanceof Variable) && !this.offset!.isImmediate) {
      print("Bad offset for address " + this.offset!.codeOriginString() + " at " + codeOrigin!.toString());
    }

    this.isAddress = true;
    this.isLabel = false;
    this.isImmediate = false;
    this.isImmediateOperand = true;
    this.isRegister = false;
  }

  children(): Array<Node | null> {
    return [this.base, this.offset];
  }

  dump(): string {
    return this.offset!.dump() + "[" + this.base.dump() + "]";
  }
}

export class BaseIndex extends Node {
  base: Node;
  index: Node;
  scale: number;
  offset: Node | null;

  constructor(codeOrigin: CodeOrigin | null, bas: Node, inde: Node, scal: number, offse: Node | null) {
    super(codeOrigin);
    this.base = bas;
    this.index = inde;
    this.scale = scal;
    this.offset = offse;

    if (![1, 2, 4, 8].includes(this.scale)) {
      print("Bad scale " + this.scale + " at " + this.codeOriginString());
    }

    this.isAddress = true;
    this.isLabel = false;
    this.isImmediate = false;
    this.isImmediateOperand = false;
    this.isRegister = false;
  }

  scaleShift(): number | null {
    switch (this.scale) {
      case 1:
        return 0;
      case 2:
        return 1;
      case 4:
        return 2;
      case 8:
        return 3;
      default:
        print("Bad scale " + this.scale + " at " + this.codeOriginString());
        return null
    }
  }

  children(): Array<Node | null> {
    return [this.base, this.index, this.offset];
  }

  dump(): string {
    return this.offset!.dump() + "[" + this.base.dump() + ", " + this.index.dump() + ", " + this.scale + "]";
  }
}

export class AbsoluteAddress extends NoChildren {
  address: Node | null;

  constructor(codeOrigin: CodeOrigin | null, addres: Node | null) {
    super(codeOrigin);
    this.address = addres;

    this.isAddress = true;
    this.isLabel = false;
    this.isImmediate = false;
    this.isImmediateOperand = true;
    this.isRegister = false;
  }

  dump(): string {
    return this.address!.dump() + "[]";
  }
}

export class Instruction extends Node {
  opcode: string;
  operands: Array<Node | null>;
  annotation: string | null;

  constructor(codeOrigin: CodeOrigin, opcod: string, operand: Array<Node | null>, annotatio: string | null) {
    super(codeOrigin);
    this.opcode = opcod;
    this.operands = operand;
    this.annotation = annotatio;
  }

  children(): Array<Node | null> {
    return Array<Node | null>();
  }

  dump(): string {
    return "    " + this.opcode + " " + (this.operands.map((v: Node | null): String => {
      return v!.dump();
    }).join(", "));
  }
}

export class Error extends NoChildren {
  dump(): string {
    return "    error";
  }
}


export class ConstExpr extends NoChildren {
  values: string;
  static mapping = new Map<string, ConstExpr>();

  constructor(codeOrigin: CodeOrigin, valu: string) {
    super(codeOrigin);

    this.values = valu;
  }

  static forName(codeOrigin: CodeOrigin, text: string): NoChildren {
    if (ConstExpr.mapping.get(text) == null) {
      ConstExpr.mapping.set(text, new ConstExpr(codeOrigin, text));
    }
    return ConstExpr.mapping.get(text)!;
  }

  static resetMappings() {
    ConstExpr.mapping = new Map();
  }

  dump(): string {
    return "constexpr (" + this.values + ")";
  }

  compare(other: ConstExpr): boolean {
    return this.values == other.values;
  }

  isImmediates(): boolean {
    return true
  }
}

export class ConstDecl extends Node {
  variable: Variable | null;
  valueDecl: Node | null;

  constructor(codeOrigin: CodeOrigin, variabl: Variable | null, valueDec: Node | null) {
    super(codeOrigin);
    this.variable = variabl;
    this.valueDecl = valueDec;
  }

  children(): Array<Node | null> {
    return [this.variable, this.valueDecl];
  }

  dump(): string {
    return "const " + this.variable!.dump() + " = " + this.valueDecl!.dump();
  }
}

/*
 * The global variable
 */
let labelMapping = new Map<string, Node>();
let referencedExternLabels = Array<Label>();

export class Label extends NoChildren {
  name: string;
  extern: boolean = true;
  global: boolean = false;

  constructor(codeOrigin: CodeOrigin | null, nam: string) {
    super(codeOrigin);
    this.name = nam;
  }

  static forName(codeOrigin: CodeOrigin | null, name: string, definedInFile: boolean = false): Label {
    if (labelMapping[name] == null) {
      labelMapping[name] = new Label(codeOrigin, name);
    }
    if (definedInFile) {
      labelMapping[name].clearExtern();
    }
    return labelMapping[name];
  }

  static setAsGlobal(codeOrigin: CodeOrigin, name: string) {
    if (labelMapping[name]) {
      let label: Label = labelMapping[name];
      if (label.isGlobal()){
        print("Label: " + name + " declared global multiple times");
      }
      label.setGlobal();
    } else {
      let newLabel = new Label(codeOrigin, name);
      newLabel.setGlobal();
      labelMapping[name] = newLabel;
    }
  }

  static resetMappings() {
    labelMapping = new Map();
    referencedExternLabels = Array<Label>();
  }

  static resetReferenced() {
    referencedExternLabels = Array<Label>();
  }

  clearExtern() {
    this.extern = false;
  }

  isExtern(): boolean {
    return this.extern;
  }

  setGlobal() {
    this.global = true;
  }

  isGlobal(): boolean {
    return this.global;
  }

  dump(): string {
    return this.name + ":";
  }
}


export class LocalLabel extends NoChildren {
  static uniqueNameCounter: number = 0;
  extern: boolean = true;
  name: string;

  constructor(codeOrigin: CodeOrigin | null, nam: string) {
    super(codeOrigin);
    this.name = nam;
  }

  static forName(codeOrigin: CodeOrigin | null, name: string): LocalLabel {
    if (!labelMapping[name]) {
      labelMapping[name] = new LocalLabel(codeOrigin, name);
    }
    return labelMapping[name];
  }

  unique(comment: string): LocalLabel {
    let newName = "_" + comment;
    if (labelMapping[newName]) {
      newName = "_#" + LocalLabel.uniqueNameCounter + "_" + comment;
      while (labelMapping[newName] != null) {
        LocalLabel.uniqueNameCounter++;
      }
    }
    return LocalLabel.forName(null, newName);
  }

  static resetMappings() {
    LocalLabel.uniqueNameCounter = 0;
  }

  cleanName(): string {
    if (this.name.startsWith(".")) {
      return "_" + this.name.slice(1);
    }
    return this.name;
  }

  isGlobal(): boolean {
    return false;
  }

  dump(): string {
    return this.name + ":";
  }
}


export class LabelReference extends Node {
  label: Label;

  constructor(codeOrigin: CodeOrigin, labe: Label) {
    super(codeOrigin);
    this.label = labe;

    this.isAddress = false;
    this.isLabel = true;
    this.isImmediate = false;
    this.isImmediateOperand = true;

  }

  children(): Array<Node> {
    return [this.label];
  }

  name(): string {
    return this.label.name;
  }

  isExtern(): boolean {
    return labelMapping[this.name()].isExtern();
  }

  used() {
    if (!referencedExternLabels.includes(this.label) && this.isExtern()) {
      referencedExternLabels.push(this.label);
    }
  }

  dump(): string {
    return this.label.name;
  }
}


export class LocalLabelReference extends NoChildren {
  label: LocalLabel;

  constructor(codeOrigin: CodeOrigin, labe: LocalLabel) {
    super(codeOrigin);
    this.label = labe;

    this.isAddress = false;
    this.isLabel = true;
    this.isImmediate = false;
    this.isImmediateOperand = true;
  }

  children(): Array<Node> {
    return [this.label];
  }

  name(): string {
    return this.label.name;
  }

  dump(): string {
    return this.label.name;
  }
}

export class Sequence extends Node {
  list: Array<Node>;

  constructor(codeOrigin: CodeOrigin, lis: Array<Node>) {
    super(codeOrigin);
    this.list = lis;
  }

  children(): Array<Node> {
    return this.list;
  }

  dump(): string {
    return "" + this.list.map((v: Node) => {
      return v.dump();
    }).join("\n");
  }
}

export class True extends NoChildren {
  static instance(): True {
    return new True(null);
  }

  values(): boolean {
    return true;
  }

  dump(): string {
    return "true";
  }
}

export class False extends NoChildren {
  static instance(): False {
    return new False(null);
  }

  values(): boolean {
    return false;
  }

  dump(): string {
    return "false";
  }
}


export class Setting extends NoChildren {
  static mapping = new Map<String, Setting>()
  name: string;

  constructor(codeOrigin: CodeOrigin, nam: string) {
    super(codeOrigin);
    this.name = nam;
  }

  static forName(codeOrigin: CodeOrigin, name: string): Setting {
    if (Setting.mapping.get(name) == null) {
      Setting.mapping.set(name, new Setting(codeOrigin, name));
    }
    return Setting.mapping.get(name)!;
  }

  static resetMappings() {
    Setting.mapping = new Map();
  }

  dump(): string {
    return this.name;
  }
}

export class And extends Node {
  left: Node | null;
  right: Node;

  constructor(codeOrigin: CodeOrigin, lef: Node | null, righ: Node) {
    super(codeOrigin);
    this.left = lef;
    this.right = righ;
  }

  children(): Array<Node | null> {
    return [this.left, this.right];
  }

  dump(): string {
    return "(" + this.left!.dump() + " and " + this.right!.dump() + ")";
  }
}

export class Or extends Node {
  left: Node;
  right: Node;

  constructor(codeOrigin: CodeOrigin, lef: Node, righ: Node) {
    super(codeOrigin);
    this.left = lef;
    this.right = righ;
  }

  children(): Array<Node> {
    return [this.left, this.right];
  }

  dump(): string {
    return "(" + this.left.dump() + " or " + this.right.dump() + ")";
  }
}

export class Not extends Node {
  child: Node;

  constructor(codeOrigin: CodeOrigin, chil: Node) {
    super(codeOrigin);
    this.child = chil;

  }

  children(): Array<Node> {
    return [this.child];
  }

  dump(): string {
    return "(not" + this.child.dump() + ")";
  }
}

export class Skip extends NoChildren {
  dump(): string {
    return "    skip";
  }
}

export class IfThenElse extends Node {
  predicate: Node | null;
  thenCase: Node;
  elseCase: Node;

  constructor(codeOrigin: CodeOrigin, predicat: Node | null, thenCas: Node) {
    super(codeOrigin);
    this.predicate = predicat;
    this.thenCase = thenCas;
    this.elseCase = new Skip(codeOrigin);
  }

  dump(): string {
    return "if " + this.predicate!.dump() + "\n" + this.thenCase.dump() + "\nelse\n" + this.elseCase.dump() + "\nend";
  }
}

export class Macro extends Node {
  name: String;
  variables: Array<Variable>;
  body: Node;

  constructor(codeOrigin: CodeOrigin, nam: String, variable: Array<Variable>, bod: Node) {
    super(codeOrigin);
    this.name = nam;
    this.variables = variable;
    this.body = bod;
  }

  dump(): string {
    return "macro " + this.name + "(" + this.variables.map((v: Node): String => {
      return v.dump();
    }).join(", ") + ")\n" + this.body.dump() + "\nend";
  }
}

export class MacroCall extends Node {
  name: string;
  operands: Array<Node | null>;
  annotation: string | null;

  constructor(codeOrigin: CodeOrigin, nam: string, operand: Array<Node | null>, annotatio: string | null) {
    super(codeOrigin);
    this.name = nam;
    this.operands = operand;
    this.annotation = annotatio;
  }

  children(): Array<Node | null> {
    return Array<Node | null>();
  }

  dump(): string {
    return "    " + this.name + "(" + this.operands.map((v: Node | null): String => {
      return v!.dump();
    }).join(", ") + ")";
  }
}

/*
 * Reset the static mapping property of the following node classes
 */
export function resetAST() {
  StructOffset.resetMappings();
  Sizeof.resetMappings();
  ConstExpr.resetMappings();
  Label.resetMappings();
  LocalLabel.resetMappings();
  Setting.resetMappings();
}


let debug: boolean = false;

function DeBugLog(msg: string): void {
  if (debug) {
    print(msg);
  }
}
