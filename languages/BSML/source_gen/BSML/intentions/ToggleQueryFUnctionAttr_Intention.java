package BSML.intentions;

/*Generated by MPS */

import jetbrains.mps.intentions.IntentionDescriptorBase;
import jetbrains.mps.intentions.IntentionFactory;
import java.util.Collection;
import jetbrains.mps.intentions.IntentionExecutable;
import jetbrains.mps.smodel.adapter.structure.MetaAdapterFactory;
import jetbrains.mps.intentions.IntentionType;
import jetbrains.mps.smodel.SNodePointer;
import org.jetbrains.mps.openapi.model.SNode;
import jetbrains.mps.openapi.editor.EditorContext;
import jetbrains.mps.lang.smodel.generator.smodelAdapter.SNodeOperations;
import java.util.Collections;
import jetbrains.mps.intentions.IntentionExecutableBase;
import jetbrains.mps.lang.smodel.generator.smodelAdapter.AttributeOperations;
import jetbrains.mps.lang.smodel.generator.smodelAdapter.IAttributeDescriptor;
import jetbrains.mps.smodel.action.SNodeFactoryOperations;
import jetbrains.mps.intentions.IntentionDescriptor;

public final class ToggleQueryFUnctionAttr_Intention extends IntentionDescriptorBase implements IntentionFactory {
  private Collection<IntentionExecutable> myCachedExecutable;
  public ToggleQueryFUnctionAttr_Intention() {
    super(MetaAdapterFactory.getConcept(0x6d11763d483d4b2bL, 0x8efc09336c1b0001L, 0x595522006a5b97ddL, "com.mbeddr.core.modules.structure.FunctionSignature"), IntentionType.NORMAL, false, new SNodePointer("r:acce7372-af49-4f40-8f5f-55dee3cbba21(BSML.intentions)", "5336752275647659641"));
  }
  @Override
  public String getPresentation() {
    return "ToggleQueryFUnctionAttr";
  }
  @Override
  public boolean isApplicable(final SNode node, final EditorContext editorContext) {
    if (!(isApplicableToNode(node, editorContext))) {
      return false;
    }
    return true;
  }
  private boolean isApplicableToNode(final SNode node, final EditorContext editorContext) {
    return (SNodeOperations.getNodeAncestor(node, MetaAdapterFactory.getInterfaceConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a5129468cdL, "BSML.structure.IStateMachine"), false, false) == null);
  }
  @Override
  public boolean isSurroundWith() {
    return false;
  }
  public Collection<IntentionExecutable> instances(final SNode node, final EditorContext context) {
    if (myCachedExecutable == null) {
      myCachedExecutable = Collections.<IntentionExecutable>singletonList(new ToggleQueryFUnctionAttr_Intention.IntentionImplementation());
    }
    return myCachedExecutable;
  }
  /*package*/ final class IntentionImplementation extends IntentionExecutableBase {
    public IntentionImplementation() {
    }
    @Override
    public String getDescription(final SNode node, final EditorContext editorContext) {
      return "Toggle IsQuery";
    }
    @Override
    public void execute(final SNode node, final EditorContext editorContext) {
      if (AttributeOperations.getAttribute(node, new IAttributeDescriptor.NodeAttribute(MetaAdapterFactory.getConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946888L, "BSML.structure.SMFunctionAttribute"))) == null) {
        SNodeFactoryOperations.setNewAttribute(node, new IAttributeDescriptor.NodeAttribute(MetaAdapterFactory.getConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946888L, "BSML.structure.SMFunctionAttribute")), SNodeFactoryOperations.asInstanceConcept(MetaAdapterFactory.getConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946888L, "BSML.structure.SMFunctionAttribute")));
      } else {
        SNodeOperations.deleteNode(AttributeOperations.getAttribute(node, new IAttributeDescriptor.NodeAttribute(MetaAdapterFactory.getConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946888L, "BSML.structure.SMFunctionAttribute"))));
      }
    }
    @Override
    public IntentionDescriptor getDescriptor() {
      return ToggleQueryFUnctionAttr_Intention.this;
    }
  }
}