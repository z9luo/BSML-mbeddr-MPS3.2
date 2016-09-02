package BSML.constraints;

/*Generated by MPS */

import jetbrains.mps.smodel.runtime.base.BaseConstraintsDescriptor;
import jetbrains.mps.smodel.adapter.ids.MetaIdFactory;
import java.util.Map;
import jetbrains.mps.smodel.adapter.ids.SReferenceLinkId;
import jetbrains.mps.smodel.runtime.ReferenceConstraintsDescriptor;
import java.util.HashMap;
import jetbrains.mps.smodel.runtime.base.BaseReferenceConstraintsDescriptor;
import org.jetbrains.annotations.Nullable;
import jetbrains.mps.smodel.runtime.ReferenceScopeProvider;
import jetbrains.mps.smodel.runtime.base.BaseReferenceScopeProvider;
import jetbrains.mps.smodel.IOperationContext;
import jetbrains.mps.smodel.runtime.ReferenceConstraintsContext;
import jetbrains.mps.lang.smodel.generator.smodelAdapter.SNodeOperations;
import BSML.behavior.ISMElementScopeProvider__BehaviorDescriptor;
import jetbrains.mps.smodel.adapter.structure.MetaAdapterFactory;
import org.jetbrains.mps.openapi.model.SNodeReference;
import jetbrains.mps.smodel.SNodePointer;

public class TriggerEventRef_Constraints extends BaseConstraintsDescriptor {
  public TriggerEventRef_Constraints() {
    super(MetaIdFactory.conceptId(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a51294688cL));
  }
  @Override
  protected Map<SReferenceLinkId, ReferenceConstraintsDescriptor> getNotDefaultSReferenceLinks() {
    Map<SReferenceLinkId, ReferenceConstraintsDescriptor> references = new HashMap<SReferenceLinkId, ReferenceConstraintsDescriptor>();
    references.put(MetaIdFactory.refId(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a51294688cL, 0x58d666a5129a49e1L), new BaseReferenceConstraintsDescriptor(MetaIdFactory.refId(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a51294688cL, 0x58d666a5129a49e1L), this) {
      @Override
      public boolean hasOwnScopeProvider() {
        return true;
      }
      @Nullable
      @Override
      public ReferenceScopeProvider getScopeProvider() {
        return new BaseReferenceScopeProvider() {
          @Override
          public Object createSearchScopeOrListOfNodes(final IOperationContext operationContext, final ReferenceConstraintsContext _context) {
            return SNodeOperations.ofConcept(ISMElementScopeProvider__BehaviorDescriptor.getVisibleElements_id5zmpEki_6zW.invoke(SNodeOperations.getNodeAncestor(_context.getEnclosingNode(), MetaAdapterFactory.getInterfaceConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a5129468caL, "BSML.structure.ISMElementScopeProvider"), false, false)), MetaAdapterFactory.getInterfaceConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a5129468c0L, "BSML.structure.IEvent"));
          }
          @Override
          public SNodeReference getSearchScopeValidatorNode() {
            return breakingNode_81o8ic_a0a1a0a0a1a0b0a1a1;
          }
        };
      }
    });
    return references;
  }
  private static SNodePointer breakingNode_81o8ic_a0a1a0a0a1a0b0a1a1 = new SNodePointer("r:b051e963-08f0-4c41-8730-db38e4196cf6(BSML.constraints)", "6401416779521739109");
}