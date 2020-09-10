/* Generated by Parser/pgen */

#include "pgenheaders.h"
#include "grammar.h"

static arc arcs_0_0[1] = {
    {2, 1},
};
static arc arcs_0_1[2] = {
    {3, 0},
    {4, 2},
};
static arc arcs_0_2[1] = {
    {0, 2},
};
static state states_0[3] = {
    {1, arcs_0_0},
    {2, arcs_0_1},
    {1, arcs_0_2},
};
static arc arcs_1_0[2] = {
    {5, 1},
    {6, 1},
};
static arc arcs_1_1[1] = {
    {0, 1},
};
static state states_1[2] = {
    {2, arcs_1_0},
    {1, arcs_1_1},
};
static dfa dfas[2] = {
    {256, "START", 0, 3, states_0,
     "\004"},
    {257, "ADD", 0, 2, states_1,
     "\140"},
};
static label labels[7] = {
    {0, "EMPTY"},
    {256, 0},
    {2, 0},
    {257, 0},
    {0, 0},
    {14, 0},
    {15, 0},
};

grammar _PyParser_Grammar = {
    2,
    dfas,
    {7, labels},
    256
};

grammar *
meta_grammar(void)
{
    return &_PyParser_Grammar;
}

grammar *
Py_meta_grammar(void)
{
    return meta_grammar();
}
