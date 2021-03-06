package BSML.structure;

/*Generated by MPS */

import java.util.List;
import jetbrains.mps.internal.collections.runtime.ListSequence;
import java.util.LinkedList;

public enum PriorityEnum {
  _0("HIERARCHICAL", 0),
  _1("EXPLICIT", 1);

  private final String myName;
  public String getName() {
    return myName;
  }
  private final int myValue;
  PriorityEnum(String name, int value) {
    myName = name;
    myValue = value;
  }
  public int getValue() {
    return myValue;
  }
  public String getValueAsString() {
    return Integer.toString(myValue);
  }
  public static List<PriorityEnum> getConstants() {
    List<PriorityEnum> list = ListSequence.fromList(new LinkedList<PriorityEnum>());
    ListSequence.fromList(list).addElement(PriorityEnum._0);
    ListSequence.fromList(list).addElement(PriorityEnum._1);
    return list;
  }
  public static PriorityEnum getDefault() {
    return PriorityEnum._0;
  }
  public static PriorityEnum parseValue(String value) {
    if (value == null) {
      return PriorityEnum.getDefault();
    }
    if (value.equals(PriorityEnum._0.getValueAsString())) {
      return PriorityEnum._0;
    }
    if (value.equals(PriorityEnum._1.getValueAsString())) {
      return PriorityEnum._1;
    }
    return PriorityEnum.getDefault();
  }
}
