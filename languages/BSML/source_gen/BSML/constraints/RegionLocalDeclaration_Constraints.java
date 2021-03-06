package BSML.constraints;

/*Generated by MPS */

import jetbrains.mps.smodel.runtime.base.BaseConstraintsDescriptor;
import jetbrains.mps.smodel.adapter.ids.MetaIdFactory;
import org.jetbrains.mps.openapi.model.SNode;
import org.jetbrains.annotations.Nullable;
import jetbrains.mps.smodel.IOperationContext;
import jetbrains.mps.smodel.runtime.CheckingNodeContext;
import java.util.Map;
import jetbrains.mps.smodel.adapter.ids.SReferenceLinkId;
import jetbrains.mps.smodel.runtime.ReferenceConstraintsDescriptor;
import java.util.HashMap;
import jetbrains.mps.smodel.runtime.base.BaseReferenceConstraintsDescriptor;
import jetbrains.mps.smodel.runtime.ReferenceScopeProvider;
import jetbrains.mps.smodel.runtime.base.BaseReferenceScopeProvider;
import jetbrains.mps.smodel.runtime.ReferenceConstraintsContext;
import jetbrains.mps.lang.smodel.generator.smodelAdapter.SNodeOperations;
import BSML.behavior.ISMElementScopeProvider__BehaviorDescriptor;
import jetbrains.mps.smodel.adapter.structure.MetaAdapterFactory;
import org.jetbrains.mps.openapi.model.SNodeReference;
import jetbrains.mps.internal.collections.runtime.ListSequence;
import jetbrains.mps.lang.smodel.generator.smodelAdapter.SLinkOperations;
import jetbrains.mps.internal.collections.runtime.IWhereFilter;
import jetbrains.mps.smodel.SNodePointer;

public class RegionLocalDeclaration_Constraints extends BaseConstraintsDescriptor {
  public RegionLocalDeclaration_Constraints() {
    super(MetaIdFactory.conceptId(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946886L));
  }
  @Override
  public boolean hasOwnCanBeParentMethod() {
    return true;
  }
  @Override
  public boolean canBeParent(SNode node, @Nullable SNode childNode, SNode childConcept, SNode link, IOperationContext operationContext, @Nullable CheckingNodeContext checkingNodeContext) {
    boolean result = static_canBeAParent(node, childNode, childConcept, link, operationContext);

    if (!(result) && checkingNodeContext != null) {
      checkingNodeContext.setBreakingNode(canBeParentBreakingPoint);
    }

    return result;
  }
  @Override
  protected Map<SReferenceLinkId, ReferenceConstraintsDescriptor> getNotDefaultSReferenceLinks() {
    Map<SReferenceLinkId, ReferenceConstraintsDescriptor> references = new HashMap<SReferenceLinkId, ReferenceConstraintsDescriptor>();
    references.put(MetaIdFactory.refId(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946886L, 0x58d666a5129837a9L), new BaseReferenceConstraintsDescriptor(MetaIdFactory.refId(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a512946886L, 0x58d666a5129837a9L), this) {
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
            return SNodeOperations.ofConcept(ISMElementScopeProvider__BehaviorDescriptor.getContainedElements_id5zmpEki_6zG.invoke(SNodeOperations.getNodeAncestor(_context.getReferenceNode(), MetaAdapterFactory.getInterfaceConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a5129468c8L, "BSML.structure.IRegion"), true, false)), MetaAdapterFactory.getInterfaceConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a5129468ccL, "BSML.structure.IState"));
          }
          @Override
          public SNodeReference getSearchScopeValidatorNode() {
            return breakingNode_uijn65_a0a1a0a0a1a0b0a1a3;
          }
        };
      }
    });
    return references;
  }
  public static boolean static_canBeAParent(SNode node, SNode childNode, SNode childConcept, SNode link, final IOperationContext operationContext) {
    if (SNodeOperations.isInstanceOf(childNode, MetaAdapterFactory.getConcept(0xa9d696470840491eL, 0xbf392eb0805d2011L, 0x3a16e3a9c7ad9955L, "com.mbeddr.core.statements.structure.StatementList"))) {
      return ListSequence.fromList(SLinkOperations.getChildren(SNodeOperations.cast(childNode, MetaAdapterFactory.getConcept(0xa9d696470840491eL, 0xbf392eb0805d2011L, 0x3a16e3a9c7ad9955L, "com.mbeddr.core.statements.structure.StatementList")), MetaAdapterFactory.getContainmentLink(0xa9d696470840491eL, 0xbf392eb0805d2011L, 0x3a16e3a9c7ad9955L, 0x3a16e3a9c7ad9956L, "statements"))).all(new IWhereFilter<SNode>() {
        public boolean accept(SNode it) {
          return SNodeOperations.isInstanceOf(it, MetaAdapterFactory.getInterfaceConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a5129468ccL, "BSML.structure.IState")) || SNodeOperations.isInstanceOf(it, MetaAdapterFactory.getConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a51294687fL, "BSML.structure.AbstractBlock")) || SNodeOperations.isInstanceOf(it, MetaAdapterFactory.getConcept(0xa9d696470840491eL, 0xbf392eb0805d2011L, 0x3a16e3a9c7ad96e6L, "com.mbeddr.core.statements.structure.LocalVariableDeclaration")) || SNodeOperations.isInstanceOf(it, MetaAdapterFactory.getInterfaceConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a5129468c0L, "BSML.structure.IEvent")) || SNodeOperations.isInstanceOf(it, MetaAdapterFactory.getInterfaceConcept(0x181cb8f23d5e4aa9L, 0xb8cd2e496087f7c8L, 0x58d666a5129468ceL, "BSML.structure.ITransition")) || SNodeOperations.getConcept(it) == MetaAdapterFactory.getConcept(0xa9d696470840491eL, 0xbf392eb0805d2011L, 0x3a16e3a9c7ad6d03L, "com.mbeddr.core.statements.structure.Statement");
        }
      });
    }
    return true;
  }
  private static SNodePointer canBeParentBreakingPoint = new SNodePointer("r:b051e963-08f0-4c41-8730-db38e4196cf6(BSML.constraints)", "6401416779522248771");
  private static SNodePointer breakingNode_uijn65_a0a1a0a0a1a0b0a1a3 = new SNodePointer("r:b051e963-08f0-4c41-8730-db38e4196cf6(BSML.constraints)", "6401416779522285452");
}
