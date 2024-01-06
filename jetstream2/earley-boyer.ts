class sc_Pair {
  car:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  cdr:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  constructor(
    car:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector,
    cdr:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector
  ) {
    this.car = car;
    this.cdr = cdr;
  }
}

class SC_NSNull {
  constructor() {}
}

let sc_const_4_nboyer = new sc_Pair(
  "\u1E9Cimplies",
  new sc_Pair(
    new sc_Pair(
      "\u1E9Cand",
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cimplies",
          new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
        ),
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cand",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cimplies",
                new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cz", new SC_NSNull()))
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cand",
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Cimplies",
                      new sc_Pair(
                        "\u1E9Cz",
                        new sc_Pair("\u1E9Cu", new SC_NSNull())
                      )
                    ),
                    new sc_Pair(
                      new sc_Pair(
                        "\u1E9Cimplies",
                        new sc_Pair(
                          "\u1E9Cu",
                          new sc_Pair("\u1E9Cw", new SC_NSNull())
                        )
                      ),
                      new SC_NSNull()
                    )
                  )
                ),
                new SC_NSNull()
              )
            )
          ),
          new SC_NSNull()
        )
      )
    ),
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cimplies",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cw", new SC_NSNull()))
      ),
      new SC_NSNull()
    )
  )
);
let sc_const_3_nboyer = sc_list(
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair("\u1E9Ccompile", new sc_Pair("\u1E9Cform", new SC_NSNull())),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Creverse",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ccodegen",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Coptimize",
                  new sc_Pair("\u1E9Cform", new SC_NSNull())
                ),
                new sc_Pair(
                  new sc_Pair("\u1E9Cnil", new SC_NSNull()),
                  new SC_NSNull()
                )
              )
            ),
            new SC_NSNull()
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Ceqp",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cequal",
          new sc_Pair(
            new sc_Pair("\u1E9Cfix", new sc_Pair("\u1E9Cx", new SC_NSNull())),
            new sc_Pair(
              new sc_Pair("\u1E9Cfix", new sc_Pair("\u1E9Cy", new SC_NSNull())),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cgreaterp",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Clessp",
          new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cx", new SC_NSNull()))
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Clesseqp",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cnot",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Clessp",
              new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cx", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cgreatereqp",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cnot",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Clessp",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair("\u1E9Cboolean", new sc_Pair("\u1E9Cx", new SC_NSNull())),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cor",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cequal",
              new sc_Pair(
                "\u1E9Cx",
                new sc_Pair(
                  new sc_Pair("\u1E9Ct", new SC_NSNull()),
                  new SC_NSNull()
                )
              )
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cequal",
                new sc_Pair(
                  "\u1E9Cx",
                  new sc_Pair(
                    new sc_Pair("\u1E9Cf", new SC_NSNull()),
                    new SC_NSNull()
                  )
                )
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Ciff",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cand",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cimplies",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cimplies",
                new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cx", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair("\u1E9Ceven1", new sc_Pair("\u1E9Cx", new SC_NSNull())),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair("\u1E9Czerop", new sc_Pair("\u1E9Cx", new SC_NSNull())),
            new sc_Pair(
              new sc_Pair("\u1E9Ct", new SC_NSNull()),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Codd",
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Csub1",
                      new sc_Pair("\u1E9Cx", new SC_NSNull())
                    ),
                    new SC_NSNull()
                  )
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Ccountps-",
        new sc_Pair("\u1E9Cl", new sc_Pair("\u1E9Cpred", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Ccountps-loop",
          new sc_Pair(
            "\u1E9Cl",
            new sc_Pair(
              "\u1E9Cpred",
              new sc_Pair(
                new sc_Pair("\u1E9Czero", new SC_NSNull()),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair("\u1E9Cfact-", new sc_Pair("\u1E9Ci", new SC_NSNull())),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cfact-loop",
          new sc_Pair("\u1E9Ci", new sc_Pair(1, new SC_NSNull()))
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair("\u1E9Creverse-", new sc_Pair("\u1E9Cx", new SC_NSNull())),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Creverse-loop",
          new sc_Pair(
            "\u1E9Cx",
            new sc_Pair(
              new sc_Pair("\u1E9Cnil", new SC_NSNull()),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cdivides",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Czerop",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cremainder",
              new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cx", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cassume-true",
        new sc_Pair("\u1E9Cvar", new sc_Pair("\u1E9Calist", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Ccons",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ccons",
              new sc_Pair(
                "\u1E9Cvar",
                new sc_Pair(
                  new sc_Pair("\u1E9Ct", new SC_NSNull()),
                  new SC_NSNull()
                )
              )
            ),
            new sc_Pair("\u1E9Calist", new SC_NSNull())
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cassume-false",
        new sc_Pair("\u1E9Cvar", new sc_Pair("\u1E9Calist", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Ccons",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ccons",
              new sc_Pair(
                "\u1E9Cvar",
                new sc_Pair(
                  new sc_Pair("\u1E9Cf", new SC_NSNull()),
                  new SC_NSNull()
                )
              )
            ),
            new sc_Pair("\u1E9Calist", new SC_NSNull())
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Ctautology-checker",
        new sc_Pair("\u1E9Cx", new SC_NSNull())
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Ctautologyp",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cnormalize",
              new sc_Pair("\u1E9Cx", new SC_NSNull())
            ),
            new sc_Pair(
              new sc_Pair("\u1E9Cnil", new SC_NSNull()),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair("\u1E9Cfalsify", new sc_Pair("\u1E9Cx", new SC_NSNull())),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cfalsify1",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cnormalize",
              new sc_Pair("\u1E9Cx", new SC_NSNull())
            ),
            new sc_Pair(
              new sc_Pair("\u1E9Cnil", new SC_NSNull()),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair("\u1E9Cprime", new sc_Pair("\u1E9Cx", new SC_NSNull())),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cand",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cnot",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Czerop",
                  new sc_Pair("\u1E9Cx", new SC_NSNull())
                ),
                new SC_NSNull()
              )
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cnot",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cequal",
                    new sc_Pair(
                      "\u1E9Cx",
                      new sc_Pair(
                        new sc_Pair(
                          "\u1E9Cadd1",
                          new sc_Pair(
                            new sc_Pair("\u1E9Czero", new SC_NSNull()),
                            new SC_NSNull()
                          )
                        ),
                        new SC_NSNull()
                      )
                    )
                  ),
                  new SC_NSNull()
                )
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cprime1",
                  new sc_Pair(
                    "\u1E9Cx",
                    new sc_Pair(
                      new sc_Pair(
                        "\u1E9Csub1",
                        new sc_Pair("\u1E9Cx", new SC_NSNull())
                      ),
                      new SC_NSNull()
                    )
                  )
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cand",
        new sc_Pair("\u1E9Cp", new sc_Pair("\u1E9Cq", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            "\u1E9Cp",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cif",
                new sc_Pair(
                  "\u1E9Cq",
                  new sc_Pair(
                    new sc_Pair("\u1E9Ct", new SC_NSNull()),
                    new sc_Pair(
                      new sc_Pair("\u1E9Cf", new SC_NSNull()),
                      new SC_NSNull()
                    )
                  )
                )
              ),
              new sc_Pair(
                new sc_Pair("\u1E9Cf", new SC_NSNull()),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cor",
        new sc_Pair("\u1E9Cp", new sc_Pair("\u1E9Cq", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            "\u1E9Cp",
            new sc_Pair(
              new sc_Pair("\u1E9Ct", new SC_NSNull()),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cif",
                  new sc_Pair(
                    "\u1E9Cq",
                    new sc_Pair(
                      new sc_Pair("\u1E9Ct", new SC_NSNull()),
                      new sc_Pair(
                        new sc_Pair("\u1E9Cf", new SC_NSNull()),
                        new SC_NSNull()
                      )
                    )
                  )
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair("\u1E9Cnot", new sc_Pair("\u1E9Cp", new SC_NSNull())),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            "\u1E9Cp",
            new sc_Pair(
              new sc_Pair("\u1E9Cf", new SC_NSNull()),
              new sc_Pair(
                new sc_Pair("\u1E9Ct", new SC_NSNull()),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cimplies",
        new sc_Pair("\u1E9Cp", new sc_Pair("\u1E9Cq", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            "\u1E9Cp",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cif",
                new sc_Pair(
                  "\u1E9Cq",
                  new sc_Pair(
                    new sc_Pair("\u1E9Ct", new SC_NSNull()),
                    new sc_Pair(
                      new sc_Pair("\u1E9Cf", new SC_NSNull()),
                      new SC_NSNull()
                    )
                  )
                )
              ),
              new sc_Pair(
                new sc_Pair("\u1E9Ct", new SC_NSNull()),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair("\u1E9Cfix", new sc_Pair("\u1E9Cx", new SC_NSNull())),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cnumberp",
              new sc_Pair("\u1E9Cx", new SC_NSNull())
            ),
            new sc_Pair(
              "\u1E9Cx",
              new sc_Pair(
                new sc_Pair("\u1E9Czero", new SC_NSNull()),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cif",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cif",
            new sc_Pair(
              "\u1E9Ca",
              new sc_Pair("\u1E9Cb", new sc_Pair("\u1E9Cc", new SC_NSNull()))
            )
          ),
          new sc_Pair("\u1E9Cd", new sc_Pair("\u1E9Ce", new SC_NSNull()))
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            "\u1E9Ca",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cif",
                new sc_Pair(
                  "\u1E9Cb",
                  new sc_Pair(
                    "\u1E9Cd",
                    new sc_Pair("\u1E9Ce", new SC_NSNull())
                  )
                )
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cif",
                  new sc_Pair(
                    "\u1E9Cc",
                    new sc_Pair(
                      "\u1E9Cd",
                      new sc_Pair("\u1E9Ce", new SC_NSNull())
                    )
                  )
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair("\u1E9Czerop", new sc_Pair("\u1E9Cx", new SC_NSNull())),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cor",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cequal",
              new sc_Pair(
                "\u1E9Cx",
                new sc_Pair(
                  new sc_Pair("\u1E9Czero", new SC_NSNull()),
                  new SC_NSNull()
                )
              )
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cnot",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cnumberp",
                    new sc_Pair("\u1E9Cx", new SC_NSNull())
                  ),
                  new SC_NSNull()
                )
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cplus",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cplus",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Cz", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cplus",
          new sc_Pair(
            "\u1E9Cx",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cplus",
                new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cz", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cplus",
            new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cb", new SC_NSNull()))
          ),
          new sc_Pair(
            new sc_Pair("\u1E9Czero", new SC_NSNull()),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cand",
          new sc_Pair(
            new sc_Pair("\u1E9Czerop", new sc_Pair("\u1E9Ca", new SC_NSNull())),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Czerop",
                new sc_Pair("\u1E9Cb", new SC_NSNull())
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cdifference",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cx", new SC_NSNull()))
      ),
      new sc_Pair(new sc_Pair("\u1E9Czero", new SC_NSNull()), new SC_NSNull())
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cplus",
            new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cb", new SC_NSNull()))
          ),
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cplus",
              new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cc", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cequal",
          new sc_Pair(
            new sc_Pair("\u1E9Cfix", new sc_Pair("\u1E9Cb", new SC_NSNull())),
            new sc_Pair(
              new sc_Pair("\u1E9Cfix", new sc_Pair("\u1E9Cc", new SC_NSNull())),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          new sc_Pair("\u1E9Czero", new SC_NSNull()),
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cdifference",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cnot",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Clessp",
              new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cx", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          "\u1E9Cx",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cdifference",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cand",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cnumberp",
              new sc_Pair("\u1E9Cx", new SC_NSNull())
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cor",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cequal",
                    new sc_Pair(
                      "\u1E9Cx",
                      new sc_Pair(
                        new sc_Pair("\u1E9Czero", new SC_NSNull()),
                        new SC_NSNull()
                      )
                    )
                  ),
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Czerop",
                      new sc_Pair("\u1E9Cy", new SC_NSNull())
                    ),
                    new SC_NSNull()
                  )
                )
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cmeaning",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cplus-tree",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cappend",
                new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          ),
          new sc_Pair("\u1E9Ca", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cplus",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cmeaning",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cplus-tree",
                  new sc_Pair("\u1E9Cx", new SC_NSNull())
                ),
                new sc_Pair("\u1E9Ca", new SC_NSNull())
              )
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cmeaning",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cplus-tree",
                    new sc_Pair("\u1E9Cy", new SC_NSNull())
                  ),
                  new sc_Pair("\u1E9Ca", new SC_NSNull())
                )
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cmeaning",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cplus-tree",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cplus-fringe",
                new sc_Pair("\u1E9Cx", new SC_NSNull())
              ),
              new SC_NSNull()
            )
          ),
          new sc_Pair("\u1E9Ca", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cfix",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cmeaning",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Ca", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cappend",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cappend",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Cz", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cappend",
          new sc_Pair(
            "\u1E9Cx",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cappend",
                new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cz", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Creverse",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cappend",
            new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cb", new SC_NSNull()))
          ),
          new SC_NSNull()
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cappend",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Creverse",
              new sc_Pair("\u1E9Cb", new SC_NSNull())
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Creverse",
                new sc_Pair("\u1E9Ca", new SC_NSNull())
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Ctimes",
        new sc_Pair(
          "\u1E9Cx",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cplus",
              new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cz", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cplus",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ctimes",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Ctimes",
                new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cz", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Ctimes",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Ctimes",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Cz", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Ctimes",
          new sc_Pair(
            "\u1E9Cx",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Ctimes",
                new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cz", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Ctimes",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair(
            new sc_Pair("\u1E9Czero", new SC_NSNull()),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cor",
          new sc_Pair(
            new sc_Pair("\u1E9Czerop", new sc_Pair("\u1E9Cx", new SC_NSNull())),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Czerop",
                new sc_Pair("\u1E9Cy", new SC_NSNull())
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cexec",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cappend",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Cpds", new sc_Pair("\u1E9Cenvrn", new SC_NSNull()))
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cexec",
          new sc_Pair(
            "\u1E9Cy",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cexec",
                new sc_Pair(
                  "\u1E9Cx",
                  new sc_Pair(
                    "\u1E9Cpds",
                    new sc_Pair("\u1E9Cenvrn", new SC_NSNull())
                  )
                )
              ),
              new sc_Pair("\u1E9Cenvrn", new SC_NSNull())
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cmc-flatten",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cappend",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cflatten",
              new sc_Pair("\u1E9Cx", new SC_NSNull())
            ),
            new sc_Pair("\u1E9Cy", new SC_NSNull())
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cmember",
        new sc_Pair(
          "\u1E9Cx",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cappend",
              new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cb", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cor",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cmember",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Ca", new SC_NSNull()))
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cmember",
                new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cb", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cmember",
        new sc_Pair(
          "\u1E9Cx",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Creverse",
              new sc_Pair("\u1E9Cy", new SC_NSNull())
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cmember",
          new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Clength",
        new sc_Pair(
          new sc_Pair("\u1E9Creverse", new sc_Pair("\u1E9Cx", new SC_NSNull())),
          new SC_NSNull()
        )
      ),
      new sc_Pair(
        new sc_Pair("\u1E9Clength", new sc_Pair("\u1E9Cx", new SC_NSNull())),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cmember",
        new sc_Pair(
          "\u1E9Ca",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cintersect",
              new sc_Pair("\u1E9Cb", new sc_Pair("\u1E9Cc", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cand",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cmember",
              new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cb", new SC_NSNull()))
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cmember",
                new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cc", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cnth",
        new sc_Pair(
          new sc_Pair("\u1E9Czero", new SC_NSNull()),
          new sc_Pair("\u1E9Ci", new SC_NSNull())
        )
      ),
      new sc_Pair(new sc_Pair("\u1E9Czero", new SC_NSNull()), new SC_NSNull())
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cexp",
        new sc_Pair(
          "\u1E9Ci",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cplus",
              new sc_Pair("\u1E9Cj", new sc_Pair("\u1E9Ck", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Ctimes",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cexp",
              new sc_Pair("\u1E9Ci", new sc_Pair("\u1E9Cj", new SC_NSNull()))
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cexp",
                new sc_Pair("\u1E9Ci", new sc_Pair("\u1E9Ck", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cexp",
        new sc_Pair(
          "\u1E9Ci",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ctimes",
              new sc_Pair("\u1E9Cj", new sc_Pair("\u1E9Ck", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cexp",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cexp",
              new sc_Pair("\u1E9Ci", new sc_Pair("\u1E9Cj", new SC_NSNull()))
            ),
            new sc_Pair("\u1E9Ck", new SC_NSNull())
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Creverse-loop",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cappend",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Creverse",
              new sc_Pair("\u1E9Cx", new SC_NSNull())
            ),
            new sc_Pair("\u1E9Cy", new SC_NSNull())
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Creverse-loop",
        new sc_Pair(
          "\u1E9Cx",
          new sc_Pair(
            new sc_Pair("\u1E9Cnil", new SC_NSNull()),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair("\u1E9Creverse", new sc_Pair("\u1E9Cx", new SC_NSNull())),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Ccount-list",
        new sc_Pair(
          "\u1E9Cz",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Csort-lp",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cplus",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ccount-list",
              new sc_Pair("\u1E9Cz", new sc_Pair("\u1E9Cx", new SC_NSNull()))
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Ccount-list",
                new sc_Pair("\u1E9Cz", new sc_Pair("\u1E9Cy", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cappend",
            new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cb", new SC_NSNull()))
          ),
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cappend",
              new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cc", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cequal",
          new sc_Pair("\u1E9Cb", new sc_Pair("\u1E9Cc", new SC_NSNull()))
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cplus",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cremainder",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ctimes",
              new sc_Pair(
                "\u1E9Cy",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cquotient",
                    new sc_Pair(
                      "\u1E9Cx",
                      new sc_Pair("\u1E9Cy", new SC_NSNull())
                    )
                  ),
                  new SC_NSNull()
                )
              )
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair("\u1E9Cfix", new sc_Pair("\u1E9Cx", new SC_NSNull())),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cpower-eval",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cbig-plus1",
            new sc_Pair(
              "\u1E9Cl",
              new sc_Pair("\u1E9Ci", new sc_Pair("\u1E9Cbase", new SC_NSNull()))
            )
          ),
          new sc_Pair("\u1E9Cbase", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cplus",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cpower-eval",
              new sc_Pair("\u1E9Cl", new sc_Pair("\u1E9Cbase", new SC_NSNull()))
            ),
            new sc_Pair("\u1E9Ci", new SC_NSNull())
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cpower-eval",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cbig-plus",
            new sc_Pair(
              "\u1E9Cx",
              new sc_Pair(
                "\u1E9Cy",
                new sc_Pair(
                  "\u1E9Ci",
                  new sc_Pair("\u1E9Cbase", new SC_NSNull())
                )
              )
            )
          ),
          new sc_Pair("\u1E9Cbase", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cplus",
          new sc_Pair(
            "\u1E9Ci",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cplus",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cpower-eval",
                    new sc_Pair(
                      "\u1E9Cx",
                      new sc_Pair("\u1E9Cbase", new SC_NSNull())
                    )
                  ),
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Cpower-eval",
                      new sc_Pair(
                        "\u1E9Cy",
                        new sc_Pair("\u1E9Cbase", new SC_NSNull())
                      )
                    ),
                    new SC_NSNull()
                  )
                )
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cremainder",
        new sc_Pair("\u1E9Cy", new sc_Pair(1, new SC_NSNull()))
      ),
      new sc_Pair(new sc_Pair("\u1E9Czero", new SC_NSNull()), new SC_NSNull())
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Clessp",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cremainder",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Cy", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cnot",
          new sc_Pair(
            new sc_Pair("\u1E9Czerop", new sc_Pair("\u1E9Cy", new SC_NSNull())),
            new SC_NSNull()
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cremainder",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cx", new SC_NSNull()))
      ),
      new sc_Pair(new sc_Pair("\u1E9Czero", new SC_NSNull()), new SC_NSNull())
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Clessp",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cquotient",
            new sc_Pair("\u1E9Ci", new sc_Pair("\u1E9Cj", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Ci", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cand",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cnot",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Czerop",
                  new sc_Pair("\u1E9Ci", new SC_NSNull())
                ),
                new SC_NSNull()
              )
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cor",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Czerop",
                    new sc_Pair("\u1E9Cj", new SC_NSNull())
                  ),
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Cnot",
                      new sc_Pair(
                        new sc_Pair(
                          "\u1E9Cequal",
                          new sc_Pair(
                            "\u1E9Cj",
                            new sc_Pair(1, new SC_NSNull())
                          )
                        ),
                        new SC_NSNull()
                      )
                    ),
                    new SC_NSNull()
                  )
                )
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Clessp",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cremainder",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Cx", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cand",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cnot",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Czerop",
                  new sc_Pair("\u1E9Cy", new SC_NSNull())
                ),
                new SC_NSNull()
              )
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cnot",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Czerop",
                    new sc_Pair("\u1E9Cx", new SC_NSNull())
                  ),
                  new SC_NSNull()
                )
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cnot",
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Clessp",
                      new sc_Pair(
                        "\u1E9Cx",
                        new sc_Pair("\u1E9Cy", new SC_NSNull())
                      )
                    ),
                    new SC_NSNull()
                  )
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cpower-eval",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cpower-rep",
            new sc_Pair("\u1E9Ci", new sc_Pair("\u1E9Cbase", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Cbase", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair("\u1E9Cfix", new sc_Pair("\u1E9Ci", new SC_NSNull())),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cpower-eval",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cbig-plus",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cpower-rep",
                new sc_Pair(
                  "\u1E9Ci",
                  new sc_Pair("\u1E9Cbase", new SC_NSNull())
                )
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cpower-rep",
                  new sc_Pair(
                    "\u1E9Cj",
                    new sc_Pair("\u1E9Cbase", new SC_NSNull())
                  )
                ),
                new sc_Pair(
                  new sc_Pair("\u1E9Czero", new SC_NSNull()),
                  new sc_Pair("\u1E9Cbase", new SC_NSNull())
                )
              )
            )
          ),
          new sc_Pair("\u1E9Cbase", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cplus",
          new sc_Pair("\u1E9Ci", new sc_Pair("\u1E9Cj", new SC_NSNull()))
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cgcd",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cgcd",
          new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cx", new SC_NSNull()))
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cnth",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cappend",
            new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cb", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Ci", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cappend",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cnth",
              new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Ci", new SC_NSNull()))
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cnth",
                new sc_Pair(
                  "\u1E9Cb",
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Cdifference",
                      new sc_Pair(
                        "\u1E9Ci",
                        new sc_Pair(
                          new sc_Pair(
                            "\u1E9Clength",
                            new sc_Pair("\u1E9Ca", new SC_NSNull())
                          ),
                          new SC_NSNull()
                        )
                      )
                    ),
                    new SC_NSNull()
                  )
                )
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cdifference",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cplus",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Cx", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair("\u1E9Cfix", new sc_Pair("\u1E9Cy", new SC_NSNull())),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cdifference",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cplus",
            new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cx", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Cx", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair("\u1E9Cfix", new sc_Pair("\u1E9Cy", new SC_NSNull())),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cdifference",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cplus",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cplus",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cz", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cdifference",
          new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cz", new SC_NSNull()))
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Ctimes",
        new sc_Pair(
          "\u1E9Cx",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cdifference",
              new sc_Pair("\u1E9Cc", new sc_Pair("\u1E9Cw", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cdifference",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ctimes",
              new sc_Pair("\u1E9Cc", new sc_Pair("\u1E9Cx", new SC_NSNull()))
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Ctimes",
                new sc_Pair("\u1E9Cw", new sc_Pair("\u1E9Cx", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cremainder",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Ctimes",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cz", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Cz", new SC_NSNull())
        )
      ),
      new sc_Pair(new sc_Pair("\u1E9Czero", new SC_NSNull()), new SC_NSNull())
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cdifference",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cplus",
            new sc_Pair(
              "\u1E9Cb",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cplus",
                  new sc_Pair(
                    "\u1E9Ca",
                    new sc_Pair("\u1E9Cc", new SC_NSNull())
                  )
                ),
                new SC_NSNull()
              )
            )
          ),
          new sc_Pair("\u1E9Ca", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cplus",
          new sc_Pair("\u1E9Cb", new sc_Pair("\u1E9Cc", new SC_NSNull()))
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cdifference",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cadd1",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cplus",
                new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cz", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          ),
          new sc_Pair("\u1E9Cz", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair("\u1E9Cadd1", new sc_Pair("\u1E9Cy", new SC_NSNull())),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Clessp",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cplus",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cplus",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cz", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Clessp",
          new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cz", new SC_NSNull()))
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Clessp",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Ctimes",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cz", new SC_NSNull()))
          ),
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ctimes",
              new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cz", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cand",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cnot",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Czerop",
                  new sc_Pair("\u1E9Cz", new SC_NSNull())
                ),
                new SC_NSNull()
              )
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Clessp",
                new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Clessp",
        new sc_Pair(
          "\u1E9Cy",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cplus",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cnot",
          new sc_Pair(
            new sc_Pair("\u1E9Czerop", new sc_Pair("\u1E9Cx", new SC_NSNull())),
            new SC_NSNull()
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cgcd",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Ctimes",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cz", new SC_NSNull()))
          ),
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ctimes",
              new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cz", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Ctimes",
          new sc_Pair(
            "\u1E9Cz",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cgcd",
                new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cvalue",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cnormalize",
            new sc_Pair("\u1E9Cx", new SC_NSNull())
          ),
          new sc_Pair("\u1E9Ca", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cvalue",
          new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Ca", new SC_NSNull()))
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          new sc_Pair("\u1E9Cflatten", new sc_Pair("\u1E9Cx", new SC_NSNull())),
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ccons",
              new sc_Pair(
                "\u1E9Cy",
                new sc_Pair(
                  new sc_Pair("\u1E9Cnil", new SC_NSNull()),
                  new SC_NSNull()
                )
              )
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cand",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cnlistp",
              new sc_Pair("\u1E9Cx", new SC_NSNull())
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cequal",
                new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Clistp",
        new sc_Pair(
          new sc_Pair("\u1E9Cgopher", new sc_Pair("\u1E9Cx", new SC_NSNull())),
          new SC_NSNull()
        )
      ),
      new sc_Pair(
        new sc_Pair("\u1E9Clistp", new sc_Pair("\u1E9Cx", new SC_NSNull())),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Csamefringe",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cequal",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cflatten",
              new sc_Pair("\u1E9Cx", new SC_NSNull())
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cflatten",
                new sc_Pair("\u1E9Cy", new SC_NSNull())
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cgreatest-factor",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair(
            new sc_Pair("\u1E9Czero", new SC_NSNull()),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cand",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cor",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Czerop",
                  new sc_Pair("\u1E9Cy", new SC_NSNull())
                ),
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cequal",
                    new sc_Pair("\u1E9Cy", new sc_Pair(1, new SC_NSNull()))
                  ),
                  new SC_NSNull()
                )
              )
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cequal",
                new sc_Pair(
                  "\u1E9Cx",
                  new sc_Pair(
                    new sc_Pair("\u1E9Czero", new SC_NSNull()),
                    new SC_NSNull()
                  )
                )
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cgreatest-factor",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair(1, new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cequal",
          new sc_Pair("\u1E9Cx", new sc_Pair(1, new SC_NSNull()))
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cnumberp",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cgreatest-factor",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new SC_NSNull()
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cnot",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cand",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cor",
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Czerop",
                      new sc_Pair("\u1E9Cy", new SC_NSNull())
                    ),
                    new sc_Pair(
                      new sc_Pair(
                        "\u1E9Cequal",
                        new sc_Pair("\u1E9Cy", new sc_Pair(1, new SC_NSNull()))
                      ),
                      new SC_NSNull()
                    )
                  )
                ),
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cnot",
                    new sc_Pair(
                      new sc_Pair(
                        "\u1E9Cnumberp",
                        new sc_Pair("\u1E9Cx", new SC_NSNull())
                      ),
                      new SC_NSNull()
                    )
                  ),
                  new SC_NSNull()
                )
              )
            ),
            new SC_NSNull()
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Ctimes-list",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cappend",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new SC_NSNull()
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Ctimes",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ctimes-list",
              new sc_Pair("\u1E9Cx", new SC_NSNull())
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Ctimes-list",
                new sc_Pair("\u1E9Cy", new SC_NSNull())
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cprime-list",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cappend",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new SC_NSNull()
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cand",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cprime-list",
              new sc_Pair("\u1E9Cx", new SC_NSNull())
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cprime-list",
                new sc_Pair("\u1E9Cy", new SC_NSNull())
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          "\u1E9Cz",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ctimes",
              new sc_Pair("\u1E9Cw", new sc_Pair("\u1E9Cz", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cand",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cnumberp",
              new sc_Pair("\u1E9Cz", new SC_NSNull())
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cor",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cequal",
                    new sc_Pair(
                      "\u1E9Cz",
                      new sc_Pair(
                        new sc_Pair("\u1E9Czero", new SC_NSNull()),
                        new SC_NSNull()
                      )
                    )
                  ),
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Cequal",
                      new sc_Pair("\u1E9Cw", new sc_Pair(1, new SC_NSNull()))
                    ),
                    new SC_NSNull()
                  )
                )
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cgreatereqp",
        new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cnot",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Clessp",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          "\u1E9Cx",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ctimes",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cor",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cequal",
              new sc_Pair(
                "\u1E9Cx",
                new sc_Pair(
                  new sc_Pair("\u1E9Czero", new SC_NSNull()),
                  new SC_NSNull()
                )
              )
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cand",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cnumberp",
                    new sc_Pair("\u1E9Cx", new SC_NSNull())
                  ),
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Cequal",
                      new sc_Pair("\u1E9Cy", new sc_Pair(1, new SC_NSNull()))
                    ),
                    new SC_NSNull()
                  )
                )
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cremainder",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Ctimes",
            new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cx", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Cy", new SC_NSNull())
        )
      ),
      new sc_Pair(new sc_Pair("\u1E9Czero", new SC_NSNull()), new SC_NSNull())
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Ctimes",
            new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cb", new SC_NSNull()))
          ),
          new sc_Pair(1, new SC_NSNull())
        )
      ),
      new sc_Pair(
        sc_list(
          "\u1E9Cand",
          new sc_Pair(
            "\u1E9Cnot",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cequal",
                new sc_Pair(
                  "\u1E9Ca",
                  new sc_Pair(
                    new sc_Pair("\u1E9Czero", new SC_NSNull()),
                    new SC_NSNull()
                  )
                )
              ),
              new SC_NSNull()
            )
          ),
          new sc_Pair(
            "\u1E9Cnot",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cequal",
                new sc_Pair(
                  "\u1E9Cb",
                  new sc_Pair(
                    new sc_Pair("\u1E9Czero", new SC_NSNull()),
                    new SC_NSNull()
                  )
                )
              ),
              new SC_NSNull()
            )
          ),
          new sc_Pair("\u1E9Cnumberp", new sc_Pair("\u1E9Ca", new SC_NSNull())),
          new sc_Pair("\u1E9Cnumberp", new sc_Pair("\u1E9Cb", new SC_NSNull())),
          new sc_Pair(
            "\u1E9Cequal",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Csub1",
                new sc_Pair("\u1E9Ca", new SC_NSNull())
              ),
              new sc_Pair(
                new sc_Pair("\u1E9Czero", new SC_NSNull()),
                new SC_NSNull()
              )
            )
          ),
          new sc_Pair(
            "\u1E9Cequal",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Csub1",
                new sc_Pair("\u1E9Cb", new SC_NSNull())
              ),
              new sc_Pair(
                new sc_Pair("\u1E9Czero", new SC_NSNull()),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ) as sc_Pair,
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Clessp",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Clength",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cdelete",
                new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cl", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          ),
          new sc_Pair(
            new sc_Pair(
              "\u1E9Clength",
              new sc_Pair("\u1E9Cl", new SC_NSNull())
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cmember",
          new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cl", new SC_NSNull()))
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Csort2",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cdelete",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cl", new SC_NSNull()))
          ),
          new SC_NSNull()
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cdelete",
          new sc_Pair(
            "\u1E9Cx",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Csort2",
                new sc_Pair("\u1E9Cl", new SC_NSNull())
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair("\u1E9Cdsort", new sc_Pair("\u1E9Cx", new SC_NSNull())),
      new sc_Pair(
        new sc_Pair("\u1E9Csort2", new sc_Pair("\u1E9Cx", new SC_NSNull())),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Clength",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Ccons",
            new sc_Pair(
              "\u1E9Cx1",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Ccons",
                  new sc_Pair(
                    "\u1E9Cx2",
                    new sc_Pair(
                      new sc_Pair(
                        "\u1E9Ccons",
                        new sc_Pair(
                          "\u1E9Cx3",
                          new sc_Pair(
                            new sc_Pair(
                              "\u1E9Ccons",
                              new sc_Pair(
                                "\u1E9Cx4",
                                new sc_Pair(
                                  new sc_Pair(
                                    "\u1E9Ccons",
                                    new sc_Pair(
                                      "\u1E9Cx5",
                                      new sc_Pair(
                                        new sc_Pair(
                                          "\u1E9Ccons",
                                          new sc_Pair(
                                            "\u1E9Cx6",
                                            new sc_Pair(
                                              "\u1E9Cx7",
                                              new SC_NSNull()
                                            )
                                          )
                                        ),
                                        new SC_NSNull()
                                      )
                                    )
                                  ),
                                  new SC_NSNull()
                                )
                              )
                            ),
                            new SC_NSNull()
                          )
                        )
                      ),
                      new SC_NSNull()
                    )
                  )
                ),
                new SC_NSNull()
              )
            )
          ),
          new SC_NSNull()
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cplus",
          new sc_Pair(
            6,
            new sc_Pair(
              new sc_Pair(
                "\u1E9Clength",
                new sc_Pair("\u1E9Cx7", new SC_NSNull())
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cdifference",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cadd1",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cadd1",
                new sc_Pair("\u1E9Cx", new SC_NSNull())
              ),
              new SC_NSNull()
            )
          ),
          new sc_Pair(2, new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair("\u1E9Cfix", new sc_Pair("\u1E9Cx", new SC_NSNull())),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cquotient",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cplus",
            new sc_Pair(
              "\u1E9Cx",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cplus",
                  new sc_Pair(
                    "\u1E9Cx",
                    new sc_Pair("\u1E9Cy", new SC_NSNull())
                  )
                ),
                new SC_NSNull()
              )
            )
          ),
          new sc_Pair(2, new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cplus",
          new sc_Pair(
            "\u1E9Cx",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cquotient",
                new sc_Pair("\u1E9Cy", new sc_Pair(2, new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Csigma",
        new sc_Pair(
          new sc_Pair("\u1E9Czero", new SC_NSNull()),
          new sc_Pair("\u1E9Ci", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cquotient",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ctimes",
              new sc_Pair(
                "\u1E9Ci",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cadd1",
                    new sc_Pair("\u1E9Ci", new SC_NSNull())
                  ),
                  new SC_NSNull()
                )
              )
            ),
            new sc_Pair(2, new SC_NSNull())
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cplus",
        new sc_Pair(
          "\u1E9Cx",
          new sc_Pair(
            new sc_Pair("\u1E9Cadd1", new sc_Pair("\u1E9Cy", new SC_NSNull())),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cnumberp",
              new sc_Pair("\u1E9Cy", new SC_NSNull())
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cadd1",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cplus",
                    new sc_Pair(
                      "\u1E9Cx",
                      new sc_Pair("\u1E9Cy", new SC_NSNull())
                    )
                  ),
                  new SC_NSNull()
                )
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cadd1",
                  new sc_Pair("\u1E9Cx", new SC_NSNull())
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cdifference",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cdifference",
              new sc_Pair("\u1E9Cz", new sc_Pair("\u1E9Cy", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Clessp",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cnot",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Clessp",
                    new sc_Pair(
                      "\u1E9Cy",
                      new sc_Pair("\u1E9Cz", new SC_NSNull())
                    )
                  ),
                  new SC_NSNull()
                )
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cif",
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Clessp",
                      new sc_Pair(
                        "\u1E9Cz",
                        new sc_Pair("\u1E9Cy", new SC_NSNull())
                      )
                    ),
                    new sc_Pair(
                      new sc_Pair(
                        "\u1E9Cnot",
                        new sc_Pair(
                          new sc_Pair(
                            "\u1E9Clessp",
                            new sc_Pair(
                              "\u1E9Cy",
                              new sc_Pair("\u1E9Cx", new SC_NSNull())
                            )
                          ),
                          new SC_NSNull()
                        )
                      ),
                      new sc_Pair(
                        new sc_Pair(
                          "\u1E9Cequal",
                          new sc_Pair(
                            new sc_Pair(
                              "\u1E9Cfix",
                              new sc_Pair("\u1E9Cx", new SC_NSNull())
                            ),
                            new sc_Pair(
                              new sc_Pair(
                                "\u1E9Cfix",
                                new sc_Pair("\u1E9Cz", new SC_NSNull())
                              ),
                              new SC_NSNull()
                            )
                          )
                        ),
                        new SC_NSNull()
                      )
                    )
                  )
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cmeaning",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cplus-tree",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cdelete",
                new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
              ),
              new SC_NSNull()
            )
          ),
          new sc_Pair("\u1E9Ca", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cmember",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cdifference",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cmeaning",
                    new sc_Pair(
                      new sc_Pair(
                        "\u1E9Cplus-tree",
                        new sc_Pair("\u1E9Cy", new SC_NSNull())
                      ),
                      new sc_Pair("\u1E9Ca", new SC_NSNull())
                    )
                  ),
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Cmeaning",
                      new sc_Pair(
                        "\u1E9Cx",
                        new sc_Pair("\u1E9Ca", new SC_NSNull())
                      )
                    ),
                    new SC_NSNull()
                  )
                )
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cmeaning",
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Cplus-tree",
                      new sc_Pair("\u1E9Cy", new SC_NSNull())
                    ),
                    new sc_Pair("\u1E9Ca", new SC_NSNull())
                  )
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Ctimes",
        new sc_Pair(
          "\u1E9Cx",
          new sc_Pair(
            new sc_Pair("\u1E9Cadd1", new sc_Pair("\u1E9Cy", new SC_NSNull())),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cnumberp",
              new sc_Pair("\u1E9Cy", new SC_NSNull())
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cplus",
                new sc_Pair(
                  "\u1E9Cx",
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Ctimes",
                      new sc_Pair(
                        "\u1E9Cx",
                        new sc_Pair("\u1E9Cy", new SC_NSNull())
                      )
                    ),
                    new SC_NSNull()
                  )
                )
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cfix",
                  new sc_Pair("\u1E9Cx", new SC_NSNull())
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cnth",
        new sc_Pair(
          new sc_Pair("\u1E9Cnil", new SC_NSNull()),
          new sc_Pair("\u1E9Ci", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair("\u1E9Czerop", new sc_Pair("\u1E9Ci", new SC_NSNull())),
            new sc_Pair(
              new sc_Pair("\u1E9Cnil", new SC_NSNull()),
              new sc_Pair(
                new sc_Pair("\u1E9Czero", new SC_NSNull()),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Clast",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cappend",
            new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cb", new SC_NSNull()))
          ),
          new SC_NSNull()
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair("\u1E9Clistp", new sc_Pair("\u1E9Cb", new SC_NSNull())),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Clast",
                new sc_Pair("\u1E9Cb", new SC_NSNull())
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cif",
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Clistp",
                      new sc_Pair("\u1E9Ca", new SC_NSNull())
                    ),
                    new sc_Pair(
                      new sc_Pair(
                        "\u1E9Ccons",
                        new sc_Pair(
                          new sc_Pair(
                            "\u1E9Ccar",
                            new sc_Pair(
                              new sc_Pair(
                                "\u1E9Clast",
                                new sc_Pair("\u1E9Ca", new SC_NSNull())
                              ),
                              new SC_NSNull()
                            )
                          ),
                          new sc_Pair("\u1E9Cb", new SC_NSNull())
                        )
                      ),
                      new sc_Pair("\u1E9Cb", new SC_NSNull())
                    )
                  )
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cequal",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Clessp",
            new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Cz", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Clessp",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Cy", new SC_NSNull()))
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cequal",
                new sc_Pair(
                  new sc_Pair("\u1E9Ct", new SC_NSNull()),
                  new sc_Pair("\u1E9Cz", new SC_NSNull())
                )
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cequal",
                  new sc_Pair(
                    new sc_Pair("\u1E9Cf", new SC_NSNull()),
                    new sc_Pair("\u1E9Cz", new SC_NSNull())
                  )
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cassignment",
        new sc_Pair(
          "\u1E9Cx",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cappend",
              new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cb", new SC_NSNull()))
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cassignedp",
              new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Ca", new SC_NSNull()))
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cassignment",
                new sc_Pair("\u1E9Cx", new sc_Pair("\u1E9Ca", new SC_NSNull()))
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cassignment",
                  new sc_Pair(
                    "\u1E9Cx",
                    new sc_Pair("\u1E9Cb", new SC_NSNull())
                  )
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Ccar",
        new sc_Pair(
          new sc_Pair("\u1E9Cgopher", new sc_Pair("\u1E9Cx", new SC_NSNull())),
          new SC_NSNull()
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair("\u1E9Clistp", new sc_Pair("\u1E9Cx", new SC_NSNull())),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Ccar",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cflatten",
                    new sc_Pair("\u1E9Cx", new SC_NSNull())
                  ),
                  new SC_NSNull()
                )
              ),
              new sc_Pair(
                new sc_Pair("\u1E9Czero", new SC_NSNull()),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cflatten",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Ccdr",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cgopher",
                new sc_Pair("\u1E9Cx", new SC_NSNull())
              ),
              new SC_NSNull()
            )
          ),
          new SC_NSNull()
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair("\u1E9Clistp", new sc_Pair("\u1E9Cx", new SC_NSNull())),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Ccdr",
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cflatten",
                    new sc_Pair("\u1E9Cx", new SC_NSNull())
                  ),
                  new SC_NSNull()
                )
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Ccons",
                  new sc_Pair(
                    new sc_Pair("\u1E9Czero", new SC_NSNull()),
                    new sc_Pair(
                      new sc_Pair("\u1E9Cnil", new SC_NSNull()),
                      new SC_NSNull()
                    )
                  )
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cquotient",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Ctimes",
            new sc_Pair("\u1E9Cy", new sc_Pair("\u1E9Cx", new SC_NSNull()))
          ),
          new sc_Pair("\u1E9Cy", new SC_NSNull())
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair("\u1E9Czerop", new sc_Pair("\u1E9Cy", new SC_NSNull())),
            new sc_Pair(
              new sc_Pair("\u1E9Czero", new SC_NSNull()),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cfix",
                  new sc_Pair("\u1E9Cx", new SC_NSNull())
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    "\u1E9Cequal",
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cget",
        new sc_Pair(
          "\u1E9Cj",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cset",
              new sc_Pair(
                "\u1E9Ci",
                new sc_Pair(
                  "\u1E9Cval",
                  new sc_Pair("\u1E9Cmem", new SC_NSNull())
                )
              )
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cif",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Ceqp",
              new sc_Pair("\u1E9Cj", new sc_Pair("\u1E9Ci", new SC_NSNull()))
            ),
            new sc_Pair(
              "\u1E9Cval",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cget",
                  new sc_Pair(
                    "\u1E9Cj",
                    new sc_Pair("\u1E9Cmem", new SC_NSNull())
                  )
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new SC_NSNull()
      )
    )
  )
);
let const_nboyer = new sc_Pair(
  new sc_Pair(
    "\u1E9Cx",
    new sc_Pair(
      "\u1E9Cf",
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cplus",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Cplus",
              new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cb", new SC_NSNull()))
            ),
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cplus",
                new sc_Pair(
                  "\u1E9Cc",
                  new sc_Pair(
                    new sc_Pair("\u1E9Czero", new SC_NSNull()),
                    new SC_NSNull()
                  )
                )
              ),
              new SC_NSNull()
            )
          )
        ),
        new SC_NSNull()
      )
    )
  ),
  new sc_Pair(
    new sc_Pair(
      "\u1E9Cy",
      new sc_Pair(
        "\u1E9Cf",
        new sc_Pair(
          new sc_Pair(
            "\u1E9Ctimes",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Ctimes",
                new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cb", new SC_NSNull()))
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cplus",
                  new sc_Pair(
                    "\u1E9Cc",
                    new sc_Pair("\u1E9Cd", new SC_NSNull())
                  )
                ),
                new SC_NSNull()
              )
            )
          ),
          new SC_NSNull()
        )
      )
    ),
    new sc_Pair(
      new sc_Pair(
        "\u1E9Cz",
        new sc_Pair(
          "\u1E9Cf",
          new sc_Pair(
            new sc_Pair(
              "\u1E9Creverse",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cappend",
                  new sc_Pair(
                    new sc_Pair(
                      "\u1E9Cappend",
                      new sc_Pair(
                        "\u1E9Ca",
                        new sc_Pair("\u1E9Cb", new SC_NSNull())
                      )
                    ),
                    new sc_Pair(
                      new sc_Pair("\u1E9Cnil", new SC_NSNull()),
                      new SC_NSNull()
                    )
                  )
                ),
                new SC_NSNull()
              )
            ),
            new SC_NSNull()
          )
        )
      ),
      new sc_Pair(
        new sc_Pair(
          "\u1E9Cu",
          new sc_Pair(
            "\u1E9Cequal",
            new sc_Pair(
              new sc_Pair(
                "\u1E9Cplus",
                new sc_Pair("\u1E9Ca", new sc_Pair("\u1E9Cb", new SC_NSNull()))
              ),
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cdifference",
                  new sc_Pair(
                    "\u1E9Cx",
                    new sc_Pair("\u1E9Cy", new SC_NSNull())
                  )
                ),
                new SC_NSNull()
              )
            )
          )
        ),
        new sc_Pair(
          new sc_Pair(
            "\u1E9Cw",
            new sc_Pair(
              "\u1E9Clessp",
              new sc_Pair(
                new sc_Pair(
                  "\u1E9Cremainder",
                  new sc_Pair(
                    "\u1E9Ca",
                    new sc_Pair("\u1E9Cb", new SC_NSNull())
                  )
                ),
                new sc_Pair(
                  new sc_Pair(
                    "\u1E9Cmember",
                    new sc_Pair(
                      "\u1E9Ca",
                      new sc_Pair(
                        new sc_Pair(
                          "\u1E9Clength",
                          new sc_Pair("\u1E9Cb", new SC_NSNull())
                        ),
                        new SC_NSNull()
                      )
                    )
                  ),
                  new SC_NSNull()
                )
              )
            )
          ),
          new SC_NSNull()
        )
      )
    )
  )
);

let BgL_sc_za2symbolzd2recordszd2alistza2_2z00_nboyer:
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector;
let if_constructor_nboyer:
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector = "\u1E9C*";
let false_term_nboyer:
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector;
let true_term_nboyer:
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector;
let rewrite_count_nboyer: number = 0;
let unify_subst_nboyer:
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector = "\u1E9C*";
let sc_number2string = sc_number2jsstring;

/**
 boyer
 */
function apply_subst_lst_nboyer(
  alist:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  lst:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  let sc_lst_7:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  if (lst instanceof SC_NSNull) {
    return new SC_NSNull();
  }
  sc_lst_7 = (lst as sc_Pair).cdr;
  if (sc_lst_7 instanceof SC_NSNull) {
    return new sc_Pair(
      apply_subst_nboyer(alist, (lst as sc_Pair).car),
      new SC_NSNull()
    );
  } else {
    return new sc_Pair(
      apply_subst_nboyer(alist, (lst as sc_Pair).car),
      new sc_Pair(
        apply_subst_nboyer(alist, (sc_lst_7 as sc_Pair).car),
        apply_subst_lst_nboyer(alist, (sc_lst_7 as sc_Pair).cdr)
      )
    );
  }
}
function rewrite_args_nboyer(
  lst:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  let sc_lst_14:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  if (lst instanceof SC_NSNull) {
    return new SC_NSNull();
  }
  let ran_car = rewrite_nboyer((lst as sc_Pair).car);
  sc_lst_14 = (lst as sc_Pair).cdr;
  if (sc_lst_14 instanceof SC_NSNull) {
    return new sc_Pair(ran_car, new SC_NSNull());
  }
  return new sc_Pair(
    ran_car,
    new sc_Pair(
      rewrite_nboyer((sc_lst_14 as sc_Pair).car),
      rewrite_args_nboyer((sc_lst_14 as sc_Pair).cdr)
    )
  );
}
function translate_alist_nboyer(
  alist:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  //debugLog('This is translate_alist_nboyer');
  let sc_alist_6:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let term:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let car_value:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  if (alist instanceof SC_NSNull) {
    return new SC_NSNull();
  }
  term = ((alist as sc_Pair).car as sc_Pair).cdr;
  sc_alist_6 = (alist as sc_Pair).cdr;
  if (!(term instanceof sc_Pair)) {
    car_value = new sc_Pair(((alist as sc_Pair).car as sc_Pair).car, term);
  } else {
    car_value = new sc_Pair(
      ((alist as sc_Pair).car as sc_Pair).car,
      new sc_Pair(
        BgL_sc_symbolzd2ze3symbolzd2record_1ze3_nboyer(
          (term as sc_Pair).car as string
        ),
        translate_args_nboyer((term as sc_Pair).cdr)
      )
    );
  }
  if (sc_alist_6 instanceof SC_NSNull) {
    return new sc_Pair(car_value, new SC_NSNull());
  } else {
    return new sc_Pair(
      car_value,
      new sc_Pair(
        new sc_Pair(
          ((sc_alist_6 as sc_Pair).car as sc_Pair).car,
          translate_term_nboyer(((sc_alist_6 as sc_Pair).car as sc_Pair).cdr)
        ),
        translate_alist_nboyer((sc_alist_6 as sc_Pair).cdr)
      )
    );
  }
}
function one_way_unify1_nboyer(
  term1:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  term2:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): boolean {
  let lst1:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let lst2:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let temp_temp:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  if (!(term2 instanceof sc_Pair)) {
    temp_temp = sc_assq(
      typeof term2 === "string" ? term2 : String(term2 as number),
      unify_subst_nboyer
    );
    if (temp_temp !== false) {
      return is_term_equal_nboyer(term1, (temp_temp as sc_Pair).cdr);
    } else if (sc_isNumber(term2)) {
      return sc_isEqual(term1, term2);
    } else {
      unify_subst_nboyer = new sc_Pair(
        new sc_Pair(term2, term1),
        unify_subst_nboyer
      );
      return true;
    }
  } else if (!(term1 instanceof sc_Pair)) {
    return false;
  } else if ((term1 as sc_Pair).car === (term2 as sc_Pair).car) {
    lst1 = (term1 as sc_Pair).cdr;
    lst2 = (term2 as sc_Pair).cdr;
    while (true) {
      if (lst1 instanceof SC_NSNull) {
        return lst2 instanceof SC_NSNull;
      } else if (lst2 instanceof SC_NSNull) {
        return false;
      } else if (
        one_way_unify1_nboyer((lst1 as sc_Pair).car, (lst2 as sc_Pair).car) !==
        false
      ) {
        lst1 = (lst1 as sc_Pair).cdr;
        lst2 = (lst2 as sc_Pair).cdr;
      } else {
        return false;
      }
    }
  } else {
    return false;
  }
}

function rewrite_nboyer(
  term:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  let term2:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let sc_term_12:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let lst:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let symbol_record: sc_Vector;
  let sc_lst_13:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  rewrite_count_nboyer = rewrite_count_nboyer + 1;
  if (!(term instanceof sc_Pair)) {
    return term;
  } else {
    sc_lst_13 = (term as sc_Pair).cdr;
    if (sc_lst_13 instanceof SC_NSNull) {
      sc_term_12 = new sc_Pair((term as sc_Pair).car, new SC_NSNull());
    } else {
      sc_term_12 = new sc_Pair(
        (term as sc_Pair).car,
        new sc_Pair(
          rewrite_nboyer((sc_lst_13 as sc_Pair).car),
          rewrite_args_nboyer((sc_lst_13 as sc_Pair).cdr)
        )
      );
    }
    symbol_record = (term as sc_Pair).car as sc_Vector;
    lst = symbol_record.arr[1];
    while (true) {
      if (lst instanceof SC_NSNull) {
        return sc_term_12;
      } else {
        term2 = (((lst as sc_Pair).car as sc_Pair).cdr as sc_Pair).car;
        unify_subst_nboyer = new SC_NSNull();
        if (one_way_unify1_nboyer(sc_term_12, term2) !== false) {
          return rewrite_nboyer(
            apply_subst_nboyer(
              unify_subst_nboyer,
              (
                (((lst as sc_Pair).car as sc_Pair).cdr as sc_Pair)
                  .cdr as sc_Pair
              ).car
            )
          );
        } else {
          lst = (lst as sc_Pair).cdr;
        }
      }
    }
  }
}

function tautologyp_nboyer(
  sc_x_1:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  true_lst:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  false_lst_a:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): boolean {
  //debugLog('This is tautologyp_nboyer')
  let tmp1125: boolean;
  let x:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let tmp1126: boolean;
  let sc_x_8:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let sc_tmp1125_9: boolean;
  let sc_tmp1126_10: boolean;
  let sc_x_11:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let false_lst:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  sc_x_11 = sc_x_1;
  false_lst = false_lst_a;
  while (true) {
    sc_tmp1126_10 = is_term_equal_nboyer(sc_x_11, true_term_nboyer);
    sc_tmp1125_9 = is_term_equal_nboyer(sc_x_11, false_term_nboyer);
    if (
      (sc_tmp1126_10 != false
        ? sc_tmp1126_10
        : is_term_member_nboyer(sc_x_11, true_lst)) != false
    ) {
      return true;
    } else if (
      (sc_tmp1125_9 != false
        ? sc_tmp1125_9
        : is_term_member_nboyer(sc_x_11, false_lst)) != false
    ) {
      return false;
    } else if (!(sc_x_11 instanceof sc_Pair)) {
      return false;
    } else if ((sc_x_11 as sc_Pair).car === if_constructor_nboyer) {
      sc_x_8 = ((sc_x_11 as sc_Pair).cdr as sc_Pair).car;
      tmp1126 = is_term_equal_nboyer(sc_x_8, true_term_nboyer);
      x = ((sc_x_11 as sc_Pair).cdr as sc_Pair).car;
      tmp1125 = is_term_equal_nboyer(x, false_term_nboyer);
      if (
        (tmp1126 != false
          ? tmp1126
          : is_term_member_nboyer(sc_x_8, true_lst)) != false
      ) {
        sc_x_11 = (((sc_x_11 as sc_Pair).cdr as sc_Pair).cdr as sc_Pair).car;
      } else if (
        (tmp1125 != false ? tmp1125 : is_term_member_nboyer(x, false_lst)) !=
        false
      ) {
        sc_x_11 = (
          (((sc_x_11 as sc_Pair).cdr as sc_Pair).cdr as sc_Pair).cdr as sc_Pair
        ).car;
      } else if (
        tautologyp_nboyer(
          (((sc_x_11 as sc_Pair).cdr as sc_Pair).cdr as sc_Pair).car,
          new sc_Pair(((sc_x_11 as sc_Pair).cdr as sc_Pair).car, true_lst),
          false_lst
        ) !== false
      ) {
        false_lst = new sc_Pair(
          ((sc_x_11 as sc_Pair).cdr as sc_Pair).car,
          false_lst
        );
        sc_x_11 = (
          (((sc_x_11 as sc_Pair).cdr as sc_Pair).cdr as sc_Pair).cdr as sc_Pair
        ).car;
      } else {
        return false;
      }
    } else {
      return false;
    }
  }
}

function BgL_setupzd2boyerzd2(): boolean {
  //debugLog('This is BgL_setupzd2boyerzd2')
  let symbol_record: sc_Vector;
  let value: sc_Pair;
  let BgL_sc_symbolzd2record_16zd2:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let sym: string;
  let sc_sym_17: string;
  let term:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let lst:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let sc_term_18: sc_Pair;
  let sc_term_19: sc_Pair;
  let car_value:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  BgL_sc_za2symbolzd2recordszd2alistza2_2z00_nboyer = new SC_NSNull();
  if_constructor_nboyer =
    BgL_sc_symbolzd2ze3symbolzd2record_1ze3_nboyer("\u1E9Cif");
  sc_term_19 = new sc_Pair("\u1E9Cf", new SC_NSNull());
  false_term_nboyer = new sc_Pair(
    BgL_sc_symbolzd2ze3symbolzd2record_1ze3_nboyer(sc_term_19.car as string),
    translate_args_nboyer(sc_term_19.cdr)
  );
  sc_term_18 = new sc_Pair("\u1E9Ct", new SC_NSNull());
  true_term_nboyer = new sc_Pair(
    BgL_sc_symbolzd2ze3symbolzd2record_1ze3_nboyer(sc_term_18.car as string),
    translate_args_nboyer(sc_term_18.cdr)
  );
  lst = sc_const_3_nboyer;
  while (!(lst instanceof SC_NSNull)) {
    term = (lst as sc_Pair).car;
    if (
      term instanceof sc_Pair &&
      term.car === "\u1E9Cequal" &&
      (term.cdr as sc_Pair).car instanceof sc_Pair
    ) {
      sc_sym_17 = (((term as sc_Pair).cdr as sc_Pair).car as sc_Pair)
        .car as string;
      car_value = new sc_Pair(
        BgL_sc_symbolzd2ze3symbolzd2record_1ze3_nboyer(
          (term as sc_Pair).car as string
        ),
        translate_args_nboyer((term as sc_Pair).cdr)
      );
      sym = ((term.cdr as sc_Pair).car as sc_Pair).car as string;
      BgL_sc_symbolzd2record_16zd2 =
        BgL_sc_symbolzd2ze3symbolzd2record_1ze3_nboyer(sym);
      value = new sc_Pair(
        car_value,
        (BgL_sc_symbolzd2record_16zd2 as sc_Vector).arr[1]
      );
      symbol_record = BgL_sc_symbolzd2ze3symbolzd2record_1ze3_nboyer(
        sc_sym_17
      ) as sc_Vector;
      symbol_record.arr[1] = value as
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector;
    } else {
      return false;
    }
    lst = (lst as sc_Pair).cdr;
  }
  return true;
}

function BgL_testzd2boyerzd2(n: number): number | boolean {
  //debugLog('This is BgL_testzd2boyerzd2')
  let optrOpnd:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let term:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let sc_n_20: number;
  let answer: boolean;
  let sc_term_21:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let sc_term_22:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  rewrite_count_nboyer = 0;
  term = sc_const_4_nboyer;
  sc_n_20 = n;
  while (sc_n_20 !== 0) {
    term = sc_list(
      "\u{1E9C}",
      term as sc_Pair,
      new sc_Pair("\u{1E9C}f", new SC_NSNull())
    );
    sc_n_20 -= 1;
  }
  sc_term_22 = term;
  if (!(sc_term_22 instanceof sc_Pair)) {
    optrOpnd = sc_term_22;
  } else {
    optrOpnd = new sc_Pair(
      BgL_sc_symbolzd2ze3symbolzd2record_1ze3_nboyer(
        (sc_term_22 as sc_Pair).car as string
      ),
      translate_args_nboyer((sc_term_22 as sc_Pair).cdr)
    );
  }
  if (const_nboyer instanceof SC_NSNull) {
    sc_term_21 = apply_subst_nboyer(new SC_NSNull(), optrOpnd);
  } else {
    sc_term_21 = apply_subst_nboyer(
      new sc_Pair(
        new sc_Pair(
          (const_nboyer.car as sc_Pair).car,
          translate_term_nboyer((const_nboyer.car as sc_Pair).cdr)
        ),
        translate_alist_nboyer(const_nboyer.cdr)
      ),
      optrOpnd
    );
  }
  answer = tautologyp_nboyer(
    rewrite_nboyer(sc_term_21),
    new SC_NSNull(),
    new SC_NSNull()
  );
  sc_write(rewrite_count_nboyer, new SC_NSNull());
  sc_display(" rewrites", new SC_NSNull());
  if (answer !== false) {
    return rewrite_count_nboyer;
  } else {
    return false;
  }
}

function warn(
  rewrites:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): boolean {
  let rewrites_value: number;
  if (sc_isNumber(rewrites)) {
    rewrites_value = rewrites as number;
    if (rewrites_value == 95024) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}

function run(): number {
  return BgL_testzd2boyerzd2(0) as number;
}

function BgL_nboyerzd2benchmarkzd2(...argumentsAry: string[]) {
  //debugLog("This is BgL_nboyerzd2benchmarkzd2");
  let args: sc_Pair | undefined;
  let sc_tmp = argumentsAry.length - 1;
  while (sc_tmp >= 0) {
    args = sc_cons(argumentsAry[sc_tmp], args ?? new SC_NSNull());
    sc_tmp -= 1;
  }
  let n = args === undefined ? 0 : args.car;
  BgL_setupzd2boyerzd2();
  return BgL_runzd2benchmarkzd2(
    "nboyer" + sc_number2string(n as number),
    1,
    run,
    warn
  );
}

/**
 earley
 */
function BgL_makezd2parserzd2(
  grammar: sc_Pair,
  lexer: (lexer: sc_Pair) => sc_Pair
): (
  input: sc_Pair
) => Array<
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector[]
> {
  //debugLog('This is BgL_makezd2parserzd2')
  let i: number;
  let parser_descr: Array<
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector[]
  >;
  let def_loop: (
    defs:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector,
    conf: number
  ) =>
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let nb_nts: number;
  let names: sc_Vector;
  let steps: sc_Vector;
  let predictors: sc_Vector;
  let enders: sc_Vector;
  let starters: sc_Vector;
  let nts: string[];
  let sc_names_1: sc_Vector;
  let sc_steps_2: sc_Vector;
  let sc_predictors_3: sc_Vector;
  let sc_enders_4: sc_Vector;
  let sc_starters_5: sc_Vector;
  let nb_confs: number;
  let BgL_sc_defzd2loop_6zd2: (
    defs:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector,
    BgL_sc_nbzd2confs_14zd2: number
  ) => number;
  let BgL_sc_nbzd2nts_7zd2: number;
  let sc_nts_8: string[];
  let BgL_sc_defzd2loop_9zd2: (
    defs:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector,
    sc_nts_11:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector
  ) => string[];
  BgL_sc_defzd2loop_9zd2 = (defs, sc_nts_11) => {
    //debugLog('This is BgL_sc_defzd2loop_9zd2')
    let rule_loop: (
      rules:
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector,
      sc_nts_12: sc_Pair
    ) => string[];
    let head:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
    let def: sc_Pair;
    if (defs instanceof sc_Pair) {
      def = (defs as sc_Pair).car as sc_Pair;
      head = def.car;
      rule_loop = (rules, sc_nts_12) => {
        let nt:
          | sc_Pair
          | string
          | number
          | string[]
          | boolean
          | SC_NSNull
          | sc_Pair[]
          | sc_ErrorOutputPort
          | sc_Vector;
        let l:
          | sc_Pair
          | string
          | number
          | string[]
          | boolean
          | SC_NSNull
          | sc_Pair[]
          | sc_ErrorOutputPort
          | sc_Vector;
        let sc_nts_13:
          | sc_Pair
          | string
          | number
          | string[]
          | boolean
          | SC_NSNull
          | sc_Pair[]
          | sc_ErrorOutputPort
          | sc_Vector;
        let rule:
          | sc_Pair
          | string
          | number
          | string[]
          | boolean
          | SC_NSNull
          | sc_Pair[]
          | sc_ErrorOutputPort
          | sc_Vector;
        if (rules instanceof sc_Pair) {
          rule = (rules as sc_Pair).car as sc_Pair;
          l = rule;
          sc_nts_13 = sc_nts_12;
          while (l instanceof sc_Pair) {
            nt = (l as sc_Pair).car;
            l = (l as sc_Pair).cdr;
            sc_nts_13 =
              sc_member(nt, sc_nts_13) !== false
                ? sc_nts_13
                : new sc_Pair(nt, sc_nts_13);
          }
          return rule_loop((rules as sc_Pair).cdr, sc_nts_13 as sc_Pair);
        } else {
          return BgL_sc_defzd2loop_9zd2((defs as sc_Pair).cdr, sc_nts_12);
        }
      };
      return rule_loop(
        def.cdr,
        sc_member(head, sc_nts_11) !== false
          ? (sc_nts_11 as sc_Pair)
          : new sc_Pair(head, sc_nts_11)
      );
    } else {
      return sc_list2vector(sc_reverse(sc_nts_11) as sc_Pair).arr as string[];
    }
  };

  sc_nts_8 = BgL_sc_defzd2loop_9zd2(grammar, new SC_NSNull());

  BgL_sc_nbzd2nts_7zd2 = sc_nts_8.length;

  BgL_sc_defzd2loop_6zd2 = (defs, BgL_sc_nbzd2confs_14zd2) => {
    //debugLog("This is BgL_sc_defzd2loop_6zd2")
    let rule_loop: (
      rules:
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector,
      BgL_sc_nbzd2confs_15zd2: number
    ) => number;
    let def:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
    if (defs instanceof sc_Pair) {
      def = (defs as sc_Pair).car;
      rule_loop = (rules, BgL_sc_nbzd2confs_15zd2) => {
        let l:
          | sc_Pair
          | string
          | number
          | string[]
          | boolean
          | SC_NSNull
          | sc_Pair[]
          | sc_ErrorOutputPort
          | sc_Vector;
        let BgL_sc_nbzd2confs_16zd2: number;
        let rule: sc_Pair;
        if (rules instanceof sc_Pair) {
          rule = (rules as sc_Pair).car as sc_Pair;
          l = rule;
          BgL_sc_nbzd2confs_16zd2 = BgL_sc_nbzd2confs_15zd2;
          while (l instanceof sc_Pair) {
            l = (l as sc_Pair).cdr as sc_Pair;
            BgL_sc_nbzd2confs_16zd2 += 1;
          }
          return rule_loop((rules as sc_Pair).cdr, BgL_sc_nbzd2confs_16zd2 + 1);
        } else {
          return BgL_sc_defzd2loop_6zd2(
            (defs as sc_Pair).cdr,
            BgL_sc_nbzd2confs_15zd2
          );
        }
      };
      return rule_loop((def as sc_Pair).cdr, BgL_sc_nbzd2confs_14zd2);
    } else {
      return BgL_sc_nbzd2confs_14zd2;
    }
  };
  nb_confs = BgL_sc_defzd2loop_6zd2(grammar, 0) + BgL_sc_nbzd2nts_7zd2;

  sc_starters_5 = sc_makeVector(BgL_sc_nbzd2nts_7zd2, new SC_NSNull());
  sc_enders_4 = sc_makeVector(BgL_sc_nbzd2nts_7zd2, new SC_NSNull());
  sc_predictors_3 = sc_makeVector(BgL_sc_nbzd2nts_7zd2, new SC_NSNull());
  sc_steps_2 = sc_makeVector(nb_confs, false);
  sc_names_1 = sc_makeVector(nb_confs, false);
  nts = sc_nts_8;
  starters = sc_starters_5;
  enders = sc_enders_4;
  predictors = sc_predictors_3;
  steps = sc_steps_2;
  names = sc_names_1;
  nb_nts = sc_nts_8.length;
  i = nb_nts - 1;
  while (i >= 0) {
    sc_steps_2.arr[i] = i - nb_nts;
    sc_names_1.arr[i] = sc_list(sc_nts_8[i], 0);
    sc_enders_4.arr[i] = sc_list(i);
    i -= 1;
  }
  def_loop = (defs, conf) => {
    //debugLog('This is def_loop')
    let rule_loop: (
      rules:
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector,
      conf: number,
      rule_num: number
    ) =>
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
    let head: string;
    let def: sc_Pair;
    if (defs instanceof sc_Pair) {
      def = (defs as sc_Pair).car as sc_Pair;
      head = def.car as string;
      rule_loop = (rules, conf, rule_num) => {
        let i: number;
        let sc_i_17: number;
        let nt: string;
        let l:
          | sc_Pair
          | string
          | number
          | string[]
          | boolean
          | SC_NSNull
          | sc_Pair[]
          | sc_ErrorOutputPort
          | sc_Vector;
        let sc_conf_18: number;
        let sc_i_19: number;
        let rule: sc_Pair;
        if (rules instanceof sc_Pair) {
          rule = (rules as sc_Pair).car as sc_Pair;
          names.arr[conf] = sc_list(head, rule_num);
          sc_i_19 = ind(head, nts) as number;
          starters.arr[sc_i_19] = new sc_Pair(conf, starters.arr[sc_i_19]);
          l = rule;
          sc_conf_18 = conf;
          while (l instanceof sc_Pair) {
            nt = (l as sc_Pair).car as string;
            steps.arr[sc_conf_18] = ind(nt, nts);
            sc_i_17 = ind(nt, nts) as number;
            predictors.arr[sc_i_17] = new sc_Pair(
              sc_conf_18,
              predictors.arr[sc_i_17]
            );
            l = (l as sc_Pair).cdr;
            sc_conf_18 += 1;
          }
          steps.arr[sc_conf_18] = (ind(head, nts) as number) - nb_nts;
          i = ind(head, nts) as number;
          enders.arr[i] = new sc_Pair(sc_conf_18, enders.arr[i]);
          return rule_loop(
            (rules as sc_Pair).cdr as
              | sc_Pair
              | string
              | number
              | string[]
              | boolean
              | SC_NSNull
              | sc_Pair[]
              | sc_ErrorOutputPort
              | sc_Vector,
            sc_conf_18 + 1,
            rule_num + 1
          );
        } else {
          return def_loop((defs as sc_Pair).cdr as sc_Pair, conf);
        }
      };
      return rule_loop(def.cdr, conf, 1);
    } else {
      return new SC_NSNull();
    }
  };

  def_loop(grammar, sc_nts_8.length);
  parser_descr = [
    lexer,
    sc_nts_8,
    sc_starters_5,
    sc_enders_4,
    sc_predictors_3,
    sc_steps_2,
    sc_names_1,
  ];
  return (input) => {
    //debugLog('This is input')
    let optrOpnd:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
    let sc_optrOpnd_20: sc_Pair;
    let sc_optrOpnd_21: sc_Pair;
    let sc_optrOpnd_22: sc_Pair;
    let loop1: () =>
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
    let BgL_sc_stateza2_23za2: sc_Vector;
    let toks: sc_Vector;
    let BgL_sc_nbzd2nts_24zd2: number;
    let sc_steps_25: sc_Vector;
    let sc_enders_26: sc_Vector;
    let state_num: number;
    let BgL_sc_statesza2_27za2: sc_Vector;
    let states: sc_Vector;
    let i: number;
    let conf: number;
    let l:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
    let tok_nts:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
    let sc_i_28: number;
    let sc_i_29:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
    let l1: sc_Pair;
    let l2: sc_Pair;
    let tok: sc_Pair;
    let tail1129: sc_Pair;
    let L1125:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
    let goal_enders: sc_Pair;
    let BgL_sc_statesza2_30za2: sc_Vector;
    let BgL_sc_nbzd2nts_31zd2: number;
    let BgL_sc_nbzd2confs_32zd2: number;
    let nb_toks: number;
    let goal_starters: sc_Pair;
    let sc_states_33: sc_Vector;
    let BgL_sc_nbzd2confs_34zd2: number;
    let BgL_sc_nbzd2toks_35zd2: number;
    let sc_toks_36: sc_Vector;
    let falseHead1128: sc_Pair;
    let sc_names_37: sc_Vector;
    let sc_steps_38: sc_Vector;
    let sc_predictors_39: sc_Vector;
    let sc_enders_40: sc_Vector;
    let sc_starters_41: sc_Vector;
    let sc_nts_42: string[];
    let make_states: (
      BgL_sc_nbzd2toks_50zd2: number,
      BgL_sc_nbzd2confs_51zd2: number
    ) => sc_Vector;
    let BgL_sc_confzd2setzd2getza2_44za2: (
      state: sc_Vector,
      BgL_sc_statezd2num_53zd2: number,
      sc_conf_54: number
    ) => sc_Vector;
    let conf_set_merge_new_bang: (conf_set: sc_Vector) => number;
    let conf_set_adjoin: (
      state: sc_Vector,
      conf_set: sc_Vector,
      sc_conf_56: number,
      i: number
    ) =>
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
    let BgL_sc_confzd2setzd2adjoinza2_45za2: (
      sc_states_57: sc_Vector,
      BgL_sc_statezd2num_58zd2: number,
      l: sc_Pair,
      i: number
    ) =>
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
    let BgL_sc_confzd2setzd2adjoinza2za2_46z00: (
      sc_states_60: sc_Vector,
      BgL_sc_statesza2_61za2: sc_Vector,
      BgL_sc_statezd2num_62zd2: number,
      sc_conf_63: number,
      i: number
    ) => boolean;
    let conf_set_union: (
      state: sc_Vector,
      conf_set: sc_Vector,
      sc_conf_66: number,
      other_set: sc_Vector
    ) =>
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
    let forw: (
      sc_states_67: sc_Vector,
      BgL_sc_statezd2num_68zd2: number,
      sc_starters_69: sc_Vector,
      sc_enders_70: sc_Vector,
      sc_predictors_71: sc_Vector,
      sc_steps_72: sc_Vector,
      sc_nts_73: string[]
    ) =>
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;

    make_states = (BgL_sc_nbzd2toks_50zd2, BgL_sc_nbzd2confs_51zd2) => {
      //debugLog('This is make_states')
      let v: sc_Vector;
      let i: number;
      let sc_states_52: sc_Vector;
      sc_states_52 = sc_makeVector(BgL_sc_nbzd2toks_50zd2 + 1, false);
      i = BgL_sc_nbzd2toks_50zd2;
      while (i >= 0) {
        v = sc_makeVector(BgL_sc_nbzd2confs_51zd2 + 1, false);
        v.arr[0] = -1;
        sc_states_52.arr[i] = v;
        i -= 1;
      }
      return sc_states_52;
    };
    BgL_sc_confzd2setzd2getza2_44za2 = (
      state,
      BgL_sc_statezd2num_53zd2,
      sc_conf_54
    ) => {
      let conf_set: sc_Vector;
      let BgL_sc_confzd2set_55zd2:
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector;
      BgL_sc_confzd2set_55zd2 = state.arr[sc_conf_54 + 1];
      if (BgL_sc_confzd2set_55zd2 !== false) {
        return BgL_sc_confzd2set_55zd2 as sc_Vector;
      } else {
        conf_set = sc_makeVector(BgL_sc_statezd2num_53zd2 + 6, false);
        conf_set.arr[1] = -3;
        conf_set.arr[2] = -1;
        conf_set.arr[3] = -1;
        conf_set.arr[4] = -1;
        state.arr[sc_conf_54 + 1] = conf_set;
        return conf_set;
      }
    };
    conf_set_merge_new_bang = (conf_set) => {
      conf_set.arr[(conf_set.arr[1] as number) + 5] = conf_set.arr[4];
      conf_set.arr[1] = conf_set.arr[3];
      conf_set.arr[3] = -1;
      return (conf_set.arr[4] = -1);
    };
    conf_set_adjoin = (state, conf_set, sc_conf_56, i) => {
      let tail: number = conf_set.arr[3] as number;
      conf_set.arr[i + 5] = -1;
      conf_set.arr[tail + 5] = i;
      conf_set.arr[3] = i;
      if (tail < 0) {
        conf_set.arr[0] = state.arr[0];
        state.arr[0] = sc_conf_56;
        return sc_conf_56;
      } else {
        return new SC_NSNull();
      }
    };
    BgL_sc_confzd2setzd2adjoinza2_45za2 = (
      sc_states_57,
      BgL_sc_statezd2num_58zd2,
      l,
      i
    ) => {
      //debugLog('This is BgL_sc_confzd2setzd2adjoinza2_45za2')
      let conf_set: sc_Vector;
      let sc_conf_59: number;
      let l1:
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector;
      let state: sc_Vector;
      state = sc_states_57.arr[BgL_sc_statezd2num_58zd2] as sc_Vector;
      l1 = l;
      while (l1 instanceof sc_Pair) {
        sc_conf_59 = (l1 as sc_Pair).car as number;
        conf_set = BgL_sc_confzd2setzd2getza2_44za2(
          state,
          BgL_sc_statezd2num_58zd2,
          sc_conf_59
        );
        if (conf_set.arr[i + 5] === false) {
          conf_set_adjoin(state, conf_set, sc_conf_59, i);
          l1 = (l1 as sc_Pair).cdr;
        } else {
          l1 = (l1 as sc_Pair).cdr;
        }
      }
      return new SC_NSNull();
    };
    BgL_sc_confzd2setzd2adjoinza2za2_46z00 = (
      sc_states_60,
      BgL_sc_statesza2_61za2,
      BgL_sc_statezd2num_62zd2,
      sc_conf_63,
      i
    ) => {
      let BgL_sc_confzd2setza2_64z70: sc_Vector;
      let BgL_sc_stateza2_65za2: sc_Vector;
      let conf_set:
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector;
      let state: sc_Vector = sc_states_60.arr[
        BgL_sc_statezd2num_62zd2
      ] as sc_Vector;
      conf_set = state.arr[sc_conf_63 + 1];
      if (
        (conf_set !== false ? (conf_set as sc_Vector).arr[i + 5] : false) !==
        false
      ) {
        BgL_sc_stateza2_65za2 = BgL_sc_statesza2_61za2.arr[
          BgL_sc_statezd2num_62zd2
        ] as sc_Vector;
        BgL_sc_confzd2setza2_64z70 = BgL_sc_confzd2setzd2getza2_44za2(
          BgL_sc_stateza2_65za2,
          BgL_sc_statezd2num_62zd2,
          sc_conf_63
        );
        (BgL_sc_confzd2setza2_64z70.arr[i + 5] as boolean) === false
          ? conf_set_adjoin(
              BgL_sc_stateza2_65za2,
              BgL_sc_confzd2setza2_64z70,
              sc_conf_63,
              i
            )
          : null;
        return true;
      } else {
        return false;
      }
    };
    conf_set_union = (state, conf_set, sc_conf_66, other_set) => {
      //debugLog("This is conf_set_union");
      let i = other_set.arr[2] as number;
      while (i >= 0) {
        if (conf_set.arr[(i as number) + 5] === false) {
          conf_set_adjoin(state, conf_set, sc_conf_66, i as number);
          i = other_set.arr[(i as number) + 5] as number;
        } else {
          i = other_set.arr[(i as number) + 5] as number;
        }
      }
      return new SC_NSNull();
    };
    forw = (
      sc_states_67,
      BgL_sc_statezd2num_68zd2,
      sc_starters_69,
      sc_enders_70,
      sc_predictors_71,
      sc_steps_72,
      sc_nts_73
    ) => {
      //debugLog('This is forw')
      let next_set: sc_Vector;
      let next: number;
      let conf_set:
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector;
      let ender: number;
      let l:
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector;
      let starter_set: sc_Vector;
      let starter: number;
      let sc_l_74:
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector;
      let sc_loop1_75: (
        l:
          | sc_Pair
          | string
          | number
          | string[]
          | boolean
          | SC_NSNull
          | sc_Pair[]
          | sc_ErrorOutputPort
          | sc_Vector
      ) =>
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector;
      let head: number;
      let BgL_sc_confzd2set_76zd2: sc_Vector;
      let BgL_sc_statezd2num_77zd2: number;
      let state: sc_Vector;
      let sc_states_78: sc_Vector;
      let preds: sc_Pair;
      let BgL_sc_confzd2set_79zd2: sc_Vector;
      let step: number;
      let sc_conf_80: number;
      let BgL_sc_nbzd2nts_81zd2: number;
      let sc_state_82: sc_Vector;
      sc_state_82 = sc_states_67.arr[BgL_sc_statezd2num_68zd2] as sc_Vector;
      BgL_sc_nbzd2nts_81zd2 = sc_nts_73.length;
      while (true) {
        sc_conf_80 = sc_state_82.arr[0] as number;
        if (sc_conf_80 >= 0) {
          step = sc_steps_72.arr[sc_conf_80] as number;
          BgL_sc_confzd2set_79zd2 = sc_state_82.arr[
            sc_conf_80 + 1
          ] as sc_Vector;
          head = BgL_sc_confzd2set_79zd2.arr[4] as number;
          sc_state_82.arr[0] = BgL_sc_confzd2set_79zd2.arr[0];
          conf_set_merge_new_bang(BgL_sc_confzd2set_79zd2);
          if (step >= 0) {
            sc_l_74 = sc_starters_69.arr[step];
            while (sc_l_74 instanceof sc_Pair) {
              starter = (sc_l_74 as sc_Pair).car as number;
              starter_set = BgL_sc_confzd2setzd2getza2_44za2(
                sc_state_82,
                BgL_sc_statezd2num_68zd2,
                starter
              );
              if (starter_set.arr[BgL_sc_statezd2num_68zd2 + 5] === false) {
                conf_set_adjoin(
                  sc_state_82,
                  starter_set,
                  starter,
                  BgL_sc_statezd2num_68zd2
                );
                sc_l_74 = (sc_l_74 as sc_Pair).cdr as sc_Pair;
              } else {
                sc_l_74 = (sc_l_74 as sc_Pair).cdr as sc_Pair;
              }
            }
            l = sc_enders_70.arr[step];
            while (l instanceof sc_Pair) {
              ender = (l as sc_Pair).car as number;
              conf_set = sc_state_82.arr[ender + 1];
              if (
                (conf_set !== false
                  ? (conf_set as sc_Vector).arr[BgL_sc_statezd2num_68zd2 + 5]
                  : false) !== false
              ) {
                next = sc_conf_80 + 1;
                next_set = BgL_sc_confzd2setzd2getza2_44za2(
                  sc_state_82,
                  BgL_sc_statezd2num_68zd2,
                  next
                );
                conf_set_union(
                  sc_state_82,
                  next_set,
                  next,
                  BgL_sc_confzd2set_79zd2
                );
                l = (l as sc_Pair).cdr;
              } else {
                l = (l as sc_Pair).cdr;
              }
            }
          } else {
            preds = sc_predictors_71.arr[
              step + BgL_sc_nbzd2nts_81zd2
            ] as sc_Pair;
            sc_states_78 = sc_states_67;
            state = sc_state_82;
            BgL_sc_statezd2num_77zd2 = BgL_sc_statezd2num_68zd2;
            BgL_sc_confzd2set_76zd2 = BgL_sc_confzd2set_79zd2;
            sc_loop1_75 = (l) => {
              let sc_state_83: sc_Vector;
              let BgL_sc_nextzd2set_84zd2: sc_Vector;
              let sc_next_85: number;
              let pred_set:
                | sc_Pair
                | string
                | number
                | string[]
                | boolean
                | SC_NSNull
                | sc_Pair[]
                | sc_ErrorOutputPort
                | sc_Vector;
              let i: number;
              let pred: number;
              if (l instanceof sc_Pair) {
                pred = (l as sc_Pair).car as number;
                i = head;
                while (i >= 0) {
                  sc_state_83 = sc_states_78.arr[i] as sc_Vector;
                  pred_set = sc_state_83.arr[pred + 1];
                  if (pred_set !== false) {
                    sc_next_85 = pred + 1;
                    BgL_sc_nextzd2set_84zd2 = BgL_sc_confzd2setzd2getza2_44za2(
                      state,
                      BgL_sc_statezd2num_77zd2,
                      sc_next_85
                    );
                    conf_set_union(
                      state,
                      BgL_sc_nextzd2set_84zd2,
                      sc_next_85,
                      pred_set as sc_Vector
                    );
                  }
                  i = BgL_sc_confzd2set_76zd2.arr[i + 5] as number;
                }
                return sc_loop1_75((l as sc_Pair).cdr as sc_Pair);
              } else {
                return new SC_NSNull();
              }
            };
            sc_loop1_75(preds);
          }
        } else {
          return new SC_NSNull();
        }
      }
    };

    sc_nts_42 = parser_descr[1] as string[];
    sc_starters_41 = parser_descr[2] as sc_Vector;
    sc_enders_40 = parser_descr[3] as sc_Vector;
    sc_predictors_39 = parser_descr[4] as sc_Vector;
    sc_steps_38 = parser_descr[5] as sc_Vector;
    sc_names_37 = parser_descr[6] as sc_Vector;
    falseHead1128 = new sc_Pair(new SC_NSNull(), new SC_NSNull());
    L1125 = lexer(input);
    tail1129 = falseHead1128;

    while (!(L1125 instanceof SC_NSNull)) {
      tok = (L1125 as sc_Pair).car as sc_Pair;
      let l1 = tok.cdr;
      let l2:
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector = new SC_NSNull();
      while (l1 instanceof sc_Pair) {
        sc_i_29 = sc_ind_43((l1 as sc_Pair).car, sc_nts_42);
        if (sc_i_29 !== false) {
          l1 = (l1 as sc_Pair).cdr;
          l2 = new sc_Pair(sc_i_29, l2);
        } else {
          l1 = (l1 as sc_Pair).cdr;
        }
      }
      sc_optrOpnd_22 = new sc_Pair(tok.car, sc_reverse(l2));
      sc_optrOpnd_21 = new sc_Pair(sc_optrOpnd_22, new SC_NSNull());
      tail1129.cdr = sc_optrOpnd_21;
      tail1129 = tail1129.cdr as sc_Pair;
      L1125 = (L1125 as sc_Pair).cdr;
    }
    sc_optrOpnd_20 = falseHead1128.cdr as sc_Pair;
    sc_toks_36 = sc_list2vector(sc_optrOpnd_20);
    BgL_sc_nbzd2toks_35zd2 = sc_toks_36.arr.length;
    BgL_sc_nbzd2confs_34zd2 = sc_steps_38.arr.length;
    sc_states_33 = make_states(BgL_sc_nbzd2toks_35zd2, BgL_sc_nbzd2confs_34zd2);
    goal_starters = sc_starters_41.arr[0] as sc_Pair;
    BgL_sc_confzd2setzd2adjoinza2_45za2(sc_states_33, 0, goal_starters, 0);
    forw(
      sc_states_33,
      0,
      sc_starters_41,
      sc_enders_40,
      sc_predictors_39,
      sc_steps_38,
      sc_nts_42
    );
    sc_i_28 = 0;
    while (sc_i_28 < BgL_sc_nbzd2toks_35zd2) {
      tok_nts = (sc_toks_36.arr[sc_i_28] as sc_Pair).cdr;
      BgL_sc_confzd2setzd2adjoinza2_45za2(
        sc_states_33,
        sc_i_28 + 1,
        tok_nts as sc_Pair,
        sc_i_28
      );
      forw(
        sc_states_33,
        sc_i_28 + 1,
        sc_starters_41,
        sc_enders_40,
        sc_predictors_39,
        sc_steps_38,
        sc_nts_42
      );
      sc_i_28 += 1;
    }
    nb_toks = sc_toks_36.arr.length;
    BgL_sc_nbzd2confs_32zd2 = sc_steps_38.arr.length;
    BgL_sc_nbzd2nts_31zd2 = sc_nts_42.length;
    BgL_sc_statesza2_30za2 = make_states(nb_toks, BgL_sc_nbzd2confs_32zd2);
    goal_enders = sc_enders_40.arr[0] as sc_Pair;
    l = goal_enders;
    while (l instanceof sc_Pair) {
      conf = (l as sc_Pair).car as number;
      BgL_sc_confzd2setzd2adjoinza2za2_46z00(
        sc_states_33,
        BgL_sc_statesza2_30za2,
        nb_toks,
        conf,
        0
      );
      l = (l as sc_Pair).cdr;
    }
    i = nb_toks;
    while (i >= 0) {
      states = sc_states_33;
      BgL_sc_statesza2_27za2 = BgL_sc_statesza2_30za2;
      state_num = i;
      sc_enders_26 = sc_enders_40;
      sc_steps_25 = sc_steps_38;
      BgL_sc_nbzd2nts_24zd2 = BgL_sc_nbzd2nts_31zd2;
      toks = sc_toks_36;
      BgL_sc_stateza2_23za2 = BgL_sc_statesza2_30za2.arr[i] as sc_Vector;
      loop1 = () => {
        let sc_loop1_127: (
          paramL:
            | sc_Pair
            | string
            | number
            | string[]
            | boolean
            | SC_NSNull
            | sc_Pair[]
            | sc_ErrorOutputPort
            | sc_Vector
        ) =>
          | sc_Pair
          | string
          | number
          | string[]
          | boolean
          | SC_NSNull
          | sc_Pair[]
          | sc_ErrorOutputPort
          | sc_Vector;
        let prev: number;
        let BgL_sc_statesza2_128za2: sc_Vector;
        let sc_states_129: sc_Vector;
        let j: number;
        let i: number;
        let sc_i_130: number;
        let head: number;

        let conf_set: sc_Vector;
        let sc_conf_131 = BgL_sc_stateza2_23za2.arr[0] as number;
        if (sc_conf_131 >= 0) {
          conf_set = BgL_sc_stateza2_23za2.arr[sc_conf_131 + 1] as sc_Vector;
          head = conf_set.arr[4] as number;
          BgL_sc_stateza2_23za2.arr[0] = conf_set.arr[0];
          conf_set_merge_new_bang(conf_set);
          sc_i_130 = head;
          while (sc_i_130 >= 0) {
            i = sc_i_130;
            j = state_num;
            sc_states_129 = states;
            BgL_sc_statesza2_128za2 = BgL_sc_statesza2_27za2;
            prev = sc_conf_131 - 1;
            if (
              sc_conf_131 >= BgL_sc_nbzd2nts_24zd2 &&
              (sc_steps_25.arr[prev] as number) >= 0
            ) {
              sc_loop1_127 = (paramL) => {
                let k: number;
                let ender_set:
                  | sc_Pair
                  | string
                  | number
                  | string[]
                  | boolean
                  | SC_NSNull
                  | sc_Pair[]
                  | sc_ErrorOutputPort
                  | sc_Vector;
                let state: sc_Vector;
                let ender: number;
                let l:
                  | sc_Pair
                  | string
                  | number
                  | string[]
                  | boolean
                  | SC_NSNull
                  | sc_Pair[]
                  | sc_ErrorOutputPort
                  | sc_Vector = paramL;
                while (true) {
                  if (l instanceof sc_Pair) {
                    ender = (l as sc_Pair).car as number;
                    state = sc_states_129.arr[j] as sc_Vector;
                    ender_set = state.arr[ender + 1] as
                      | sc_Pair
                      | string
                      | number
                      | string[]
                      | boolean
                      | SC_NSNull
                      | sc_Pair[]
                      | sc_ErrorOutputPort
                      | sc_Vector;
                    if (ender_set !== false) {
                      k = (ender_set as sc_Vector).arr[2] as number;
                      while (k >= 0) {
                        if (k >= i) {
                          if (
                            BgL_sc_confzd2setzd2adjoinza2za2_46z00(
                              sc_states_129,
                              BgL_sc_statesza2_128za2,
                              k,
                              prev,
                              i
                            ) !== false
                          ) {
                            BgL_sc_confzd2setzd2adjoinza2za2_46z00(
                              sc_states_129,
                              BgL_sc_statesza2_128za2,
                              j,
                              ender,
                              k
                            );
                          }
                        }
                        k = (ender_set as sc_Vector).arr[k + 5] as number;
                      }
                      return sc_loop1_127((l as sc_Pair).cdr as sc_Pair);
                    } else {
                      l = (l as sc_Pair).cdr as sc_Pair as
                        | sc_Pair
                        | string
                        | number
                        | string[]
                        | boolean
                        | SC_NSNull
                        | sc_Pair[]
                        | sc_ErrorOutputPort
                        | sc_Vector;
                    }
                  } else {
                    return new SC_NSNull();
                  }
                }
              };
              sc_loop1_127(
                sc_enders_26.arr[sc_steps_25.arr[prev] as number] as sc_Pair
              );
            }
            sc_i_130 = conf_set.arr[sc_i_130 + 5] as number;
          }
          return loop1();
        } else {
          return new SC_NSNull();
        }
      };
      loop1();
      i -= 1;
    }
    optrOpnd = BgL_sc_statesza2_30za2;
    return [
      sc_nts_42,
      sc_starters_41,
      sc_enders_40,
      sc_predictors_39,
      sc_steps_38,
      sc_names_37,
      sc_toks_36,
      optrOpnd,
      0,
      0,
      0,
    ];
  };
}

function ind(
  nt: string,
  sc_nts_10: string[]
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  //debugLog('This is ind')
  let i = sc_nts_10.length - 1;
  while (true) {
    if (i >= 0) {
      if (sc_isEqual(sc_nts_10[i], nt)) {
        return i;
      } else {
        i -= 1;
      }
    } else {
      return false;
    }
  }
}

function test(k: number): number {
  //debugLog('This is test')
  let const_earley = new sc_Pair(
    new sc_Pair(
      "\u1E9Cs",
      new sc_Pair(
        new sc_Pair("\u1E9Ca", new SC_NSNull()),
        new sc_Pair(
          new sc_Pair("\u1E9Cs", new sc_Pair("\u1E9Cs", new SC_NSNull())),
          new SC_NSNull()
        )
      )
    ),
    new SC_NSNull()
  );
  let x: Array<
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector[]
  >;
  let p: (
    input: sc_Pair
  ) => Array<
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector[]
  >;
  p = BgL_makezd2parserzd2(const_earley, lexer);
  x = p(sc_vector2list(sc_makeVector(k, "\u1E9Ca")) as sc_Pair);
  let result = sc_length(
    BgL_parsezd2ze3treesz31(x, "\u1E9Cs", 0, k) as sc_Pair
  );
  return result;
}

function lexer(l: sc_Pair): sc_Pair {
  let sc_x_134: string;
  let falseHead1133: sc_Pair = new sc_Pair(new SC_NSNull(), new SC_NSNull());
  let tail1134 = falseHead1133;
  let L1130:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector = l;
  while (!(L1130 instanceof SC_NSNull)) {
    sc_x_134 = (L1130 as sc_Pair).car as string;
    tail1134.cdr = new sc_Pair(sc_list(sc_x_134, sc_x_134), new SC_NSNull());
    tail1134 = tail1134.cdr as sc_Pair;
    L1130 = (L1130 as sc_Pair).cdr;
  }
  return falseHead1133.cdr as sc_Pair;
}

function deriv_trees(
  sc_conf_91: number,
  i: number,
  j: number,
  sc_enders_92: sc_Vector,
  sc_steps_93: sc_Vector,
  sc_names_94: sc_Vector,
  sc_toks_95: sc_Pair[],
  sc_states_96: sc_Vector,
  BgL_sc_nbzd2nts_97zd2: number
): sc_Pair {
  //debugLog("This is deriv_trees")
  let sc_loop1_98: (
    l1_param:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector,
    l2_param:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector
  ) =>
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let prev: number;
  let name:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector = sc_names_94.arr[sc_conf_91];
  if (name !== false) {
    if (sc_conf_91 < BgL_sc_nbzd2nts_97zd2) {
      return sc_list(
        sc_list(name as sc_Pair, sc_toks_95[i].car as sc_Pair | string | number)
      ) as sc_Pair;
    } else {
      return sc_list(sc_list(name as sc_Pair)) as sc_Pair;
    }
  } else {
    prev = sc_conf_91 - 1;
    sc_loop1_98 = (l1_param, l2_param) => {
      //debugLog("This is sc_loop1_98")
      let loop2: (
        paramK: number,
        paramL2:
          | sc_Pair
          | string
          | number
          | string[]
          | boolean
          | SC_NSNull
          | sc_Pair[]
          | sc_ErrorOutputPort
          | sc_Vector
      ) =>
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector;
      let ender_set:
        | sc_Pair
        | string
        | number
        | string[]
        | boolean
        | SC_NSNull
        | sc_Pair[]
        | sc_ErrorOutputPort
        | sc_Vector;
      let state: sc_Vector;
      let ender: number;
      let l1 = l1_param;
      let l2 = l2_param;
      while (true) {
        if (l1 instanceof sc_Pair) {
          ender = (l1 as sc_Pair).car as number;
          state = sc_states_96.arr[j] as sc_Vector;
          ender_set = state.arr[ender + 1];
          if (ender_set !== false) {
            loop2 = (paramK, paramL2) => {
              let loop3: (
                l3:
                  | sc_Pair
                  | string
                  | number
                  | string[]
                  | boolean
                  | SC_NSNull
                  | sc_Pair[]
                  | sc_ErrorOutputPort
                  | sc_Vector,
                l2:
                  | sc_Pair
                  | string
                  | number
                  | string[]
                  | boolean
                  | SC_NSNull
                  | sc_Pair[]
                  | sc_ErrorOutputPort
                  | sc_Vector
              ) =>
                | sc_Pair
                | string
                | number
                | string[]
                | boolean
                | SC_NSNull
                | sc_Pair[]
                | sc_ErrorOutputPort
                | sc_Vector;
              let ender_trees: sc_Pair;
              let prev_trees: sc_Pair;
              let conf_set:
                | sc_Pair
                | string
                | number
                | string[]
                | boolean
                | SC_NSNull
                | sc_Pair[]
                | sc_ErrorOutputPort
                | sc_Vector;
              let sc_state_99: sc_Vector;
              let k: number = paramK;
              let l2:
                | sc_Pair
                | string
                | number
                | string[]
                | boolean
                | SC_NSNull
                | sc_Pair[]
                | sc_ErrorOutputPort
                | sc_Vector = paramL2;
              while (true) {
                if (k >= 0) {
                  sc_state_99 = sc_states_96.arr[k] as sc_Vector;
                  conf_set = sc_state_99.arr[prev + 1];
                  if (
                    k >= i &&
                    (conf_set !== false
                      ? (conf_set as sc_Vector).arr[i + 5]
                      : false) !== false
                  ) {
                    prev_trees = deriv_trees(
                      prev,
                      i,
                      k,
                      sc_enders_92,
                      sc_steps_93,
                      sc_names_94,
                      sc_toks_95,
                      sc_states_96,
                      BgL_sc_nbzd2nts_97zd2
                    );
                    ender_trees = deriv_trees(
                      ender,
                      k,
                      j,
                      sc_enders_92,
                      sc_steps_93,
                      sc_names_94,
                      sc_toks_95,
                      sc_states_96,
                      BgL_sc_nbzd2nts_97zd2
                    );
                    loop3 = (l3, l2) => {
                      let l4:
                        | sc_Pair
                        | string
                        | number
                        | string[]
                        | boolean
                        | SC_NSNull
                        | sc_Pair[]
                        | sc_ErrorOutputPort
                        | sc_Vector;
                      let sc_l2_100:
                        | sc_Pair
                        | string
                        | number
                        | string[]
                        | boolean
                        | SC_NSNull
                        | sc_Pair[]
                        | sc_ErrorOutputPort
                        | sc_Vector;
                      let ender_tree: sc_Pair;
                      if (l3 instanceof sc_Pair) {
                        ender_tree = sc_list(
                          (l3 as sc_Pair).car as sc_Pair | string | number
                        ) as sc_Pair;
                        l4 = prev_trees;
                        sc_l2_100 = l2;
                        while (l4 instanceof sc_Pair) {
                          sc_l2_100 = new sc_Pair(
                            sc_append(
                              (l4 as sc_Pair).car as sc_Pair,
                              ender_tree
                            ),
                            sc_l2_100
                          );
                          l4 = (l4 as sc_Pair).cdr as sc_Pair;
                        }
                        return loop3((l3 as sc_Pair).cdr, sc_l2_100);
                      } else {
                        return loop2(
                          (ender_set as sc_Vector).arr[k + 5] as number,
                          l2
                        ) as
                          | sc_Pair
                          | string
                          | number
                          | string[]
                          | boolean
                          | SC_NSNull
                          | sc_Pair[]
                          | sc_ErrorOutputPort
                          | sc_Vector;
                      }
                    };
                    return loop3(ender_trees, l2);
                  } else {
                    k = (ender_set as sc_Vector).arr[k + 5] as number;
                  }
                } else {
                  return sc_loop1_98((l1 as sc_Pair).cdr, l2);
                }
              }
            };
            return loop2((ender_set as sc_Vector).arr[2] as number, l2);
          } else {
            l1 = (l1 as sc_Pair).cdr;
          }
        } else {
          return l2;
        }
      }
    };
    return sc_loop1_98(
      sc_enders_92.arr[sc_steps_93.arr[prev] as number],
      new SC_NSNull()
    ) as sc_Pair;
  }
}

function BgL_sc_derivzd2treesza2_47z70(
  nt: string,
  i: number,
  j: number,
  sc_nts_101: string[],
  sc_enders_102: sc_Vector,
  sc_steps_103: sc_Vector,
  sc_names_104: sc_Vector,
  sc_toks_105: sc_Pair[],
  sc_states_106: sc_Vector
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  //debugLog('This is BgL_sc_derivzd2treesza2_47z70')
  let conf_set:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let state: sc_Vector;
  let sc_conf_107: number;
  let l:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let trees: sc_Pair | SC_NSNull;
  let BgL_sc_nbzd2nts_108zd2: number;
  let BgL_sc_ntza2_109za2:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  BgL_sc_ntza2_109za2 = sc_ind_43(nt, sc_nts_101);
  if (BgL_sc_ntza2_109za2 !== false) {
    BgL_sc_nbzd2nts_108zd2 = sc_nts_101.length;
    l = sc_enders_102.arr[BgL_sc_ntza2_109za2 as number];
    trees = new SC_NSNull();
    while (l instanceof sc_Pair) {
      sc_conf_107 = (l as sc_Pair).car as number;
      state = sc_states_106.arr[j] as sc_Vector;
      conf_set = state.arr[sc_conf_107 + 1];

      if (
        (conf_set !== false ? (conf_set as sc_Vector).arr[i + 5] : false) !==
        false
      ) {
        l = (l as sc_Pair).cdr as sc_Pair;
        trees = sc_append(
          deriv_trees(
            sc_conf_107,
            i,
            j,
            sc_enders_102,
            sc_steps_103,
            sc_names_104,
            sc_toks_105,
            sc_states_106,
            BgL_sc_nbzd2nts_108zd2
          ),
          trees
        ) as sc_Pair;
      } else {
        l = (l as sc_Pair).cdr as sc_Pair;
      }
    }
    return trees;
  } else {
    return false;
  }
}

function BgL_parsezd2ze3treesz31(
  parse: Array<
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector[]
  >,
  nt: string,
  i: number,
  j: number
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  //debugLog('This is BgL_parsezd2ze3treesz31')
  let states: sc_Vector;
  let toks: sc_Pair[];
  let names: sc_Vector;
  let steps: sc_Vector;
  let enders: sc_Vector;
  let nts: string[];
  nts = parse[0] as string[];
  enders = parse[2] as sc_Vector;
  steps = parse[4] as sc_Vector;
  names = parse[5] as sc_Vector;
  toks = (parse[6] as sc_Vector).arr as sc_Pair[];
  states = parse[7] as sc_Vector;
  return BgL_sc_derivzd2treesza2_47z70(
    nt,
    i,
    j,
    nts,
    enders,
    steps,
    names,
    toks,
    states
  );
}

function sc_ind_43(
  nt:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  sc_nts_49: string[]
): number | boolean {
  //debugLog('This is sc_ind_43')
  let i: number = sc_nts_49.length - 1;
  while (true) {
    if (i >= 0) {
      if (sc_isEqual(sc_nts_49[i], nt)) {
        return i;
      } else {
        i -= 1;
      }
    } else {
      return false;
    }
  }
}

function sc_number2jsstring(x: number): string {
  //debugLog('This is sc_number2jsstring')
  return x.toString();
}

class sc_ErrorOutputPort {
  appendJSString(
    s:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector
  ) {
    return;
  }
  close() {}
}

let SC_DEFAULT_OUT = new sc_ErrorOutputPort();

function sc_toWriteString(
  o:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): string {
  //debugLog('This is sc_toWriteString')

  if (o instanceof SC_NSNull) {
    return "()";
  } else if (typeof o === "boolean") {
    if (o === true) {
      return "#t";
    }
    return "#f";
  } else if (typeof o === "number") {
    return o.toString();
  }
  return "";
}

function sc_toDisplayString(
  o:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): string {
  //debugLog('This is sc_toDisplayString')

  if (o instanceof SC_NSNull) {
    return "()";
  } else if (typeof o === "boolean") {
    if (o === true) {
      return "#t";
    }
    return "#f";
  } else if (typeof o === "number") {
    return o.toString();
  }
  return "";
}

function sc_list(...args: (sc_Pair | string | number)[]): sc_Pair {
  let res:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector = new SC_NSNull();
  let i = args.length - 1;
  while (i >= 0) {
    res = new sc_Pair(args[i], res);
    i -= 1;
  }
  return res as sc_Pair;
}

function sc_write(
  o:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  p?:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): void {
  //debugLog('This is sc_write')

  let p1 = p;
  if (p1 instanceof SC_NSNull) {
    p1 = SC_DEFAULT_OUT;
  }
  (p1 as sc_ErrorOutputPort).appendJSString(sc_toWriteString(o));
}

function sc_display(
  o:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  p:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): void {
  //debugLog('This is sc_display')

  let p1 = p;
  if (p1 instanceof SC_NSNull) {
    p1 = SC_DEFAULT_OUT;
  }
  (p1 as sc_ErrorOutputPort).appendJSString(sc_toDisplayString(o));
}

function sc_isNumber(
  n:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): boolean {
  return typeof n === "number";
}

function sc_cons(
  car:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  cdr:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): sc_Pair {
  return new sc_Pair(car, cdr);
}

function sc_isPair(
  p:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): boolean {
  return p instanceof sc_Pair;
}

function sc_isPairEqual(
  p1: sc_Pair,
  p2: sc_Pair,
  comp: (
    a:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector,
    b:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector
  ) => boolean
): boolean {
  return comp(p1.car, p2.car) && comp(p1.cdr, p2.cdr);
}

function sc_isVectorEqual(
  v1: sc_Vector,
  v2: sc_Vector,
  comp: (
    a:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector,
    b:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector
  ) => boolean
): boolean {
  if (v1.arr.length !== v2.arr.length) {
    return false;
  }
  for (let i = 0; i < v1.arr.length; i++) {
    if (!comp(v1.arr[i], v2.arr[i])) {
      return false;
    }
  }
  return true;
}

function sc_isVector(
  v:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): boolean {
  return v instanceof sc_Vector;
}

function sc_isEqual(
  o1:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  o2:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): boolean {
  let result_any: boolean;
  let result_Pair: boolean;
  let result_Vector: boolean;
  let result_String: boolean;

  result_String =
    typeof o1 === "string" &&
    typeof o2 === "string" &&
    (o1 as string) == (o2 as string);
  result_any = o1 === o2;
  result_Pair =
    sc_isPair(o1) &&
    sc_isPair(o2) &&
    sc_isPairEqual(o1 as sc_Pair, o2 as sc_Pair, sc_isEqual);
  result_Vector =
    sc_isVector(o1) &&
    sc_isVector(o2) &&
    sc_isVectorEqual(o1 as sc_Vector, o2 as sc_Vector, sc_isEqual);
  if (result_any || result_Pair || result_Vector || result_String) {
    return true;
  } else {
    return false;
  }
}

function sc_assq(
  o: string,
  al:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  let aln:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector = al;

  while (!(aln instanceof SC_NSNull)) {
    if ((((aln as sc_Pair).car as sc_Pair).car as string) === o) {
      return (aln as sc_Pair).car;
    }
    aln = (aln as sc_Pair).cdr;
  }
  return false;
}

function BgL_sc_symbolzd2ze3symbolzd2record_1ze3_nboyer(
  sym: string
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  //debugLog('This is BgL_sc_symbolzd2ze3symbolzd2record_1ze3_nboyer');
  let r:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let x:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  x = sc_assq(sym, BgL_sc_za2symbolzd2recordszd2alistza2_2z00_nboyer);
  if (x instanceof sc_Pair) {
    return (x as sc_Pair).cdr;
  } else {
    r = new sc_Vector([sym, new SC_NSNull()]);
    BgL_sc_za2symbolzd2recordszd2alistza2_2z00_nboyer = new sc_Pair(
      new sc_Pair(sym, r),
      BgL_sc_za2symbolzd2recordszd2alistza2_2z00_nboyer
    );
    return r;
  }
}

function translate_term_nboyer(
  term:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  //debugLog('This is translate_term_nboyer');
  let lst:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let cdr_value:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  if (!(term instanceof sc_Pair)) {
    return term;
  }
  lst = (term as sc_Pair).cdr;
  if (lst instanceof SC_NSNull) {
    cdr_value = new SC_NSNull();
    return new sc_Pair(
      BgL_sc_symbolzd2ze3symbolzd2record_1ze3_nboyer(
        (term as sc_Pair).car as string
      ),
      cdr_value
    );
  } else {
    return new sc_Pair(
      BgL_sc_symbolzd2ze3symbolzd2record_1ze3_nboyer(
        (term as sc_Pair).car as string
      ),
      new sc_Pair(
        translate_term_nboyer((lst as sc_Pair).car),
        translate_args_nboyer((lst as sc_Pair).cdr)
      )
    );
  }
}

function translate_args_nboyer(
  lst:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  //debugLog('This is translate_args_nboyer');
  let sc_lst_5:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let term:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let car_value:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let cdr_value:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  if (lst instanceof SC_NSNull) {
    return new SC_NSNull();
  }
  term = (lst as sc_Pair).car;
  car_value = !(term instanceof sc_Pair)
    ? term
    : new sc_Pair(
        BgL_sc_symbolzd2ze3symbolzd2record_1ze3_nboyer(
          (term as sc_Pair).car as string
        ),
        translate_args_nboyer((term as sc_Pair).cdr)
      );
  sc_lst_5 = (lst as sc_Pair).cdr;
  if (sc_lst_5 instanceof SC_NSNull) {
    cdr_value = new SC_NSNull();
  } else {
    cdr_value = new sc_Pair(
      translate_term_nboyer((sc_lst_5 as sc_Pair).car),
      translate_args_nboyer((sc_lst_5 as sc_Pair).cdr)
    );
  }
  return new sc_Pair(car_value, cdr_value);
}

function apply_subst_nboyer(
  alist:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  term:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  let lst:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let temp_temp:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  if (!(term instanceof sc_Pair)) {
    temp_temp = sc_assq(term as string, alist);
    if (temp_temp instanceof sc_Pair) {
      return (temp_temp as sc_Pair).cdr;
    } else {
      return term;
    }
  } else {
    lst = (term as sc_Pair).cdr;
    if (lst instanceof SC_NSNull) {
      return new sc_Pair((term as sc_Pair).car, new SC_NSNull());
    } else {
      return new sc_Pair(
        (term as sc_Pair).car,
        new sc_Pair(
          apply_subst_nboyer(alist, (lst as sc_Pair).car),
          apply_subst_lst_nboyer(alist, (lst as sc_Pair).cdr)
        )
      );
    }
  }
}

function is_term_member_nboyer(
  x:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  lst:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): boolean {
  //debugLog('This is is_term_member_nboyer');
  let temp_lst = lst;
  while (true) {
    if (temp_lst instanceof SC_NSNull) {
      return false;
    } else if (is_term_equal_nboyer(x, (temp_lst as sc_Pair).car) !== false) {
      return true;
    } else {
      temp_lst = (temp_lst as sc_Pair).cdr;
    }
  }
}

function is_term_equal_nboyer(
  x:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  y:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): boolean {
  let lst1:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let lst2:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let r2:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  let r1:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector;
  if (x instanceof sc_Pair) {
    if (y instanceof sc_Pair) {
      r1 = (x as sc_Pair).car;
      r2 = (y as sc_Pair).car;
      if ((r1 === r2) !== false) {
        lst1 = (x as sc_Pair).cdr;
        lst2 = (y as sc_Pair).cdr;
        while (true) {
          if (lst1 instanceof SC_NSNull) {
            return lst2 instanceof SC_NSNull;
          } else if (lst2 instanceof SC_NSNull) {
            return false;
          } else if (
            is_term_equal_nboyer(
              (lst1 as sc_Pair).car,
              (lst2 as sc_Pair).car
            ) !== false
          ) {
            lst1 = (lst1 as sc_Pair).cdr;
            lst2 = (lst2 as sc_Pair).cdr;
          } else {
            return false;
          }
        }
      } else {
        return false;
      }
    } else {
      return false;
    }
  } else {
    return sc_isEqual(x, y);
  }
}

function sc_member(
  o:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  l:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  let current:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector = l;

  while (current instanceof sc_Pair) {
    if (
      sc_isEqual(
        (current as sc_Pair).car as
          | sc_Pair
          | string
          | number
          | string[]
          | boolean
          | SC_NSNull
          | sc_Pair[]
          | sc_ErrorOutputPort
          | sc_Vector,
        o
      )
    ) {
      return current;
    }
    current = (current as sc_Pair).cdr;
  }
  return false;
}

function sc_makeVector(
  size: number,
  fill:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
): sc_Vector {
  let nullArr: Array<
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
  > = [];
  for (let i = 0; i < size; i++) {
    nullArr.push(new SC_NSNull());
  }
  let a: sc_Vector = new sc_Vector(nullArr);
  if (!(fill instanceof SC_NSNull)) {
    let i = 0;
    while (i < a.arr.length) {
      a.arr[i] = fill;
      i += 1;
    }
  }
  return a;
}

function sc_vector2list(
  a: sc_Vector
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  let res:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector = new SC_NSNull();
  let i = a.arr.length - 1;
  while (i >= 0) {
    res = sc_cons(a.arr[i], res);
    i -= 1;
  }
  return res;
}

function sc_list2vector(l: sc_Pair): sc_Vector {
  let a: sc_Vector = new sc_Vector([]);
  let list:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector = l;
  while (!(list instanceof SC_NSNull)) {
    a.arr.push((list as sc_Pair).car);
    list = (list as sc_Pair).cdr;
  }
  return a;
}

function sc_length(l: sc_Pair): number {
  let res = 0;
  let l1:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector = l;
  while (!(l1 instanceof SC_NSNull)) {
    res += 1;
    l1 = (l1 as sc_Pair).cdr;
  }
  return res;
}

function sc_reverseAppendBang(
  l1: sc_Pair | null,
  l2: sc_Pair | null
): sc_Pair | null {
  let res = l2;
  let current = l1;
  while (!(current instanceof SC_NSNull)) {
    let tmp = res;
    res = current;
    current = (current as sc_Pair).cdr as sc_Pair;
    (res as sc_Pair).cdr = tmp as Object;
  }
  return res;
}

function sc_dualAppend(l1: sc_Pair | null, l2: sc_Pair | null): sc_Pair | null {
  if (l1 === null) {
    return l2;
  }
  if (l2 === null) {
    return l1;
  }
  let rev:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector = sc_reverse(l1);
  return sc_reverseAppendBang(rev as sc_Pair, l2);
}

function sc_append(
  ...args: (sc_Pair | SC_NSNull)[]
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  if (args.length === 0) {
    return new SC_NSNull();
  }
  let res:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector = args[args.length - 1];
  let i = args.length - 2;
  while (i >= 0) {
    res = sc_dualAppend(args[i] as sc_Pair, res as sc_Pair) as
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
    i -= 1;
  }
  return res;
}

function sc_reverse(
  l1:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
):
  | sc_Pair
  | string
  | number
  | string[]
  | boolean
  | SC_NSNull
  | sc_Pair[]
  | sc_ErrorOutputPort
  | sc_Vector {
  let res:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector = new SC_NSNull();
  let current:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector = l1;
  while (!(current instanceof SC_NSNull)) {
    res = sc_cons((current as sc_Pair).car, res);
    current = (current as sc_Pair).cdr as
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector;
  }
  return res;
}

function BgL_earleyzd2benchmarkzd2(...argumentsAry: string[]) {
  //debugLog('This is BgL_earleyzd2benchmarkzd2')

  let args:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector = new SC_NSNull();
  let sc_tmp = argumentsAry.length - 1;
  while (sc_tmp >= 0) {
    args = sc_cons(argumentsAry[sc_tmp], args);
    sc_tmp -= 1;
  }
  let k: number =
    args instanceof SC_NSNull ? 7 : ((args as sc_Pair).car as number);
  let warn: (
    result:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector
  ) => boolean = (result) => {
    sc_display(result, new SC_NSNull());
    sc_newline(new SC_NSNull());
    return result == 132;
  };
  let run: () => number = () => {
    return test(k);
  };
  return BgL_runzd2benchmarkzd2("earley", 1, run, warn);
}

function sc_newline(
  p?:
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
) {
  let p1 = p;
  if (p1 instanceof SC_NSNull) {
    // we assume not given
    p1 = SC_DEFAULT_OUT;
  }
  (p1 as sc_ErrorOutputPort).appendJSString("\n");
}

function RunBenchmark(
  name: string,
  count: number,
  run: () =>
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector,
  warn: (
    param:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector
  ) => boolean
): void {
  //debugLog('This is RunBenchmark')
  for (let n = 0; n < count; ++n) {
    let result:
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector = run();
    //debugLog("result: " + result)
    if (!warn(result)) {
      return;
    }
  }
}

let BgL_runzd2benchmarkzd2 = RunBenchmark;
/*
 * @State
 */
class Benchmark {
  /*
   *@Benchmark
   */
  runIteration() {
    BgL_earleyzd2benchmarkzd2();
    BgL_nboyerzd2benchmarkzd2();
  }
}

class sc_Vector {
  arr: Array<
    | sc_Pair
    | string
    | number
    | string[]
    | boolean
    | SC_NSNull
    | sc_Pair[]
    | sc_ErrorOutputPort
    | sc_Vector
  >;
  constructor(
    arr: Array<
      | sc_Pair
      | string
      | number
      | string[]
      | boolean
      | SC_NSNull
      | sc_Pair[]
      | sc_ErrorOutputPort
      | sc_Vector
    >
  ) {
    this.arr = arr;
  }
}

function earleyBoyerRunIteration() {
  let start = ArkTools.timeInUs();
  for (let i = 0; i < 120; ++i) {
    new Benchmark().runIteration();
  }
  let end = ArkTools.timeInUs();
  print("earley-boyer: ms = " + String((end - start) / 1000));
}

declare interface ArkTools {
  timeInUs(args: number): number;
}

function debugLog(str: string) {
  const isLog = false;
  if (isLog) {
    print(str);
  }
}

earleyBoyerRunIteration();
