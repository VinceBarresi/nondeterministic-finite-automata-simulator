#Application#

Nondeterministic Finite Automata simulator. 

#NFA Summary#

An NFA is represented by a 5-tuple, (Q, Σ, Δ, q0, F)

1. A finite set of states Q
2. A finite set of input symbols Σ
3. A transition function Δ : Q × Σ → P(Q)
4. An initial (or start) state q0 ∈ Q
5. A set of states F distinguished as accepting (or final) states F ⊆ Q

#Information#
This application checks if a string of arbitrary length is accepted or rejected by the state machine.