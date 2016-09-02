package BSML.structure;

/*Generated by MPS */

import jetbrains.mps.smodel.PropertySupport;
import java.util.Iterator;
import jetbrains.mps.internal.collections.runtime.ListSequence;

public class InEventEnum_PropertySupport extends PropertySupport {
  public boolean canSetValue(String value) {
    if (value == null) {
      return true;
    }
    Iterator<InEventEnum> constants = ListSequence.fromList(InEventEnum.getConstants()).iterator();
    while (constants.hasNext()) {
      InEventEnum constant = constants.next();
      if (value.equals(constant.getName())) {
        return true;
      }
    }
    return false;
  }
  public String toInternalValue(String value) {
    if (value == null) {
      return null;
    }
    Iterator<InEventEnum> constants = ListSequence.fromList(InEventEnum.getConstants()).iterator();
    while (constants.hasNext()) {
      InEventEnum constant = constants.next();
      if (value.equals(constant.getName())) {
        return constant.getValueAsString();
      }
    }
    return null;
  }
  public String fromInternalValue(String value) {
    InEventEnum constant = InEventEnum.parseValue(value);
    if (constant != null) {
      return constant.getName();
    }
    return "";
  }
}
