package BSML.behavior;

/*Generated by MPS */

import com.mbeddr.core.statements.behavior.Statement_BehaviorDescriptor;
import com.mbeddr.core.base.behavior.IContainerOfUniqueNames_BehaviorDescriptor;
import org.jetbrains.mps.openapi.language.SConcept;
import jetbrains.mps.smodel.behaviour.DefaultValuesHolder;
import org.jetbrains.mps.openapi.model.SNode;

/**
 * Will be removed after 3.3
 * Need to support compilation of the legacy behavior descriptors before the language is rebuilt
 * This class is not involved in the actual method invocation
 */
@Deprecated
public class Event_BehaviorDescriptor extends Statement_BehaviorDescriptor implements IEvent_BehaviorDescriptor, IContainerOfUniqueNames_BehaviorDescriptor {
  public boolean virtual_allowEverythingExceptWhitespace_151435140526267396(SConcept __thisConcept__) {
    return DefaultValuesHolder.defaultValue(Boolean.TYPE);
  }
  public boolean virtual_allowNonIdentifierNames_6584628407655574550(SConcept __thisConcept__) {
    return DefaultValuesHolder.defaultValue(Boolean.TYPE);
  }
  public Iterable<SNode> virtual_args_6401416779521097910(SNode __thisNode__) {
    return null;
  }
  public SNode virtual_binding_6401416779521097926(SNode __thisNode__) {
    return null;
  }
  public String virtual_conceptLabel_5470497459580078362(SNode __thisNode__) {
    return null;
  }
  public String virtual_getFqName_1213877404258(SNode __thisNode__) {
    return null;
  }
  public Iterable<SNode> virtual_getUniquelyNamedElements_5095889050031059923(SNode __thisNode__) {
    return null;
  }
  public String virtual_id_6401416779521096403(SNode __thisNode__) {
    return null;
  }
  public boolean virtual_isInEvent_6401416779521097948(SNode __thisNode__) {
    return DefaultValuesHolder.defaultValue(Boolean.TYPE);
  }
  public boolean virtual_isOutEvent_6401416779521097968(SNode __thisNode__) {
    return DefaultValuesHolder.defaultValue(Boolean.TYPE);
  }
  public boolean virtual_isRendezvousEvent_6401416779521097992(SNode __thisNode__) {
    return DefaultValuesHolder.defaultValue(Boolean.TYPE);
  }
  public String virtual_qualifiedName_5470497459578244269(SNode __thisNode__) {
    return null;
  }
  public String virtual_shortDescriptionForCCMenu_5470497459578304992(SNode __thisNode__) {
    return null;
  }

  @Override
  public String getConceptFqName() {
    return "BSML.structure.Event";
  }

}
