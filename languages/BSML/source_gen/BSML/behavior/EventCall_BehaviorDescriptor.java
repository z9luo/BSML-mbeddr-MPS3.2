package BSML.behavior;

/*Generated by MPS */

import com.mbeddr.core.statements.behavior.Statement_BehaviorDescriptor;
import com.mbeddr.core.modules.behavior.ICallLike_BehaviorDescriptor;
import org.jetbrains.mps.openapi.model.SNode;
import org.jetbrains.mps.openapi.language.SConcept;
import java.util.List;
import jetbrains.mps.smodel.behaviour.DefaultValuesHolder;

/**
 * Will be removed after 3.3
 * Need to support compilation of the legacy behavior descriptors before the language is rebuilt
 * This class is not involved in the actual method invocation
 */
@Deprecated
public class EventCall_BehaviorDescriptor extends Statement_BehaviorDescriptor implements ICallLike_BehaviorDescriptor {
  public SNode virtual_getActualsLink_2963921682938640512(SConcept __thisConcept__) {
    return null;
  }
  public List<SNode> virtual_getActuals_8011039602902827390(SNode __thisNode__) {
    return null;
  }
  public List<SNode> virtual_getFormals_8011039602902827397(SNode __thisNode__) {
    return null;
  }
  public SNode virtual_getFunction_8148561206069424005(SNode __thisNode__) {
    return null;
  }
  public SNode virtual_getReturnType_8729127847821610916(SNode __thisNode__) {
    return null;
  }
  public boolean virtual_hasEllipsis_8729127847821611677(SNode __thisNode__) {
    return DefaultValuesHolder.defaultValue(Boolean.TYPE);
  }
  public boolean virtual_simpleOneLiner_1786180596061315608(SNode __thisNode__) {
    return DefaultValuesHolder.defaultValue(Boolean.TYPE);
  }

  @Override
  public String getConceptFqName() {
    return "BSML.structure.EventCall";
  }

}