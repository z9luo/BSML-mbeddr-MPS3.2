package BSML.behavior;

/*Generated by MPS */

import jetbrains.mps.core.aspects.behaviour.BaseBHDescriptor;
import org.jetbrains.mps.openapi.language.SAbstractConcept;
import jetbrains.mps.smodel.adapter.structure.MetaAdapterFactory;
import jetbrains.mps.core.aspects.behaviour.api.BehaviorRegistry;
import jetbrains.mps.smodel.language.ConceptRegistry;
import jetbrains.mps.core.aspects.behaviour.api.SMethod;
import java.util.List;
import org.jetbrains.mps.openapi.model.SNode;
import jetbrains.mps.core.aspects.behaviour.SMethodBuilder;
import jetbrains.mps.core.aspects.behaviour.SJavaCompoundTypeImpl;
import jetbrains.mps.core.aspects.behaviour.SModifiersImpl;
import jetbrains.mps.core.aspects.behaviour.AccessPrivileges;
import java.util.Arrays;
import org.jetbrains.annotations.NotNull;
import jetbrains.mps.lang.smodel.generator.smodelAdapter.SLinkOperations;
import jetbrains.mps.internal.collections.runtime.ListSequence;
import java.util.ArrayList;
import jetbrains.mps.internal.collections.runtime.Sequence;
import jetbrains.mps.lang.smodel.generator.smodelAdapter.SConceptOperations;
import jetbrains.mps.lang.smodel.generator.smodelAdapter.SNodeOperations;
import jetbrains.mps.core.aspects.behaviour.api.SConstructor;
import org.jetbrains.annotations.Nullable;
import jetbrains.mps.core.aspects.behaviour.api.BHMethodNotFoundException;

public final class SMGenEvent__BehaviorDescriptor extends BaseBHDescriptor {
  private static final SAbstractConcept CONCEPT = MetaAdapterFactory.getConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a51294688eL, "BSML.structure.SMGenEvent");
  private static final BehaviorRegistry REGISTRY = ConceptRegistry.getInstance().getBehaviorRegistry();

  public static final SMethod<List<SNode>> getActuals_id6WGVxckB05Y = new SMethodBuilder<List<SNode>>(new SJavaCompoundTypeImpl((Class<List<SNode>>) ((Class) Object.class))).name("getActuals").modifiers(SModifiersImpl.create(8, AccessPrivileges.PUBLIC)).concept(CONCEPT).id("6WGVxckB05Y").registry(REGISTRY).build();
  public static final SMethod<SNode> getActualsLink_id2$xXL4HCFy0 = new SMethodBuilder<SNode>(new SJavaCompoundTypeImpl((Class<SNode>) ((Class) Object.class))).name("getActualsLink").modifiers(SModifiersImpl.create(9, AccessPrivileges.PUBLIC)).concept(CONCEPT).id("2$xXL4HCFy0").registry(REGISTRY).build();
  public static final SMethod<List<SNode>> getFormals_id6WGVxckB065 = new SMethodBuilder<List<SNode>>(new SJavaCompoundTypeImpl((Class<List<SNode>>) ((Class) Object.class))).name("getFormals").modifiers(SModifiersImpl.create(8, AccessPrivileges.PUBLIC)).concept(CONCEPT).id("6WGVxckB065").registry(REGISTRY).build();
  public static final SMethod<SNode> getReturnType_id7$$5Stoo8Y$ = new SMethodBuilder<SNode>(new SJavaCompoundTypeImpl((Class<SNode>) ((Class) Object.class))).name("getReturnType").modifiers(SModifiersImpl.create(8, AccessPrivileges.PUBLIC)).concept(CONCEPT).id("7$$5Stoo8Y$").registry(REGISTRY).build();
  public static final SMethod<SNode> getFunction_id74lwjTQiYY5 = new SMethodBuilder<SNode>(new SJavaCompoundTypeImpl((Class<SNode>) ((Class) Object.class))).name("getFunction").modifiers(SModifiersImpl.create(8, AccessPrivileges.PUBLIC)).concept(CONCEPT).id("74lwjTQiYY5").registry(REGISTRY).build();
  public static final SMethod<SNode> target_id70kXLV4LLzy = new SMethodBuilder<SNode>(new SJavaCompoundTypeImpl((Class<SNode>) ((Class) Object.class))).name("target").modifiers(SModifiersImpl.create(8, AccessPrivileges.PUBLIC)).concept(CONCEPT).id("70kXLV4LLzy").registry(REGISTRY).build();

  private static final List<SMethod<?>> BH_METHODS = Arrays.<SMethod<?>>asList(getActuals_id6WGVxckB05Y, getActualsLink_id2$xXL4HCFy0, getFormals_id6WGVxckB065, getReturnType_id7$$5Stoo8Y$, getFunction_id74lwjTQiYY5, target_id70kXLV4LLzy);

  private static void ___init___(@NotNull SNode __thisNode__) {
  }

  /*package*/ static List<SNode> getActuals_id6WGVxckB05Y(@NotNull SNode __thisNode__) {
    return SLinkOperations.getChildren(__thisNode__, MetaAdapterFactory.getContainmentLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a51294688eL, 0x58d666a5129adb46L, "actuals"));
  }
  /*package*/ static SNode getActualsLink_id2$xXL4HCFy0(@NotNull SAbstractConcept __thisConcept__) {
    return SLinkOperations.findLinkDeclaration(MetaAdapterFactory.getContainmentLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a51294688eL, 0x58d666a5129adb46L, "actuals"));
  }
  /*package*/ static List<SNode> getFormals_id6WGVxckB065(@NotNull SNode __thisNode__) {
    return ListSequence.fromList((new ArrayList<SNode>())).addSequence(Sequence.fromIterable(IEvent__BehaviorDescriptor.args_id5zmpEki_82Q.invoke(SLinkOperations.getTarget(__thisNode__, MetaAdapterFactory.getReferenceLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a51294688eL, 0x58d666a5129adb48L, "event_ref")))));
  }
  /*package*/ static SNode getReturnType_id7$$5Stoo8Y$(@NotNull SNode __thisNode__) {
    return SConceptOperations.createNewNode(SNodeOperations.asInstanceConcept(MetaAdapterFactory.getConcept(0x61c69711ed614850L, 0x81d97714ff227fb0L, 0x6d872ef9245a0d19L, "com.mbeddr.core.expressions.structure.VoidType")));
  }
  /*package*/ static SNode getFunction_id74lwjTQiYY5(@NotNull SNode __thisNode__) {
    return SLinkOperations.getTarget(SLinkOperations.getTarget(SLinkOperations.getTarget(__thisNode__, MetaAdapterFactory.getReferenceLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a51294688eL, 0x58d666a5129adb48L, "event_ref")), MetaAdapterFactory.getContainmentLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946882L, 0x58d666a51295b12aL, "binding")), MetaAdapterFactory.getReferenceLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a51294688dL, 0x58d666a5129adb04L, "binding"));
  }
  /*package*/ static SNode target_id70kXLV4LLzy(@NotNull SNode __thisNode__) {
    return SLinkOperations.getTarget(__thisNode__, MetaAdapterFactory.getReferenceLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a51294688eL, 0x58d666a5129adb48L, "event_ref"));
  }

  /*package*/ SMGenEvent__BehaviorDescriptor() {
    super(REGISTRY);
  }

  @Override
  protected void initNode(@NotNull SNode node, @NotNull SConstructor constructor, @Nullable Object[] parameters) {
    ___init___(node);
  }

  @Override
  protected <T> T invokeSpecial0(@NotNull SNode node, @NotNull SMethod<T> method, @Nullable Object[] parameters) {
    int methodIndex = BH_METHODS.indexOf(method);
    if (methodIndex < 0) {
      throw new BHMethodNotFoundException(this, method);
    }
    switch (methodIndex) {
      case 0:
        return (T) ((List<SNode>) getActuals_id6WGVxckB05Y(node));
      case 2:
        return (T) ((List<SNode>) getFormals_id6WGVxckB065(node));
      case 3:
        return (T) ((SNode) getReturnType_id7$$5Stoo8Y$(node));
      case 4:
        return (T) ((SNode) getFunction_id74lwjTQiYY5(node));
      case 5:
        return (T) ((SNode) target_id70kXLV4LLzy(node));
      default:
        throw new BHMethodNotFoundException(this, method);
    }
  }

  @Override
  protected <T> T invokeSpecial0(@NotNull SAbstractConcept concept, @NotNull SMethod<T> method, @Nullable Object[] parameters) {
    int methodIndex = BH_METHODS.indexOf(method);
    if (methodIndex < 0) {
      throw new BHMethodNotFoundException(this, method);
    }
    switch (methodIndex) {
      case 1:
        return (T) ((SNode) getActualsLink_id2$xXL4HCFy0(concept));
      default:
        throw new BHMethodNotFoundException(this, method);
    }
  }

  @NotNull
  @Override
  public List<SMethod<?>> getDeclaredMethods() {
    return BH_METHODS;
  }

  @NotNull
  @Override
  public SAbstractConcept getConcept() {
    return CONCEPT;
  }
}
