package BSML.constraints;

/*Generated by MPS */

import jetbrains.mps.smodel.runtime.base.BaseConstraintsDescriptor;
import jetbrains.mps.smodel.adapter.ids.MetaIdFactory;
import org.jetbrains.annotations.Nullable;
import org.jetbrains.mps.openapi.model.SNode;
import jetbrains.mps.smodel.IOperationContext;
import jetbrains.mps.smodel.runtime.CheckingNodeContext;
import jetbrains.mps.internal.collections.runtime.Sequence;
import jetbrains.mps.lang.smodel.generator.smodelAdapter.SNodeOperations;
import jetbrains.mps.smodel.adapter.structure.MetaAdapterFactory;
import jetbrains.mps.smodel.SNodePointer;

public class EntryBlock_Constraints extends BaseConstraintsDescriptor {
  public EntryBlock_Constraints() {
    super(MetaIdFactory.conceptId(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946881L));
  }
  @Override
  public boolean hasOwnCanBeChildMethod() {
    return true;
  }
  @Override
  public boolean canBeChild(@Nullable SNode node, SNode parentNode, SNode link, SNode childConcept, final IOperationContext operationContext, @Nullable final CheckingNodeContext checkingNodeContext) {
    boolean result = static_canBeAChild(node, parentNode, link, childConcept, operationContext);

    if (!(result) && checkingNodeContext != null) {
      checkingNodeContext.setBreakingNode(canBeChildBreakingPoint);
    }

    return result;
  }
  public static boolean static_canBeAChild(SNode node, SNode parentNode, SNode link, SNode childConcept, final IOperationContext operationContext) {
    return Sequence.fromIterable(SNodeOperations.ofConcept(SNodeOperations.getChildren(parentNode), MetaAdapterFactory.getConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946881L, "BSML.structure.EntryBlock"))).count() <= 1 && SNodeOperations.isInstanceOf(SNodeOperations.getParent(parentNode), MetaAdapterFactory.getInterfaceConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a5129468cbL, "BSML.structure.ISMNamedElement"));
  }
  private static SNodePointer canBeChildBreakingPoint = new SNodePointer("r:b051e963-08f0-4c41-8730-db38e4196cf6(BSML.constraints)", "6401416779521165275");
}
