package BSML.behavior;

/*Generated by MPS */

import jetbrains.mps.lang.core.behavior.BaseConcept_BehaviorDescriptor;
import com.mbeddr.core.base.behavior.IConfigurationItem_BehaviorDescriptor;
import org.jetbrains.mps.openapi.model.SNode;
import jetbrains.mps.smodel.behaviour.DefaultValuesHolder;

/**
 * Will be removed after 3.3
 * Need to support compilation of the legacy behavior descriptors before the language is rebuilt
 * This class is not involved in the actual method invocation
 */
@Deprecated
public class StateMachineConfigItem_BehaviorDescriptor extends BaseConcept_BehaviorDescriptor implements IConfigurationItem_BehaviorDescriptor {
  public SNode virtual_getConceptToBeCounted_7123462210703211996(SNode __thisNode__) {
    return null;
  }
  public SNode virtual_getDocNodeOrNull_1130241639304546246(SNode __thisNode__) {
    return null;
  }
  public String virtual_getDocTextOrEmpty_3857533489766146434(SNode __thisNode__) {
    return null;
  }
  public int virtual_getLOCEquivalent_7123462210702867712(SNode __thisNode__) {
    return DefaultValuesHolder.defaultValue(Integer.TYPE);
  }

  @Override
  public String getConceptFqName() {
    return "BSML.structure.StateMachineConfigItem";
  }

}
