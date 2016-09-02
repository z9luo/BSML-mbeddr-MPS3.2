package BSML;

/*Generated by MPS */

import jetbrains.mps.smodel.language.LanguageRuntime;
import jetbrains.mps.smodel.adapter.ids.SLanguageId;
import java.util.UUID;
import java.util.Collection;
import jetbrains.mps.generator.runtime.TemplateModule;
import jetbrains.mps.generator.runtime.TemplateUtil;
import jetbrains.mps.smodel.runtime.ILanguageAspect;
import jetbrains.mps.openapi.actions.descriptor.ActionAspectDescriptor;
import jetbrains.mps.actions.descriptor.BaseActionAspectDescriptor;
import jetbrains.mps.smodel.runtime.BehaviorAspectDescriptor;
import jetbrains.mps.smodel.runtime.ConstraintsAspectDescriptor;
import jetbrains.mps.openapi.editor.descriptor.EditorAspectDescriptor;
import BSML.editor.EditorAspectDescriptorImpl;
import jetbrains.mps.intentions.IntentionAspectDescriptor;
import BSML.intentions.IntentionsDescriptor;
import jetbrains.mps.smodel.runtime.StructureAspectDescriptor;
import jetbrains.mps.lang.typesystem.runtime.IHelginsDescriptor;
import BSML.typesystem.TypesystemDescriptor;

public class Language extends LanguageRuntime {
  public static String MODULE_REF = "181cb8f2-3d5e-4aa9-b8cd-2e496087f7c8(BSML)";
  public Language() {
  }
  @Override
  public String getNamespace() {
    return "BSML";
  }

  @Override
  public int getVersion() {
    return 0;
  }

  public SLanguageId getId() {
    return new SLanguageId(UUID.fromString("181cb8f2-3d5e-4aa9-b8cd-2e496087f7c8"));
  }
  @Override
  protected String[] getExtendedLanguageIDs() {
    return new String[]{"com.mbeddr.core.expressions", "com.mbeddr.core.statements", "com.mbeddr.core.modules"};
  }
  @Override
  public Collection<TemplateModule> getGenerators() {
    return TemplateUtil.<TemplateModule>asCollection(TemplateUtil.createInterpretedGenerator(this, "f44b97a5-c8c4-4ec1-aab9-aa9e0053d86d(BSML#6401416779520902264)"));
  }
  @Override
  protected <T extends ILanguageAspect> T createAspect(Class<T> aspectClass) {
    if (aspectClass == ActionAspectDescriptor.class) {
      return (T) new BaseActionAspectDescriptor();
    }
    if (aspectClass == BehaviorAspectDescriptor.class) {
      return (T) new BSML.behavior.BehaviorAspectDescriptor();
    }
    if (aspectClass == ConstraintsAspectDescriptor.class) {
      return (T) new BSML.constraints.ConstraintsAspectDescriptor();
    }
    if (aspectClass == EditorAspectDescriptor.class) {
      return (T) new EditorAspectDescriptorImpl();
    }
    if (aspectClass == IntentionAspectDescriptor.class) {
      return (T) new IntentionsDescriptor();
    }
    if (aspectClass == StructureAspectDescriptor.class) {
      return (T) new BSML.structure.StructureAspectDescriptor();
    }
    if (aspectClass == IHelginsDescriptor.class) {
      return (T) new TypesystemDescriptor();
    }
    return super.createAspect(aspectClass);
  }
}
