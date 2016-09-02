package BSML.constraints;

/*Generated by MPS */

import jetbrains.mps.smodel.runtime.ConstraintsDescriptor;
import jetbrains.mps.smodel.adapter.ids.SConceptId;
import jetbrains.mps.smodel.runtime.base.BaseConstraintsDescriptor;

public class ConstraintsAspectDescriptor implements jetbrains.mps.smodel.runtime.ConstraintsAspectDescriptor {
  public ConstraintsAspectDescriptor() {
  }
  public ConstraintsDescriptor getDescriptor(SConceptId conceptId) {
    long id = conceptId.getIdValue();
    if (id == 0x58d666a512946881L) {
      return new EntryBlock_Constraints();
    }
    if (id == 0x58d666a51294687bL) {
      return new SMType_Constraints();
    }
    if (id == 0x58d666a5129468ceL) {
      return new ITransition_Constraints();
    }
    if (id == 0x58d666a5129468ccL) {
      return new IState_Constraints();
    }
    if (id == 0x58d666a5129468c8L) {
      return new IRegion_Constraints();
    }
    if (id == 0x58d666a5129468c0L) {
      return new IEvent_Constraints();
    }
    if (id == 0x58d666a51294688cL) {
      return new TriggerEventRef_Constraints();
    }
    if (id == 0x58d666a51294688bL) {
      return new Transition_Constraints();
    }
    if (id == 0x58d666a51294688aL) {
      return new StateLocalDeclaration_Constraints();
    }
    if (id == 0x58d666a512946889L) {
      return new StartBigStepBlock_Constraints();
    }
    if (id == 0x58d666a51294687eL) {
      return new SMGlobalDeclaration_Constraints();
    }
    if (id == 0x58d666a512946886L) {
      return new RegionLocalDeclaration_Constraints();
    }
    if (id == 0x58d666a512946884L) {
      return new EventCall_Constraints();
    }
    if (id == 0x58d666a512946883L) {
      return new EventArgRef_Constraints();
    }
    if (id == 0x58d666a512946880L) {
      return new EndBigStepBlock_Constraints();
    }
    if (id == 0x58d666a51294687fL) {
      return new AbstractBlock_Constraints();
    }
    if (id == 0x58d666a51294688dL) {
      return new CFunctionBinding_Constraints();
    }
    if (id == 0x58d666a51294688eL) {
      return new SMGenEvent_Constraints();
    }
    if (id == 0x58d666a51294688fL) {
      return new SMStart_Constraints();
    }
    if (id == 0x58d666a512946891L) {
      return new SMTrigger_Constraints();
    }
    return new BaseConstraintsDescriptor(conceptId);
  }
}
