package BSML.structure;

/*Generated by MPS */

import jetbrains.mps.smodel.PropertySupport;
import java.util.Iterator;
import jetbrains.mps.internal.collections.runtime.ListSequence;

public class EventLifelineEnum_PropertySupport extends PropertySupport {
  public boolean canSetValue(String value) {
    if (value == null) {
      return true;
    }
    Iterator<EventLifelineEnum> constants = ListSequence.fromList(EventLifelineEnum.getConstants()).iterator();
    while (constants.hasNext()) {
      EventLifelineEnum constant = constants.next();
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
    Iterator<EventLifelineEnum> constants = ListSequence.fromList(EventLifelineEnum.getConstants()).iterator();
    while (constants.hasNext()) {
      EventLifelineEnum constant = constants.next();
      if (value.equals(constant.getName())) {
        return constant.getValueAsString();
      }
    }
    return null;
  }
  public String fromInternalValue(String value) {
    EventLifelineEnum constant = EventLifelineEnum.parseValue(value);
    if (constant != null) {
      return constant.getName();
    }
    return "";
  }
}
