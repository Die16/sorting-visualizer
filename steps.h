enum StepType {
  Compare,
  Swap,
  Set,
};

struct Step {
  StepType type;
  int i;
  int j;
};
