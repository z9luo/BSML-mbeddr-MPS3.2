package BSML.typesystem;

/*Generated by MPS */

import jetbrains.mps.lang.typesystem.runtime.AbstractNonTypesystemRule_Runtime;
import jetbrains.mps.lang.typesystem.runtime.NonTypesystemRule_Runtime;
import org.jetbrains.mps.openapi.model.SNode;
import jetbrains.mps.typesystem.inference.TypeCheckingContext;
import jetbrains.mps.lang.typesystem.runtime.IsApplicableStatus;
import jetbrains.mps.internal.collections.runtime.ListSequence;
import jetbrains.mps.lang.smodel.generator.smodelAdapter.SLinkOperations;
import jetbrains.mps.smodel.adapter.structure.MetaAdapterFactory;
import jetbrains.mps.internal.collections.runtime.Sequence;
import BSML.behavior.IEvent__BehaviorDescriptor;
import jetbrains.mps.errors.messageTargets.MessageTarget;
import jetbrains.mps.errors.messageTargets.NodeMessageTarget;
import jetbrains.mps.errors.IErrorReporter;
import com.mbeddr.core.base.behavior.IIdentifierNamedConcept__BehaviorDescriptor;
import org.jetbrains.mps.openapi.language.SAbstractConcept;

public class check_EventCall_NonTypesystemRule extends AbstractNonTypesystemRule_Runtime implements NonTypesystemRule_Runtime {
  public check_EventCall_NonTypesystemRule() {
  }
  public void applyRule(final SNode eventCall, final TypeCheckingContext typeCheckingContext, IsApplicableStatus status) {
    if (ListSequence.fromList(SLinkOperations.getChildren(eventCall, MetaAdapterFactory.getContainmentLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946884L, 0x58d666a512969021L, "actuals"))).count() != Sequence.fromIterable(IEvent__BehaviorDescriptor.args_id5zmpEki_82Q.invoke(SLinkOperations.getTarget(eventCall, MetaAdapterFactory.getReferenceLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946884L, 0x58d666a512969023L, "event_ref")))).count()) {
      {
        MessageTarget errorTarget = new NodeMessageTarget();
        IErrorReporter _reporter_2309309498 = typeCheckingContext.reportTypeError(eventCall, "wrong number of arguments: " + IIdentifierNamedConcept__BehaviorDescriptor.qualifiedName_id4JF77iuPCMH.invoke(SLinkOperations.getTarget(eventCall, MetaAdapterFactory.getReferenceLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946884L, 0x58d666a512969023L, "event_ref"))), "r:1fccc51a-c6c0-4f4f-ba25-37a53ba8fbed(BSML.typesystem)", "6401416779522382224", null, errorTarget);
      }
    }
  }
  public SAbstractConcept getApplicableConcept() {
    return MetaAdapterFactory.getConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946884L, "BSML.structure.EventCall");
  }
  public IsApplicableStatus isApplicableAndPattern(SNode argument) {
    return new IsApplicableStatus(argument.getConcept().isSubConceptOf(getApplicableConcept()), null);
  }
  public boolean overrides() {
    return false;
  }
}
