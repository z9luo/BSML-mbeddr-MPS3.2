package BSML.typesystem;

/*Generated by MPS */

import jetbrains.mps.lang.typesystem.runtime.AbstractNonTypesystemRule_Runtime;
import jetbrains.mps.lang.typesystem.runtime.NonTypesystemRule_Runtime;
import org.jetbrains.mps.openapi.model.SNode;
import jetbrains.mps.typesystem.inference.TypeCheckingContext;
import jetbrains.mps.lang.typesystem.runtime.IsApplicableStatus;
import jetbrains.mps.lang.smodel.generator.smodelAdapter.SNodeOperations;
import jetbrains.mps.typesystem.inference.TypeChecker;
import jetbrains.mps.lang.smodel.generator.smodelAdapter.SLinkOperations;
import jetbrains.mps.smodel.adapter.structure.MetaAdapterFactory;
import jetbrains.mps.errors.messageTargets.MessageTarget;
import jetbrains.mps.errors.messageTargets.NodeMessageTarget;
import jetbrains.mps.errors.IErrorReporter;
import org.jetbrains.mps.openapi.language.SAbstractConcept;

public class check_SMTerminate_NonTypesystemRule extends AbstractNonTypesystemRule_Runtime implements NonTypesystemRule_Runtime {
  public check_SMTerminate_NonTypesystemRule() {
  }
  public void applyRule(final SNode smTerminate, final TypeCheckingContext typeCheckingContext, IsApplicableStatus status) {
    if ((smTerminate != null)) {
      if (!((SNodeOperations.isInstanceOf(TypeChecker.getInstance().getTypeOf(SLinkOperations.getTarget(smTerminate, MetaAdapterFactory.getContainmentLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946890L, 0x58d666a5129bec25L, "sm_handle"))), MetaAdapterFactory.getConcept(0x3bf5377ae9044dedL, 0x97545a516023bfaaL, 0x3e0cae5e366d630L, "com.mbeddr.core.pointers.structure.PointerType")))) || !((SNodeOperations.isInstanceOf(SLinkOperations.getTarget(SNodeOperations.cast(TypeChecker.getInstance().getTypeOf(SLinkOperations.getTarget(smTerminate, MetaAdapterFactory.getContainmentLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946890L, 0x58d666a5129bec25L, "sm_handle"))), MetaAdapterFactory.getConcept(0x3bf5377ae9044dedL, 0x97545a516023bfaaL, 0x3e0cae5e366d630L, "com.mbeddr.core.pointers.structure.PointerType")), MetaAdapterFactory.getContainmentLink(0xa9d696470840491eL, 0xbf392eb0805d2011L, 0x6bbcdccef5e46755L, 0x6bbcdccef5e46756L, "baseType")), MetaAdapterFactory.getConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a51294687bL, "BSML.structure.SMType"))))) {
        {
          MessageTarget errorTarget = new NodeMessageTarget();
          IErrorReporter _reporter_2309309498 = typeCheckingContext.reportTypeError(SLinkOperations.getTarget(smTerminate, MetaAdapterFactory.getContainmentLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946890L, 0x58d666a5129bec25L, "sm_handle")), "The type of " + SLinkOperations.getTarget(smTerminate, MetaAdapterFactory.getContainmentLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946890L, 0x58d666a5129bec25L, "sm_handle")) + " is " + TypeChecker.getInstance().getTypeOf(SLinkOperations.getTarget(smTerminate, MetaAdapterFactory.getContainmentLink(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946890L, 0x58d666a5129bec25L, "sm_handle"))) + ", not state-machine handle", "r:1fccc51a-c6c0-4f4f-ba25-37a53ba8fbed(BSML.typesystem)", "6401416779523108669", null, errorTarget);
        }
      }
    }
  }
  public SAbstractConcept getApplicableConcept() {
    return MetaAdapterFactory.getConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946890L, "BSML.structure.SMTerminate");
  }
  public IsApplicableStatus isApplicableAndPattern(SNode argument) {
    return new IsApplicableStatus(argument.getConcept().isSubConceptOf(getApplicableConcept()), null);
  }
  public boolean overrides() {
    return false;
  }
}