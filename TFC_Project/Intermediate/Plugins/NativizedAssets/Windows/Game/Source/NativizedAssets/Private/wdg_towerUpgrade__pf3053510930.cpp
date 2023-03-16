#include "NativizedAssets.h"
#include "wdg_towerUpgrade__pf3053510930.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/MultiLineEditableTextBox.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Module__pf2556257598.h"
#include "OnCollection__pf3716123054.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Tower__pf711247040.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Slate/Public/Widgets/Input/IVirtualKeyboardEntry.h"
#include "Runtime/Slate/Public/Widgets/Text/ISlateEditableTextWidget.h"
#include "Main_GameInstance__pf3789721252.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "electricity_manager__pf3789721252.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "player_character__pf2509438801.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
Uwdg_towerUpgrade_C__pf3053510930::Uwdg_towerUpgrade_C__pf3053510930(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Button_module0__pf = nullptr;
	bpv__Button_module1__pf = nullptr;
	bpv__Button_module2__pf = nullptr;
	bpv__Button_module3__pf = nullptr;
	bpv__Button_PowerUpgrade__pf = nullptr;
	bpv__Button_undoUpgrade__pf = nullptr;
	bpv__Button_UpgradeDone__pf = nullptr;
	bpv__level1_1__pf = nullptr;
	bpv__level1_2__pf = nullptr;
	bpv__level1_3__pf = nullptr;
	bpv__level1_4__pf = nullptr;
	bpv__level1_5__pf = nullptr;
	bpv__level1_6__pf = nullptr;
	bpv__level1_7__pf = nullptr;
	bpv__level1_8__pf = nullptr;
	bpv__level1_9__pf = nullptr;
	bpv__level1_10__pf = nullptr;
	bpv__module1Infotext__pf = nullptr;
	bpv__module2Infotext__pf = nullptr;
	bpv__module3Infotext__pf = nullptr;
	bpv__module4Infotext__pf = nullptr;
	bpv__ModuleName1__pf = nullptr;
	bpv__ModuleName2__pf = nullptr;
	bpv__ModuleName3__pf = nullptr;
	bpv__ModuleName4__pf = nullptr;
	bpv__TextBlock_5__pf = nullptr;
	bpv__tower_Name__pf = nullptr;
	bpv__tower_Name_1__pf = nullptr;
	bpv__tower_Name_2__pf = nullptr;
	bpv__tower_power__pf = nullptr;
	bpv__Tower__pf = nullptr;
	bpv__moduleSelection__pf = TArray<bool> ();
	bpv__moduleSelection__pf.Reserve(4);
	bpv__moduleSelection__pf.Add(false);
	bpv__moduleSelection__pf.Add(false);
	bpv__moduleSelection__pf.Add(false);
	bpv__moduleSelection__pf.Add(false);
	bpv__SelectedModuleNum__pf = 0;
	bpv__MaxModulenum__pf = 2;
	bpv__Player__pf = nullptr;
	bpv__PowerLevel__pf = 1;
	bpv__temp_powerUpgrade__pf = 0;
	bpv__PowerLevelImg__pf = TArray<UImage*> ();
	bpv__Enery__pf = 0;
	bpv__powerprice__pf = 80;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void Uwdg_towerUpgrade_C__pf3053510930::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void Uwdg_towerUpgrade_C__pf3053510930::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UModule_C__pf2556257598::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UOnCollection_C__pf3716123054::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ATower_C__pf711247040::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMain_GameInstance_C__pf3789721252::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Aelectricity_manager_C__pf3789721252::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Aplayer_character_C__pf2509438801::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(7);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 7);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Button_PowerUpgrade"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Button_128_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Button_module0"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Button_module0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Button_module1"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Button_module1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Button_undoUpgrade"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Button_undoUpgrade_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Button_UpgradeDone"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Button_UpgradeDone_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Button_module3"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Button_module3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("Button_module2"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__Button_module2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__9 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__9), UPanelWidget::__PPO__Slots() )));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(5);
	auto __Local__11 = NewObject<UCanvasPanelSlot>(__Local__9, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__11->LayoutData.Offsets.Left = -74.000000f;
	__Local__11->LayoutData.Offsets.Right = 75.000000f;
	__Local__11->LayoutData.Offsets.Bottom = 75.000000f;
	__Local__11->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__11->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UButton>(__Local__1, TEXT("Button_undoUpgrade"), (EObjectFlags)0x00280008);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	auto __Local__13 = NewObject<UCanvasPanelSlot>(__Local__9, TEXT("CanvasPanelSlot_23"), (EObjectFlags)0x00280008);
	__Local__13->LayoutData.Offsets.Left = -200.000000f;
	__Local__13->LayoutData.Offsets.Top = -450.000000f;
	__Local__13->LayoutData.Offsets.Right = 400.000000f;
	__Local__13->LayoutData.Offsets.Bottom = 400.000000f;
	__Local__13->LayoutData.Anchors.Minimum = FVector2D(0.850347, 0.500000);
	__Local__13->LayoutData.Anchors.Maximum = FVector2D(0.850347, 0.500000);
	__Local__13->Parent = __Local__9;
	auto __Local__14 = NewObject<UVerticalBox>(__Local__1, TEXT("Towerinfo_powerBox"), (EObjectFlags)0x00280008);
	auto& __Local__15 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__14), UPanelWidget::__PPO__Slots() )));
	__Local__15 = TArray<UPanelSlot*> ();
	__Local__15.Reserve(6);
	auto __Local__16 = NewObject<UVerticalBoxSlot>(__Local__14, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__16->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__16->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__16->Parent = __Local__14;
	auto __Local__17 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_295"), (EObjectFlags)0x00280008);
	__Local__17->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"08D5959442630B4B1ADC3FBE815D94EC\", \"Tower Info\")")	);
	auto& __Local__18 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__17->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__18 = FLinearColor(0.201201, 1.000000, 0.000000, 1.000000);
	auto& __Local__19 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__17), UTextLayoutWidget::__PPO__Justification() )));
	__Local__19 = ETextJustify::Type::Center;
	__Local__17->Slot = __Local__16;
	__Local__16->Content = __Local__17;
	__Local__15.Add(__Local__16);
	auto __Local__20 = NewObject<UVerticalBoxSlot>(__Local__14, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__20->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__20->Parent = __Local__14;
	auto __Local__21 = NewObject<UHorizontalBox>(__Local__1, TEXT("towertypeBox"), (EObjectFlags)0x00280008);
	auto& __Local__22 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__21), UPanelWidget::__PPO__Slots() )));
	__Local__22 = TArray<UPanelSlot*> ();
	__Local__22.Reserve(2);
	auto __Local__23 = NewObject<UHorizontalBoxSlot>(__Local__21, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__23->Parent = __Local__21;
	auto __Local__24 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__24->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"338E0D2E4215CC587777309E458003D4\", \"TYPE :\")")	);
	auto& __Local__25 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__24->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__25 = FLinearColor(0.201201, 1.000000, 0.000000, 1.000000);
	__Local__24->Slot = __Local__23;
	__Local__23->Content = __Local__24;
	__Local__22.Add(__Local__23);
	auto __Local__26 = NewObject<UHorizontalBoxSlot>(__Local__21, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__26->Parent = __Local__21;
	auto __Local__27 = NewObject<UTextBlock>(__Local__1, TEXT("tower_Name"), (EObjectFlags)0x00280008);
	auto& __Local__28 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__27->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__28 = FLinearColor(0.203480, 1.000000, 0.000000, 1.000000);
	__Local__27->Slot = __Local__26;
	__Local__27->bIsVariable = true;
	__Local__26->Content = __Local__27;
	__Local__22.Add(__Local__26);
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__15.Add(__Local__20);
	auto __Local__29 = NewObject<UVerticalBoxSlot>(__Local__14, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__29->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__29->Parent = __Local__14;
	auto __Local__30 = NewObject<UHorizontalBox>(__Local__1, TEXT("atk_rangeBox"), (EObjectFlags)0x00280008);
	auto& __Local__31 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__30), UPanelWidget::__PPO__Slots() )));
	__Local__31 = TArray<UPanelSlot*> ();
	__Local__31.Reserve(3);
	auto __Local__32 = NewObject<UHorizontalBoxSlot>(__Local__30, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__32->Parent = __Local__30;
	auto __Local__33 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__33->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"2A5EE7AA4A4A6EB3A90585A7754D3A50\", \"RANGE : \")")	);
	auto& __Local__34 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__33->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__34 = FLinearColor(0.201201, 1.000000, 0.000000, 1.000000);
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__31.Add(__Local__32);
	auto __Local__35 = NewObject<UHorizontalBoxSlot>(__Local__30, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__35->Parent = __Local__30;
	auto __Local__36 = NewObject<UTextBlock>(__Local__1, TEXT("tower_Name_1"), (EObjectFlags)0x00280008);
	auto& __Local__37 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__36->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__37 = FLinearColor(0.203480, 1.000000, 0.000000, 1.000000);
	__Local__36->Slot = __Local__35;
	__Local__36->bIsVariable = true;
	__Local__35->Content = __Local__36;
	__Local__31.Add(__Local__35);
	auto __Local__38 = NewObject<UHorizontalBoxSlot>(__Local__30, TEXT("HorizontalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__38->Parent = __Local__30;
	auto __Local__39 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_3"), (EObjectFlags)0x00280008);
	__Local__39->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"74C6CC104F8D803C26582EAE69829A6B\", \"m\")")	);
	auto& __Local__40 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__40 = FLinearColor(0.201201, 1.000000, 0.000000, 1.000000);
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__31.Add(__Local__38);
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__15.Add(__Local__29);
	auto __Local__41 = NewObject<UVerticalBoxSlot>(__Local__14, TEXT("VerticalBoxSlot_12"), (EObjectFlags)0x00280008);
	__Local__41->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__41->Parent = __Local__14;
	auto __Local__42 = NewObject<UHorizontalBox>(__Local__1, TEXT("atk_apdBox"), (EObjectFlags)0x00280008);
	auto& __Local__43 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__42), UPanelWidget::__PPO__Slots() )));
	__Local__43 = TArray<UPanelSlot*> ();
	__Local__43.Reserve(3);
	auto __Local__44 = NewObject<UHorizontalBoxSlot>(__Local__42, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__44->Parent = __Local__42;
	auto __Local__45 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__45->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"7C9DBE5B4420415BE6BC46951256256B\", \"Attack Speed  : \")")	);
	auto& __Local__46 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__45->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__46 = FLinearColor(0.201201, 1.000000, 0.000000, 1.000000);
	__Local__45->Slot = __Local__44;
	__Local__44->Content = __Local__45;
	__Local__43.Add(__Local__44);
	auto __Local__47 = NewObject<UHorizontalBoxSlot>(__Local__42, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__47->Parent = __Local__42;
	auto __Local__48 = NewObject<UTextBlock>(__Local__1, TEXT("tower_Name_2"), (EObjectFlags)0x00280008);
	auto& __Local__49 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__48->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__49 = FLinearColor(0.203480, 1.000000, 0.000000, 1.000000);
	__Local__48->Slot = __Local__47;
	__Local__48->bIsVariable = true;
	__Local__47->Content = __Local__48;
	__Local__43.Add(__Local__47);
	auto __Local__50 = NewObject<UHorizontalBoxSlot>(__Local__42, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__50->Parent = __Local__42;
	auto __Local__51 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_4"), (EObjectFlags)0x00280008);
	__Local__51->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"DA5F801D49C0B7A297D80082BA65B574\", \"/s\")")	);
	auto& __Local__52 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__51->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__52 = FLinearColor(0.201201, 1.000000, 0.000000, 1.000000);
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__43.Add(__Local__50);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__15.Add(__Local__41);
	auto __Local__53 = NewObject<UVerticalBoxSlot>(__Local__14, TEXT("VerticalBoxSlot_9"), (EObjectFlags)0x00280008);
	__Local__53->Parent = __Local__14;
	auto __Local__54 = NewObject<UHorizontalBox>(__Local__1, TEXT("powerImagebox"), (EObjectFlags)0x00280008);
	auto& __Local__55 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__54), UPanelWidget::__PPO__Slots() )));
	__Local__55 = TArray<UPanelSlot*> ();
	__Local__55.Reserve(20);
	auto __Local__56 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__56->Parent = __Local__54;
	auto __Local__57 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_380"), (EObjectFlags)0x00280008);
	__Local__57->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"5340BDE0478ED053AEC9EBB8F4B32BCF\", \"power\")")	);
	auto& __Local__58 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__57->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__58 = FLinearColor(0.201201, 1.000000, 0.000000, 1.000000);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__55.Add(__Local__56);
	auto __Local__59 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_13"), (EObjectFlags)0x00280008);
	__Local__59->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__59->Parent = __Local__54;
	auto __Local__60 = NewObject<UImage>(__Local__1, TEXT("level1_1"), (EObjectFlags)0x00280008);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__55.Add(__Local__59);
	auto __Local__61 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_15"), (EObjectFlags)0x00280008);
	__Local__61->Parent = __Local__54;
	auto __Local__62 = NewObject<USpacer>(__Local__1, TEXT("Spacer_644"), (EObjectFlags)0x00280008);
	__Local__62->Size = FVector2D(5.000000, 1.000000);
	__Local__62->Slot = __Local__61;
	__Local__61->Content = __Local__62;
	__Local__55.Add(__Local__61);
	auto __Local__63 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_14"), (EObjectFlags)0x00280008);
	__Local__63->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__63->Parent = __Local__54;
	auto __Local__64 = NewObject<UImage>(__Local__1, TEXT("level1_2"), (EObjectFlags)0x00280008);
	__Local__64->Slot = __Local__63;
	__Local__63->Content = __Local__64;
	__Local__55.Add(__Local__63);
	auto __Local__65 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_16"), (EObjectFlags)0x00280008);
	__Local__65->Parent = __Local__54;
	auto __Local__66 = NewObject<USpacer>(__Local__1, TEXT("Spacer_781"), (EObjectFlags)0x00280008);
	__Local__66->Size = FVector2D(5.000000, 1.000000);
	__Local__66->Slot = __Local__65;
	__Local__65->Content = __Local__66;
	__Local__55.Add(__Local__65);
	auto __Local__67 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__67->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__67->Parent = __Local__54;
	auto __Local__68 = NewObject<UImage>(__Local__1, TEXT("level1_3"), (EObjectFlags)0x00280008);
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__55.Add(__Local__67);
	auto __Local__69 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_24"), (EObjectFlags)0x00280008);
	__Local__69->Parent = __Local__54;
	auto __Local__70 = NewObject<USpacer>(__Local__1, TEXT("Spacer_1484"), (EObjectFlags)0x00280008);
	__Local__70->Size = FVector2D(5.000000, 1.000000);
	__Local__70->Slot = __Local__69;
	__Local__69->Content = __Local__70;
	__Local__55.Add(__Local__69);
	auto __Local__71 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__71->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__71->Parent = __Local__54;
	auto __Local__72 = NewObject<UImage>(__Local__1, TEXT("level1_4"), (EObjectFlags)0x00280008);
	__Local__72->Slot = __Local__71;
	__Local__71->Content = __Local__72;
	__Local__55.Add(__Local__71);
	auto __Local__73 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_25"), (EObjectFlags)0x00280008);
	__Local__73->Parent = __Local__54;
	auto __Local__74 = NewObject<USpacer>(__Local__1, TEXT("Spacer_1393"), (EObjectFlags)0x00280008);
	__Local__74->Size = FVector2D(5.000000, 1.000000);
	__Local__74->Slot = __Local__73;
	__Local__73->Content = __Local__74;
	__Local__55.Add(__Local__73);
	auto __Local__75 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__75->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__75->Parent = __Local__54;
	auto __Local__76 = NewObject<UImage>(__Local__1, TEXT("level1_5"), (EObjectFlags)0x00280008);
	__Local__76->Slot = __Local__75;
	__Local__75->Content = __Local__76;
	__Local__55.Add(__Local__75);
	auto __Local__77 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_22"), (EObjectFlags)0x00280008);
	__Local__77->Parent = __Local__54;
	auto __Local__78 = NewObject<USpacer>(__Local__1, TEXT("Spacer_1260"), (EObjectFlags)0x00280008);
	__Local__78->Size = FVector2D(5.000000, 1.000000);
	__Local__78->Slot = __Local__77;
	__Local__77->Content = __Local__78;
	__Local__55.Add(__Local__77);
	auto __Local__79 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_8"), (EObjectFlags)0x00280008);
	__Local__79->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__79->Parent = __Local__54;
	auto __Local__80 = NewObject<UImage>(__Local__1, TEXT("level1_6"), (EObjectFlags)0x00280008);
	__Local__80->Slot = __Local__79;
	__Local__79->Content = __Local__80;
	__Local__55.Add(__Local__79);
	auto __Local__81 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_21"), (EObjectFlags)0x00280008);
	__Local__81->Parent = __Local__54;
	auto __Local__82 = NewObject<USpacer>(__Local__1, TEXT("Spacer_1140"), (EObjectFlags)0x00280008);
	__Local__82->Size = FVector2D(5.000000, 1.000000);
	__Local__82->Slot = __Local__81;
	__Local__81->Content = __Local__82;
	__Local__55.Add(__Local__81);
	auto __Local__83 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_9"), (EObjectFlags)0x00280008);
	__Local__83->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__83->Parent = __Local__54;
	auto __Local__84 = NewObject<UImage>(__Local__1, TEXT("level1_7"), (EObjectFlags)0x00280008);
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__55.Add(__Local__83);
	auto __Local__85 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_20"), (EObjectFlags)0x00280008);
	__Local__85->Parent = __Local__54;
	auto __Local__86 = NewObject<USpacer>(__Local__1, TEXT("Spacer_1053"), (EObjectFlags)0x00280008);
	__Local__86->Size = FVector2D(5.000000, 1.000000);
	__Local__86->Slot = __Local__85;
	__Local__85->Content = __Local__86;
	__Local__55.Add(__Local__85);
	auto __Local__87 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_10"), (EObjectFlags)0x00280008);
	__Local__87->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__87->Parent = __Local__54;
	auto __Local__88 = NewObject<UImage>(__Local__1, TEXT("level1_8"), (EObjectFlags)0x00280008);
	__Local__88->Slot = __Local__87;
	__Local__87->Content = __Local__88;
	__Local__55.Add(__Local__87);
	auto __Local__89 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_19"), (EObjectFlags)0x00280008);
	__Local__89->Parent = __Local__54;
	auto __Local__90 = NewObject<USpacer>(__Local__1, TEXT("Spacer_963"), (EObjectFlags)0x00280008);
	__Local__90->Size = FVector2D(5.000000, 1.000000);
	__Local__90->Slot = __Local__89;
	__Local__89->Content = __Local__90;
	__Local__55.Add(__Local__89);
	auto __Local__91 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_11"), (EObjectFlags)0x00280008);
	__Local__91->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__91->Parent = __Local__54;
	auto __Local__92 = NewObject<UImage>(__Local__1, TEXT("level1_9"), (EObjectFlags)0x00280008);
	__Local__92->Slot = __Local__91;
	__Local__91->Content = __Local__92;
	__Local__55.Add(__Local__91);
	auto __Local__93 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_18"), (EObjectFlags)0x00280008);
	__Local__93->Parent = __Local__54;
	auto __Local__94 = NewObject<USpacer>(__Local__1, TEXT("Spacer_875"), (EObjectFlags)0x00280008);
	__Local__94->Size = FVector2D(5.000000, 1.000000);
	__Local__94->Slot = __Local__93;
	__Local__93->Content = __Local__94;
	__Local__55.Add(__Local__93);
	auto __Local__95 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_12"), (EObjectFlags)0x00280008);
	__Local__95->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__95->Parent = __Local__54;
	auto __Local__96 = NewObject<UImage>(__Local__1, TEXT("level1_10"), (EObjectFlags)0x00280008);
	__Local__96->Slot = __Local__95;
	__Local__95->Content = __Local__96;
	__Local__55.Add(__Local__95);
	__Local__54->Slot = __Local__53;
	__Local__53->Content = __Local__54;
	__Local__15.Add(__Local__53);
	auto __Local__97 = NewObject<UVerticalBoxSlot>(__Local__14, TEXT("VerticalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__97->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__97->Parent = __Local__14;
	auto __Local__98 = NewObject<UHorizontalBox>(__Local__1, TEXT("powerUpgradebox"), (EObjectFlags)0x00280008);
	auto& __Local__99 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__98), UPanelWidget::__PPO__Slots() )));
	__Local__99 = TArray<UPanelSlot*> ();
	__Local__99.Reserve(2);
	auto __Local__100 = NewObject<UHorizontalBoxSlot>(__Local__98, TEXT("HorizontalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__100->Parent = __Local__98;
	auto __Local__101 = NewObject<UTextBlock>(__Local__1, TEXT("tower_power"), (EObjectFlags)0x00280008);
	__Local__101->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"953927E741B773F9E53FB19865ED3BBF\", \"0\")")	);
	auto& __Local__102 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__101->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__102 = FLinearColor(0.203480, 1.000000, 0.000000, 1.000000);
	__Local__101->Font.Size = 80;
	__Local__101->Slot = __Local__100;
	__Local__101->bIsVariable = true;
	__Local__100->Content = __Local__101;
	__Local__99.Add(__Local__100);
	auto __Local__103 = NewObject<UHorizontalBoxSlot>(__Local__98, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__103->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__103->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__103->Parent = __Local__98;
	auto __Local__104 = NewObject<UButton>(__Local__1, TEXT("Button_PowerUpgrade"), (EObjectFlags)0x00280008);
	auto& __Local__105 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__104), UPanelWidget::__PPO__Slots() )));
	__Local__105 = TArray<UPanelSlot*> ();
	__Local__105.Reserve(1);
	auto __Local__106 = NewObject<UButtonSlot>(__Local__104, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__106->Parent = __Local__104;
	auto __Local__107 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_705"), (EObjectFlags)0x00280008);
	__Local__107->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"D03B64A946496C52BD64639A44F4A9C4\", \"\ucd9c\ub825 \uac15\ud654\")")	);
	auto& __Local__108 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__107->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__108 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__107->Font.Size = 49;
	__Local__107->Slot = __Local__106;
	__Local__106->Content = __Local__107;
	__Local__105.Add(__Local__106);
	__Local__104->Slot = __Local__103;
	__Local__103->Content = __Local__104;
	__Local__99.Add(__Local__103);
	__Local__98->Slot = __Local__97;
	__Local__97->Content = __Local__98;
	__Local__15.Add(__Local__97);
	__Local__14->Slot = __Local__13;
	__Local__13->Content = __Local__14;
	__Local__10.Add(__Local__13);
	auto __Local__109 = NewObject<UCanvasPanelSlot>(__Local__9, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__109->LayoutData.Offsets.Left = -225.000000f;
	__Local__109->LayoutData.Offsets.Top = -80.000000f;
	__Local__109->LayoutData.Offsets.Right = 450.000000f;
	__Local__109->LayoutData.Offsets.Bottom = 350.000000f;
	__Local__109->LayoutData.Anchors.Minimum = FVector2D(0.850000, 0.500000);
	__Local__109->LayoutData.Anchors.Maximum = FVector2D(0.850000, 0.500000);
	__Local__109->Parent = __Local__9;
	auto __Local__110 = NewObject<UVerticalBox>(__Local__1, TEXT("ModuleBOX"), (EObjectFlags)0x00280008);
	auto& __Local__111 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__110), UPanelWidget::__PPO__Slots() )));
	__Local__111 = TArray<UPanelSlot*> ();
	__Local__111.Reserve(3);
	auto __Local__112 = NewObject<UVerticalBoxSlot>(__Local__110, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__112->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__112->Parent = __Local__110;
	auto __Local__113 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_159"), (EObjectFlags)0x00280008);
	auto& __Local__114 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__113), UPanelWidget::__PPO__Slots() )));
	__Local__114 = TArray<UPanelSlot*> ();
	__Local__114.Reserve(3);
	auto __Local__115 = NewObject<UHorizontalBoxSlot>(__Local__113, TEXT("HorizontalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__115->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__115->Parent = __Local__113;
	auto __Local__116 = NewObject<UOverlay>(__Local__1, TEXT("moduleoverlay1"), (EObjectFlags)0x00280008);
	auto& __Local__117 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__116), UPanelWidget::__PPO__Slots() )));
	__Local__117 = TArray<UPanelSlot*> ();
	__Local__117.Reserve(2);
	auto __Local__118 = NewObject<UOverlaySlot>(__Local__116, TEXT("OverlaySlot_5"), (EObjectFlags)0x00280008);
	__Local__118->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__118->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__118->Parent = __Local__116;
	auto __Local__119 = NewObject<UVerticalBox>(__Local__1, TEXT("moduleinfo1"), (EObjectFlags)0x00280008);
	auto& __Local__120 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__119), UPanelWidget::__PPO__Slots() )));
	__Local__120 = TArray<UPanelSlot*> ();
	__Local__120.Reserve(2);
	auto __Local__121 = NewObject<UVerticalBoxSlot>(__Local__119, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__121->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__121->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__121->Parent = __Local__119;
	auto __Local__122 = NewObject<UTextBlock>(__Local__1, TEXT("ModuleName1"), (EObjectFlags)0x00280008);
	__Local__122->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"19BE18EA4E30D84B213457947DAE3C0C\", \"\ubaa8\ub4c81\")")	);
	__Local__122->Slot = __Local__121;
	__Local__122->bIsVariable = true;
	__Local__121->Content = __Local__122;
	__Local__120.Add(__Local__121);
	auto __Local__123 = NewObject<UVerticalBoxSlot>(__Local__119, TEXT("VerticalBoxSlot_10"), (EObjectFlags)0x00280008);
	__Local__123->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__123->Parent = __Local__119;
	auto __Local__124 = NewObject<UMultiLineEditableTextBox>(__Local__1, TEXT("module1Infotext"), (EObjectFlags)0x00280008);
	__Local__124->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"F072B62A418CB234382F2ABFB4FE6EC1\", \"\ubaa8\ub4c8 \uc124\uba85:\")")	);
	__Local__124->bIsReadOnly = true;
	auto& __Local__125 = (*(AccessPrivateProperty<ETextWrappingPolicy >((__Local__124), UTextLayoutWidget::__PPO__WrappingPolicy() )));
	__Local__125 = ETextWrappingPolicy::AllowPerCharacterWrapping;
	__Local__124->Slot = __Local__123;
	__Local__124->bIsEnabled = false;
	__Local__123->Content = __Local__124;
	__Local__120.Add(__Local__123);
	__Local__119->Slot = __Local__118;
	__Local__118->Content = __Local__119;
	__Local__117.Add(__Local__118);
	auto __Local__126 = NewObject<UOverlaySlot>(__Local__116, TEXT("OverlaySlot_3"), (EObjectFlags)0x00280008);
	__Local__126->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__126->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__126->Parent = __Local__116;
	auto __Local__127 = NewObject<UButton>(__Local__1, TEXT("Button_module0"), (EObjectFlags)0x00280008);
	__Local__127->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.238000);
	__Local__127->Slot = __Local__126;
	__Local__126->Content = __Local__127;
	__Local__117.Add(__Local__126);
	__Local__116->Slot = __Local__115;
	__Local__116->Visibility = ESlateVisibility::Visible;
	__Local__115->Content = __Local__116;
	__Local__114.Add(__Local__115);
	auto __Local__128 = NewObject<UHorizontalBoxSlot>(__Local__113, TEXT("HorizontalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__128->Parent = __Local__113;
	auto __Local__129 = NewObject<USpacer>(__Local__1, TEXT("Spacer_354"), (EObjectFlags)0x00280008);
	__Local__129->Size = FVector2D(15.000000, 1.000000);
	__Local__129->Slot = __Local__128;
	__Local__128->Content = __Local__129;
	__Local__114.Add(__Local__128);
	auto __Local__130 = NewObject<UHorizontalBoxSlot>(__Local__113, TEXT("HorizontalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__130->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__130->Parent = __Local__113;
	auto __Local__131 = NewObject<UOverlay>(__Local__1, TEXT("moduleoverlay2"), (EObjectFlags)0x00280008);
	auto& __Local__132 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__131), UPanelWidget::__PPO__Slots() )));
	__Local__132 = TArray<UPanelSlot*> ();
	__Local__132.Reserve(2);
	auto __Local__133 = NewObject<UOverlaySlot>(__Local__131, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__133->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__133->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__133->Parent = __Local__131;
	auto __Local__134 = NewObject<UVerticalBox>(__Local__1, TEXT("moduleInfo2"), (EObjectFlags)0x00280008);
	auto& __Local__135 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__134), UPanelWidget::__PPO__Slots() )));
	__Local__135 = TArray<UPanelSlot*> ();
	__Local__135.Reserve(2);
	auto __Local__136 = NewObject<UVerticalBoxSlot>(__Local__134, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__136->Padding.Left = 4.000000f;
	__Local__136->Padding.Top = 2.000000f;
	__Local__136->Padding.Right = 4.000000f;
	__Local__136->Padding.Bottom = 2.000000f;
	__Local__136->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__136->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__136->Parent = __Local__134;
	auto __Local__137 = NewObject<UTextBlock>(__Local__1, TEXT("ModuleName2"), (EObjectFlags)0x00280008);
	__Local__137->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"88F7D7D44078676823D13DBF1ACA4B43\", \"\ubaa8\ub4c82\")")	);
	__Local__137->Slot = __Local__136;
	__Local__137->bIsVariable = true;
	__Local__136->Content = __Local__137;
	__Local__135.Add(__Local__136);
	auto __Local__138 = NewObject<UVerticalBoxSlot>(__Local__134, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__138->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__138->Parent = __Local__134;
	auto __Local__139 = NewObject<UMultiLineEditableTextBox>(__Local__1, TEXT("module2Infotext"), (EObjectFlags)0x00280008);
	__Local__139->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"0DEB9DED45C7037533A57BB0ADFA241B\", \"\ubaa8\ud2a4 \uc124\uba85 \uc815\ubcf4\uc774\uc785\ub825  asdasasdasdasdasd \")")	);
	__Local__139->bIsReadOnly = true;
	auto& __Local__140 = (*(AccessPrivateProperty<ETextWrappingPolicy >((__Local__139), UTextLayoutWidget::__PPO__WrappingPolicy() )));
	__Local__140 = ETextWrappingPolicy::AllowPerCharacterWrapping;
	__Local__139->Slot = __Local__138;
	__Local__138->Content = __Local__139;
	__Local__135.Add(__Local__138);
	__Local__134->Slot = __Local__133;
	__Local__133->Content = __Local__134;
	__Local__132.Add(__Local__133);
	auto __Local__141 = NewObject<UOverlaySlot>(__Local__131, TEXT("OverlaySlot_3"), (EObjectFlags)0x00280008);
	__Local__141->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__141->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__141->Parent = __Local__131;
	auto __Local__142 = NewObject<UButton>(__Local__1, TEXT("Button_module1"), (EObjectFlags)0x00280008);
	__Local__142->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.300000);
	__Local__142->Slot = __Local__141;
	__Local__141->Content = __Local__142;
	__Local__132.Add(__Local__141);
	__Local__131->Slot = __Local__130;
	__Local__130->Content = __Local__131;
	__Local__114.Add(__Local__130);
	__Local__113->Slot = __Local__112;
	__Local__112->Content = __Local__113;
	__Local__111.Add(__Local__112);
	auto __Local__143 = NewObject<UVerticalBoxSlot>(__Local__110, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__143->Parent = __Local__110;
	auto __Local__144 = NewObject<USpacer>(__Local__1, TEXT("Spacer_153"), (EObjectFlags)0x00280008);
	__Local__144->Size = FVector2D(1.000000, 15.000000);
	__Local__144->Slot = __Local__143;
	__Local__143->Content = __Local__144;
	__Local__111.Add(__Local__143);
	auto __Local__145 = NewObject<UVerticalBoxSlot>(__Local__110, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__145->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__145->Parent = __Local__110;
	auto __Local__146 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_338"), (EObjectFlags)0x00280008);
	auto& __Local__147 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__146), UPanelWidget::__PPO__Slots() )));
	__Local__147 = TArray<UPanelSlot*> ();
	__Local__147.Reserve(3);
	auto __Local__148 = NewObject<UHorizontalBoxSlot>(__Local__146, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__148->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__148->Parent = __Local__146;
	auto __Local__149 = NewObject<UOverlay>(__Local__1, TEXT("moduleoverlay3"), (EObjectFlags)0x00280008);
	auto& __Local__150 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__149), UPanelWidget::__PPO__Slots() )));
	__Local__150 = TArray<UPanelSlot*> ();
	__Local__150.Reserve(2);
	auto __Local__151 = NewObject<UOverlaySlot>(__Local__149, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__151->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__151->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__151->Parent = __Local__149;
	auto __Local__152 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_277"), (EObjectFlags)0x00280008);
	auto& __Local__153 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__152), UPanelWidget::__PPO__Slots() )));
	__Local__153 = TArray<UPanelSlot*> ();
	__Local__153.Reserve(2);
	auto __Local__154 = NewObject<UVerticalBoxSlot>(__Local__152, TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__154->Padding.Left = 4.000000f;
	__Local__154->Padding.Top = 2.000000f;
	__Local__154->Padding.Right = 4.000000f;
	__Local__154->Padding.Bottom = 2.000000f;
	__Local__154->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__154->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__154->Parent = __Local__152;
	auto __Local__155 = NewObject<UTextBlock>(__Local__1, TEXT("ModuleName3"), (EObjectFlags)0x00280008);
	__Local__155->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"810C1FEB410AB9404E82D8AD7986D0D8\", \"\ubaa8\ub4c83\")")	);
	__Local__155->Slot = __Local__154;
	__Local__155->bIsVariable = true;
	__Local__154->Content = __Local__155;
	__Local__153.Add(__Local__154);
	auto __Local__156 = NewObject<UVerticalBoxSlot>(__Local__152, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__156->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__156->Parent = __Local__152;
	auto __Local__157 = NewObject<UMultiLineEditableTextBox>(__Local__1, TEXT("module3Infotext"), (EObjectFlags)0x00280008);
	__Local__157->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"833F071D4B8D23FEB50E1FBC93DC5A2E\", \"\ubaa8\ud2a4 \uc124\uba85 \uc815\ubcf4\uc774\uc785\")")	);
	__Local__157->bIsReadOnly = true;
	auto& __Local__158 = (*(AccessPrivateProperty<ETextWrappingPolicy >((__Local__157), UTextLayoutWidget::__PPO__WrappingPolicy() )));
	__Local__158 = ETextWrappingPolicy::AllowPerCharacterWrapping;
	__Local__157->Slot = __Local__156;
	__Local__156->Content = __Local__157;
	__Local__153.Add(__Local__156);
	__Local__152->Slot = __Local__151;
	__Local__151->Content = __Local__152;
	__Local__150.Add(__Local__151);
	auto __Local__159 = NewObject<UOverlaySlot>(__Local__149, TEXT("OverlaySlot_4"), (EObjectFlags)0x00280008);
	__Local__159->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__159->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__159->Parent = __Local__149;
	auto __Local__160 = NewObject<UButton>(__Local__1, TEXT("Button_module2"), (EObjectFlags)0x00280008);
	__Local__160->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.300000);
	__Local__160->Slot = __Local__159;
	__Local__159->Content = __Local__160;
	__Local__150.Add(__Local__159);
	__Local__149->Slot = __Local__148;
	__Local__148->Content = __Local__149;
	__Local__147.Add(__Local__148);
	auto __Local__161 = NewObject<UHorizontalBoxSlot>(__Local__146, TEXT("HorizontalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__161->Parent = __Local__146;
	auto __Local__162 = NewObject<USpacer>(__Local__1, TEXT("Spacer_567"), (EObjectFlags)0x00280008);
	__Local__162->Size = FVector2D(15.000000, 1.000000);
	__Local__162->Slot = __Local__161;
	__Local__161->Content = __Local__162;
	__Local__147.Add(__Local__161);
	auto __Local__163 = NewObject<UHorizontalBoxSlot>(__Local__146, TEXT("HorizontalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__163->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__163->Parent = __Local__146;
	auto __Local__164 = NewObject<UOverlay>(__Local__1, TEXT("moduleoverlay4"), (EObjectFlags)0x00280008);
	auto& __Local__165 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__164), UPanelWidget::__PPO__Slots() )));
	__Local__165 = TArray<UPanelSlot*> ();
	__Local__165.Reserve(2);
	auto __Local__166 = NewObject<UOverlaySlot>(__Local__164, TEXT("OverlaySlot_3"), (EObjectFlags)0x00280008);
	__Local__166->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__166->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__166->Parent = __Local__164;
	auto __Local__167 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_276"), (EObjectFlags)0x00280008);
	auto& __Local__168 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__167), UPanelWidget::__PPO__Slots() )));
	__Local__168 = TArray<UPanelSlot*> ();
	__Local__168.Reserve(2);
	auto __Local__169 = NewObject<UVerticalBoxSlot>(__Local__167, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__169->Padding.Left = 4.000000f;
	__Local__169->Padding.Top = 2.000000f;
	__Local__169->Padding.Right = 4.000000f;
	__Local__169->Padding.Bottom = 2.000000f;
	__Local__169->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__169->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__169->Parent = __Local__167;
	auto __Local__170 = NewObject<UTextBlock>(__Local__1, TEXT("ModuleName4"), (EObjectFlags)0x00280008);
	__Local__170->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"74A57E544F45E24BB53CD2B81B18D4DD\", \"\ubaa8\ub4c84\")")	);
	__Local__170->Slot = __Local__169;
	__Local__170->bIsVariable = true;
	__Local__169->Content = __Local__170;
	__Local__168.Add(__Local__169);
	auto __Local__171 = NewObject<UVerticalBoxSlot>(__Local__167, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__171->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__171->Parent = __Local__167;
	auto __Local__172 = NewObject<UMultiLineEditableTextBox>(__Local__1, TEXT("module4Infotext"), (EObjectFlags)0x00280008);
	__Local__172->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"72F3D5744547D00BB0DB51BE55212297\", \"\ubaa8\ud2a4 \uc124\uba85 \uc815\ubcf4\uc774\uc785\ub825 ddddddddddddddddddd\")")	);
	__Local__172->bIsReadOnly = true;
	auto& __Local__173 = (*(AccessPrivateProperty<ETextWrappingPolicy >((__Local__172), UTextLayoutWidget::__PPO__WrappingPolicy() )));
	__Local__173 = ETextWrappingPolicy::AllowPerCharacterWrapping;
	__Local__172->Slot = __Local__171;
	__Local__171->Content = __Local__172;
	__Local__168.Add(__Local__171);
	__Local__167->Slot = __Local__166;
	__Local__166->Content = __Local__167;
	__Local__165.Add(__Local__166);
	auto __Local__174 = NewObject<UOverlaySlot>(__Local__164, TEXT("OverlaySlot_4"), (EObjectFlags)0x00280008);
	__Local__174->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__174->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__174->Parent = __Local__164;
	auto __Local__175 = NewObject<UButton>(__Local__1, TEXT("Button_module3"), (EObjectFlags)0x00280008);
	__Local__175->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.300000);
	__Local__175->Slot = __Local__174;
	__Local__174->Content = __Local__175;
	__Local__165.Add(__Local__174);
	__Local__164->Slot = __Local__163;
	__Local__163->Content = __Local__164;
	__Local__147.Add(__Local__163);
	__Local__146->Slot = __Local__145;
	__Local__145->Content = __Local__146;
	__Local__111.Add(__Local__145);
	__Local__110->Slot = __Local__109;
	__Local__109->Content = __Local__110;
	__Local__10.Add(__Local__109);
	auto __Local__176 = NewObject<UCanvasPanelSlot>(__Local__9, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__176->LayoutData.Offsets.Left = -250.000000f;
	__Local__176->LayoutData.Offsets.Top = 300.000000f;
	__Local__176->LayoutData.Offsets.Right = 500.000000f;
	__Local__176->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__176->LayoutData.Anchors.Minimum = FVector2D(0.850000, 0.500000);
	__Local__176->LayoutData.Anchors.Maximum = FVector2D(0.850000, 0.500000);
	__Local__176->Parent = __Local__9;
	auto __Local__177 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_527"), (EObjectFlags)0x00280008);
	auto& __Local__178 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__177), UPanelWidget::__PPO__Slots() )));
	__Local__178 = TArray<UPanelSlot*> ();
	__Local__178.Reserve(2);
	auto __Local__179 = NewObject<UHorizontalBoxSlot>(__Local__177, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__179->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__179->Parent = __Local__177;
	auto __Local__180 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_260"), (EObjectFlags)0x00280008);
	__Local__180->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"668A25EA4ED00379C33D639CFA0684F3\", \"ENERGY :\")")	);
	__Local__180->Font.Size = 40;
	__Local__180->Slot = __Local__179;
	__Local__179->Content = __Local__180;
	__Local__178.Add(__Local__179);
	auto __Local__181 = NewObject<UHorizontalBoxSlot>(__Local__177, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__181->Parent = __Local__177;
	auto __Local__182 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_5"), (EObjectFlags)0x00280008);
	__Local__182->Font.Size = 60;
	__Local__182->Slot = __Local__181;
	__Local__181->Content = __Local__182;
	__Local__178.Add(__Local__181);
	__Local__177->Slot = __Local__176;
	__Local__176->Content = __Local__177;
	__Local__10.Add(__Local__176);
	auto __Local__183 = NewObject<UCanvasPanelSlot>(__Local__9, TEXT("CanvasPanelSlot_33"), (EObjectFlags)0x00280008);
	__Local__183->LayoutData.Offsets.Left = -250.000000f;
	__Local__183->LayoutData.Offsets.Top = 400.000000f;
	__Local__183->LayoutData.Offsets.Right = 500.000000f;
	__Local__183->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__183->LayoutData.Anchors.Minimum = FVector2D(0.850000, 0.500000);
	__Local__183->LayoutData.Anchors.Maximum = FVector2D(0.850000, 0.500000);
	__Local__183->Parent = __Local__9;
	auto __Local__184 = NewObject<UButton>(__Local__1, TEXT("Button_UpgradeDone"), (EObjectFlags)0x00280008);
	auto& __Local__185 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__184), UPanelWidget::__PPO__Slots() )));
	__Local__185 = TArray<UPanelSlot*> ();
	__Local__185.Reserve(1);
	auto __Local__186 = NewObject<UButtonSlot>(__Local__184, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__186->Parent = __Local__184;
	auto __Local__187 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_985"), (EObjectFlags)0x00280008);
	__Local__187->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F58CEBA8455393B8BE358BA4C4CED73C]\", \"EBAD5E604841AF996FB57AB7B811676F\", \"\uc5c5\uadf8\ub808\uc774\ub4dc \ud655\uc778\")")	);
	auto& __Local__188 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__187->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__188 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__187->Font.Size = 49;
	__Local__187->Slot = __Local__186;
	__Local__186->Content = __Local__187;
	__Local__185.Add(__Local__186);
	__Local__184->Slot = __Local__183;
	__Local__183->Content = __Local__184;
	__Local__10.Add(__Local__183);
	__Local__1->RootWidget = __Local__9;
}
PRAGMA_ENABLE_OPTIMIZATION
void Uwdg_towerUpgrade_C__pf3053510930::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__189;
	SlotNames.Append(__Local__189);
}
void Uwdg_towerUpgrade_C__pf3053510930::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__190;
	TArray<FDelegateRuntimeBinding>  __Local__191;
	__Local__191.AddUninitialized(5);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__191.GetData(), 5);
	auto& __Local__192 = __Local__191[0];
	__Local__192.ObjectName = FString(TEXT("tower_Name"));
	__Local__192.PropertyName = FName(TEXT("Text"));
	__Local__192.FunctionName = FName(TEXT("Get_tower_power_1_Text_0"));
	auto& __Local__193 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__192.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__193 = TArray<FPropertyPathSegment> ();
	__Local__193.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__193.GetData(), 1);
	auto& __Local__194 = __Local__193[0];
	__Local__194.Name = FName(TEXT("Get_tower_power_1_Text_0"));
	auto& __Local__195 = __Local__191[1];
	__Local__195.ObjectName = FString(TEXT("tower_power"));
	__Local__195.PropertyName = FName(TEXT("Text"));
	auto& __Local__196 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__195.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__196 = TArray<FPropertyPathSegment> ();
	__Local__196.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__196.GetData(), 1);
	auto& __Local__197 = __Local__196[0];
	__Local__197.Name = FName(TEXT("PowerLevel"));
	__Local__195.Kind = EBindingKind::Property;
	auto& __Local__198 = __Local__191[2];
	__Local__198.ObjectName = FString(TEXT("tower_Name_1"));
	__Local__198.PropertyName = FName(TEXT("Text"));
	auto& __Local__199 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__198.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__199 = TArray<FPropertyPathSegment> ();
	__Local__199.AddUninitialized(2);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__199.GetData(), 2);
	auto& __Local__200 = __Local__199[0];
	__Local__200.Name = FName(TEXT("Tower"));
	auto& __Local__201 = __Local__199[1];
	__Local__201.Name = FName(TEXT("ATK_RANGE"));
	__Local__198.Kind = EBindingKind::Property;
	auto& __Local__202 = __Local__191[3];
	__Local__202.ObjectName = FString(TEXT("tower_Name_2"));
	__Local__202.PropertyName = FName(TEXT("Text"));
	auto& __Local__203 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__202.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__203 = TArray<FPropertyPathSegment> ();
	__Local__203.AddUninitialized(2);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__203.GetData(), 2);
	auto& __Local__204 = __Local__203[0];
	__Local__204.Name = FName(TEXT("Tower"));
	auto& __Local__205 = __Local__203[1];
	__Local__205.Name = FName(TEXT("ATK_SPD"));
	__Local__202.Kind = EBindingKind::Property;
	auto& __Local__206 = __Local__191[4];
	__Local__206.ObjectName = FString(TEXT("TextBlock_5"));
	__Local__206.PropertyName = FName(TEXT("Text"));
	auto& __Local__207 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__206.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__207 = TArray<FPropertyPathSegment> ();
	__Local__207.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__207.GetData(), 1);
	auto& __Local__208 = __Local__207[0];
	__Local__208.Name = FName(TEXT("Enery"));
	__Local__206.Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(Uwdg_towerUpgrade_C__pf3053510930::StaticClass())->MiscConvertedSubobjects[0]), __Local__190, __Local__191);
}
void Uwdg_towerUpgrade_C__pf3053510930::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	bpf__InittowerUpwdg__pf();
	// optimized KCST_UnconditionalGoto
	bpf__UpdateResource__pf();
	bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpv__PowerLevel__pf, 20);
	bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__powerprice__pf, bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf);
	bpv__powerprice__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	bpf__ApplyAUpgrade__pf();
	return; // KCST_GotoReturn
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 23);
	return; // KCST_GotoReturn
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 20);
	// optimized KCST_UnconditionalGoto
	bpf__UpgradePower__pf();
	return; // KCST_GotoReturn
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	bpf__SeletModule__pf(bpv__Button_module0__pf);
	bpf__isSelectedModule__pf(bpv__Button_module0__pf);
	return; // KCST_GotoReturn
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 18);
	// optimized KCST_UnconditionalGoto
	bpf__SeletModule__pf(bpv__Button_module1__pf);
	bpf__isSelectedModule__pf(bpv__Button_module1__pf);
	return; // KCST_GotoReturn
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 14);
	// optimized KCST_UnconditionalGoto
	bpf__CloseWidget__pf();
	return; // KCST_GotoReturn
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpf__SeletModule__pf(bpv__Button_module2__pf);
	bpf__isSelectedModule__pf(bpv__Button_module2__pf);
	return; // KCST_GotoReturn
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	bpf__SeletModule__pf(bpv__Button_module3__pf);
	bpf__isSelectedModule__pf(bpv__Button_module3__pf);
	return; // KCST_GotoReturn
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf)
{
	b0l__K2Node_Event_IsDesignTime__pf = bpp__IsDesignTime__pf;
	bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_2(23);
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_0(21);
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__BndEvt__Button_128_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_3(20);
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__BndEvt__Button_module0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_4(19);
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__BndEvt__Button_module1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_5(18);
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__BndEvt__Button_undoUpgrade_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_6(14);
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__BndEvt__Button_UpgradeDone_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_1(7);
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__BndEvt__Button_module3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_8(4);
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__BndEvt__Button_module2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_7(1);
}
FText  Uwdg_towerUpgrade_C__pf3053510930::bpf__Get_tower_power_1_Text_0__pf()
{
	FText bpp__ReturnValue__pf{};
	FString bpfv__CallFunc_GetDisplayName_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	bpfv__CallFunc_GetDisplayName_ReturnValue__pf = UKismetSystemLibrary::GetDisplayName(bpv__Tower__pf);
	bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_GetDisplayName_ReturnValue__pf);
	bpp__ReturnValue__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__isSelectedModule__pf(UButton* bpp__NewParam__pf)
{
	FLinearColor bpfv__CallFunc_MakeColor_ReturnValue__pf(EForceInit::ForceInit);
	FString bpfv__CallFunc_GetObjectName_ReturnValue__pf{};
	int32 bpfv__CallFunc_Len_ReturnValue__pf{};
	FLinearColor bpfv__CallFunc_MakeColor_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_GetSubstring_ReturnValue__pf{};
	int32 bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetObjectName_ReturnValue__pf = UKismetSystemLibrary::GetObjectName(bpp__NewParam__pf);
				bpfv__CallFunc_Len_ReturnValue__pf = UKismetStringLibrary::Len(bpfv__CallFunc_GetObjectName_ReturnValue__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Len_ReturnValue__pf, 1);
				bpfv__CallFunc_GetSubstring_ReturnValue__pf = UKismetStringLibrary::GetSubstring(bpfv__CallFunc_GetObjectName_ReturnValue__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, bpfv__CallFunc_Len_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf = UKismetStringLibrary::Conv_StringToInt(bpfv__CallFunc_GetSubstring_ReturnValue__pf);
				if (!bpv__moduleSelection__pf[bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf])
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_MakeColor_ReturnValue_1__pf = UKismetMathLibrary::MakeColor(1.000000, 0.000000, 0.000000, 0.300000);
				if(::IsValid(bpp__NewParam__pf))
				{
					bpp__NewParam__pf->UButton::SetBackgroundColor(bpfv__CallFunc_MakeColor_ReturnValue_1__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_MakeColor_ReturnValue__pf = UKismetMathLibrary::MakeColor(0.000000, 0.000000, 1.000000, 0.300000);
				if(::IsValid(bpp__NewParam__pf))
				{
					bpp__NewParam__pf->UButton::SetBackgroundColor(bpfv__CallFunc_MakeColor_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__SeletModule__pf(UButton* bpp__NewParam__pf)
{
	FString bpfv__CallFunc_GetObjectName_ReturnValue__pf{};
	int32 bpfv__CallFunc_Len_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_GetSubstring_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv_____int_Variable__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetObjectName_ReturnValue__pf = UKismetSystemLibrary::GetObjectName(bpp__NewParam__pf);
				bpfv__CallFunc_Len_ReturnValue__pf = UKismetStringLibrary::Len(bpfv__CallFunc_GetObjectName_ReturnValue__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Len_ReturnValue__pf, 1);
				bpfv__CallFunc_GetSubstring_ReturnValue__pf = UKismetStringLibrary::GetSubstring(bpfv__CallFunc_GetObjectName_ReturnValue__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, bpfv__CallFunc_Len_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf = UKismetStringLibrary::Conv_StringToInt(bpfv__CallFunc_GetSubstring_ReturnValue__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(bpv__moduleSelection__pf[bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf]);
				FCustomThunkTemplates::Array_Set(bpv__moduleSelection__pf, bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf, bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, false);
			}
		case 2:
			{
				bpv__SelectedModuleNum__pf = 0;
			}
		case 3:
			{
				bpfv_____int_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__moduleSelection__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv_____int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 5:
			{
				__StateStack.Push(11);
			}
		case 6:
			{
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__moduleSelection__pf[bpfv_____int_Variable__pf], true);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__SelectedModuleNum__pf, 1);
				bpv__SelectedModuleNum__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__SelectedModuleNum__pf, bpv__MaxModulenum__pf);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_GetObjectName_ReturnValue__pf = UKismetSystemLibrary::GetObjectName(bpp__NewParam__pf);
				bpfv__CallFunc_Len_ReturnValue__pf = UKismetStringLibrary::Len(bpfv__CallFunc_GetObjectName_ReturnValue__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Len_ReturnValue__pf, 1);
				bpfv__CallFunc_GetSubstring_ReturnValue__pf = UKismetStringLibrary::GetSubstring(bpfv__CallFunc_GetObjectName_ReturnValue__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, bpfv__CallFunc_Len_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf = UKismetStringLibrary::Conv_StringToInt(bpfv__CallFunc_GetSubstring_ReturnValue__pf);
				if (!bpv__moduleSelection__pf[bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf])
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_GetObjectName_ReturnValue__pf = UKismetSystemLibrary::GetObjectName(bpp__NewParam__pf);
				bpfv__CallFunc_Len_ReturnValue__pf = UKismetStringLibrary::Len(bpfv__CallFunc_GetObjectName_ReturnValue__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Len_ReturnValue__pf, 1);
				bpfv__CallFunc_GetSubstring_ReturnValue__pf = UKismetStringLibrary::GetSubstring(bpfv__CallFunc_GetObjectName_ReturnValue__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, bpfv__CallFunc_Len_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf = UKismetStringLibrary::Conv_StringToInt(bpfv__CallFunc_GetSubstring_ReturnValue__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__moduleSelection__pf[bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf]);
				FCustomThunkTemplates::Array_Set(bpv__moduleSelection__pf, bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Variable__pf, 1);
				bpfv_____int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__ApplyAUpgrade__pf()
{
	int32 bpfv_____int_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMain_GameInstance_C__pf3789721252* bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 bpfv_____int_Variable_1__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv_____int_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__moduleSelection__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv_____int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 3:
			{
				__StateStack.Push(13);
			}
		case 4:
			{
				if (!bpv__moduleSelection__pf[bpfv_____int_Variable__pf])
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpv__Tower__pf))
				{
					bpv__Tower__pf->bpf__ModuleUpgrade__pf(bpfv_____int_Variable__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				bpfv_____int_Variable_1__pf = 0;
			}
		case 7:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv_____int_Variable_1__pf, bpv__temp_powerUpgrade__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 8:
			{
				__StateStack.Push(14);
			}
		case 9:
			{
				if(::IsValid(bpv__Tower__pf))
				{
					bpv__Tower__pf->bpf__PowerUpgrade__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf = Cast<UMain_GameInstance_C__pf3789721252>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__elecricity_manager__pf))
				{
					bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__elecricity_manager__pf->bpf__set_electricity__pf(bpv__Enery__pf);
				}
			}
		case 12:
			{
				bpf__CloseWidget__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Variable__pf, 1);
				bpfv_____int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 2;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Variable_1__pf, 1);
				bpfv_____int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 7;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__UpgradePower__pf()
{
	FLinearColor bpfv__K2Node_MakeStruct_LinearColor__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	FLinearColor bpfv__K2Node_MakeStruct_LinearColor_1__pf(EForceInit::ForceInit);
	FLinearColor bpfv__K2Node_MakeStruct_LinearColor_2__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	UImage* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpv__PowerLevel__pf, 9);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__K2Node_MakeStruct_LinearColor__pf.R = 1.000000;
				bpfv__K2Node_MakeStruct_LinearColor__pf.G = 1.000000;
				bpfv__K2Node_MakeStruct_LinearColor__pf.B = 1.000000;
				bpfv__K2Node_MakeStruct_LinearColor__pf.A = 1.000000;
				if(::IsValid(bpv__Button_PowerUpgrade__pf))
				{
					bpv__Button_PowerUpgrade__pf->UButton::SetBackgroundColor(bpfv__K2Node_MakeStruct_LinearColor__pf);
				}
			}
		case 3:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Enery__pf, bpv__powerprice__pf);
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Enery__pf, bpv__powerprice__pf);
				bpv__Enery__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
			}
		case 5:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__powerprice__pf, 20);
				bpv__powerprice__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 6:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpv__PowerLevel__pf, 1);
				bpv__PowerLevel__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
			}
		case 7:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__temp_powerUpgrade__pf, 1);
				bpv__temp_powerUpgrade__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
			}
		case 8:
			{
				bpfv__K2Node_MakeStruct_LinearColor_2__pf.R = 1.000000;
				bpfv__K2Node_MakeStruct_LinearColor_2__pf.G = 0.000000;
				bpfv__K2Node_MakeStruct_LinearColor_2__pf.B = 0.000000;
				bpfv__K2Node_MakeStruct_LinearColor_2__pf.A = 1.000000;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpv__PowerLevel__pf, 1);
				FCustomThunkTemplates::Array_Get(bpv__PowerLevelImg__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->UImage::SetColorAndOpacity(bpfv__K2Node_MakeStruct_LinearColor_2__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpfv__K2Node_MakeStruct_LinearColor_1__pf.R = 1.000000;
				bpfv__K2Node_MakeStruct_LinearColor_1__pf.G = 0.000000;
				bpfv__K2Node_MakeStruct_LinearColor_1__pf.B = 0.000000;
				bpfv__K2Node_MakeStruct_LinearColor_1__pf.A = 1.000000;
				if(::IsValid(bpv__Button_PowerUpgrade__pf))
				{
					bpv__Button_PowerUpgrade__pf->UButton::SetBackgroundColor(bpfv__K2Node_MakeStruct_LinearColor_1__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__CloseWidget__pf()
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = false;
	}
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	if(::IsValid(bpv__Player__pf))
	{
		bpv__Player__pf->bpf__set_is_focussing__pf(false);
	}
	RemoveFromParent();
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__UpdateResource__pf()
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	UMain_GameInstance_C__pf3789721252* bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 bpfv__CallFunc_get_electricity_cur_electricity_res__pf{};
	int32 bpfv__CallFunc_Divide_IntInt_ReturnValue__pf{};
	FLinearColor bpfv__K2Node_MakeStruct_LinearColor__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv_____int_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	UImage* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__Tower__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				int32  __Local__209 = 0;
				int32  __Local__210 = 0;
				bpfv__CallFunc_Divide_IntInt_ReturnValue__pf = UKismetMathLibrary::Divide_IntInt(((::IsValid(bpv__Tower__pf)) ? (bpv__Tower__pf->bpv__PowerUp__pf) : (__Local__209)), ((::IsValid(bpv__Tower__pf)) ? (bpv__Tower__pf->bpv__PowerUpAmount__pf) : (__Local__210)));
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__CallFunc_Divide_IntInt_ReturnValue__pf, 1);
				bpv__PowerLevel__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 3:
			{
				bpv__temp_powerUpgrade__pf = -1;
			}
		case 4:
			{
				bpfv_____int_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__PowerLevel__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv_____int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 6:
			{
				__StateStack.Push(11);
			}
		case 7:
			{
				bpfv__K2Node_MakeStruct_LinearColor__pf.R = 1.000000;
				bpfv__K2Node_MakeStruct_LinearColor__pf.G = 0.000000;
				bpfv__K2Node_MakeStruct_LinearColor__pf.B = 0.000000;
				bpfv__K2Node_MakeStruct_LinearColor__pf.A = 1.000000;
				FCustomThunkTemplates::Array_Get(bpv__PowerLevelImg__pf, bpfv_____int_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->UImage::SetColorAndOpacity(bpfv__K2Node_MakeStruct_LinearColor__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf = Cast<UMain_GameInstance_C__pf3789721252>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__elecricity_manager__pf))
				{
					bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__elecricity_manager__pf->bpf__get_electricity__pf(/*out*/ bpfv__CallFunc_get_electricity_cur_electricity_res__pf);
				}
			}
		case 10:
			{
				bpv__Enery__pf = bpfv__CallFunc_get_electricity_cur_electricity_res__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Variable__pf, 1);
				bpfv_____int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 5;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void Uwdg_towerUpgrade_C__pf3053510930::bpf__InittowerUpwdg__pf()
{
	int32 bpfv_____int_Variable__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	UClass* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	TSubclassOf<UOnCollection_C__pf3716123054>  bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf{};
	bool bpfv__K2Node_ClassDynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray<UImage*> bpfv__K2Node_MakeArray_Array__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_MakeArray_Array__pf.SetNum(10, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = bpv__level1_1__pf;
				bpfv__K2Node_MakeArray_Array__pf[1] = bpv__level1_2__pf;
				bpfv__K2Node_MakeArray_Array__pf[2] = bpv__level1_3__pf;
				bpfv__K2Node_MakeArray_Array__pf[3] = bpv__level1_4__pf;
				bpfv__K2Node_MakeArray_Array__pf[4] = bpv__level1_5__pf;
				bpfv__K2Node_MakeArray_Array__pf[5] = bpv__level1_6__pf;
				bpfv__K2Node_MakeArray_Array__pf[6] = bpv__level1_7__pf;
				bpfv__K2Node_MakeArray_Array__pf[7] = bpv__level1_8__pf;
				bpfv__K2Node_MakeArray_Array__pf[8] = bpv__level1_9__pf;
				bpfv__K2Node_MakeArray_Array__pf[9] = bpv__level1_10__pf;
				bpv__PowerLevelImg__pf = bpfv__K2Node_MakeArray_Array__pf;
			}
		case 2:
			{
				bpfv_____int_Variable__pf = 0;
			}
		case 3:
			{
				TArray<UClass*>  __Local__211 = {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpv__Tower__pf)) ? (bpv__Tower__pf->bpv__ModuleList__pf) : (__Local__211)));
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv_____int_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				__StateStack.Push(7);
			}
		case 5:
			{
				TArray<UClass*>  __Local__212 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__Tower__pf)) ? (bpv__Tower__pf->bpv__ModuleList__pf) : (__Local__212)), bpfv_____int_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf = DynamicMetaCast(UOnCollection_C__pf3716123054::StaticClass(), bpfv__CallFunc_Array_Get_Item__pf);;
				bpfv__K2Node_ClassDynamicCast_bSuccess__pf = (bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf != nullptr);;
				if (!bpfv__K2Node_ClassDynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv_____int_Variable__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv_____int_Variable__pf, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 10;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv_____int_Variable__pf, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 12;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv_____int_Variable__pf, 3);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Variable__pf, 1);
				bpfv_____int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		case 8:
			{
				FString  __Local__213 = FString(TEXT(""));
				bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_StringToText(((::IsValid(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)) ? (GetDefaultValueSafe<UOnCollection_C__pf3716123054>(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)->bpv__Name__pf) : (__Local__213)));
				if(::IsValid(bpv__ModuleName1__pf))
				{
					bpv__ModuleName1__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf);
				}
			}
		case 9:
			{
				FString  __Local__214 = FString(TEXT(""));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(((::IsValid(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)) ? (GetDefaultValueSafe<UOnCollection_C__pf3716123054>(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)->bpv__Tool_Tip_Text__pf) : (__Local__214)));
				if(::IsValid(bpv__module1Infotext__pf))
				{
					bpv__module1Infotext__pf->UMultiLineEditableTextBox::SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				FString  __Local__215 = FString(TEXT(""));
				bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_StringToText(((::IsValid(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)) ? (GetDefaultValueSafe<UOnCollection_C__pf3716123054>(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)->bpv__Name__pf) : (__Local__215)));
				if(::IsValid(bpv__ModuleName2__pf))
				{
					bpv__ModuleName2__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf);
				}
			}
		case 11:
			{
				FString  __Local__216 = FString(TEXT(""));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(((::IsValid(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)) ? (GetDefaultValueSafe<UOnCollection_C__pf3716123054>(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)->bpv__Tool_Tip_Text__pf) : (__Local__216)));
				if(::IsValid(bpv__module2Infotext__pf))
				{
					bpv__module2Infotext__pf->UMultiLineEditableTextBox::SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				FString  __Local__217 = FString(TEXT(""));
				bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_StringToText(((::IsValid(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)) ? (GetDefaultValueSafe<UOnCollection_C__pf3716123054>(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)->bpv__Name__pf) : (__Local__217)));
				if(::IsValid(bpv__ModuleName3__pf))
				{
					bpv__ModuleName3__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf);
				}
			}
		case 13:
			{
				FString  __Local__218 = FString(TEXT(""));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(((::IsValid(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)) ? (GetDefaultValueSafe<UOnCollection_C__pf3716123054>(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)->bpv__Tool_Tip_Text__pf) : (__Local__218)));
				if(::IsValid(bpv__module3Infotext__pf))
				{
					bpv__module3Infotext__pf->UMultiLineEditableTextBox::SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				FString  __Local__219 = FString(TEXT(""));
				bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_StringToText(((::IsValid(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)) ? (GetDefaultValueSafe<UOnCollection_C__pf3716123054>(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)->bpv__Name__pf) : (__Local__219)));
				if(::IsValid(bpv__ModuleName4__pf))
				{
					bpv__ModuleName4__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf);
				}
			}
		case 15:
			{
				FString  __Local__220 = FString(TEXT(""));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(((::IsValid(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)) ? (GetDefaultValueSafe<UOnCollection_C__pf3716123054>(bpfv__K2Node_ClassDynamicCast_AsOn_Collection__pf)->bpv__Tool_Tip_Text__pf) : (__Local__220)));
				if(::IsValid(bpv__module4Infotext__pf))
				{
					bpv__module4Infotext__pf->UMultiLineEditableTextBox::SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void Uwdg_towerUpgrade_C__pf3053510930::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void Uwdg_towerUpgrade_C__pf3053510930::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{90, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.MultiLineEditableTextBox 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/resouerce/temp/FirstPerson/Character/Mesh/SK_Mannequin_Arms.SK_Mannequin_Arms 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/temp/StarterContent/Materials/M_Basic_Wall.M_Basic_Wall 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpotLightComponent 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/widget_manager.widget_manager_C 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  widget_manager_C /Game/blueprints/others/Observer/widget_manager.Default__widget_manager_C 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTable 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/resouerce/excel/EST_stage_1.EST_stage_1 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPerson_Jump.ThirdPerson_Jump 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPersonJump_Loop.ThirdPersonJump_Loop 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPersonJump_Start.ThirdPersonJump_Start 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/resouerce/Mannequin/Animations/ThirdPerson_IdleRun_2D.ThirdPerson_IdleRun_2D 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/LowEntryExtendedStandardLibrary.DelegateULowEntryExtendedStandardLibraryCompareObjects__DelegateSignature 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PawnMovementComponent 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/resouerce/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/resouerce/Mannequin/Character/Mesh/UE4_Mannequin_Skeleton.UE4_Mannequin_Skeleton 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/material/test.test 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EditorLandscapeResources/AlphaBrushMaterial.AlphaBrushMaterial 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/material/bullet_mark.bullet_mark 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/resouerce/temp/StarterContent/Shapes/Shape_Cube.Shape_Cube 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/resouerce/temp/FirstPerson/FPWeapon/Mesh/SK_FPGun.SK_FPGun 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/temp/FirstPerson/FPWeapon/Materials/M_FPGun.M_FPGun 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/resouerce/image/FirstPersonCrosshair.FirstPersonCrosshair 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_Idle.FirstPerson_Idle 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/blueprints/Tower/AoEParticle.AoEParticle 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpEnd.FirstPerson_JumpEnd 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpLoop.FirstPerson_JumpLoop 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpStart.FirstPerson_JumpStart 
		{84, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{86, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/material/test2.test2 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/resouerce/temp/FirstPerson/Character/Mesh/SK_Mannequin_Arms_Skeleton1.SK_Mannequin_Arms_Skeleton1 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_Run.FirstPerson_Run 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/OnCollections/Modules/Module.Module_C 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/OnCollections/OnCollection.OnCollection_C 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/Tower/Tower.Tower_C 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/Main_GameInstance.Main_GameInstance_C 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/electricity_manager.electricity_manager_C 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/player/player_character.player_character_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__Uwdg_towerUpgrade_C__pf3053510930
{
	FRegisterHelper__Uwdg_towerUpgrade_C__pf3053510930()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/blueprints/UI/wdg_towerUpgrade"), &Uwdg_towerUpgrade_C__pf3053510930::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Uwdg_towerUpgrade_C__pf3053510930 Instance;
};
FRegisterHelper__Uwdg_towerUpgrade_C__pf3053510930 FRegisterHelper__Uwdg_towerUpgrade_C__pf3053510930::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
