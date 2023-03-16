#include "NativizedAssets.h"
#include "wdg_mainmanu__pf3053510930.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
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
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "wdg_stagemenu__pf3053510930.h"
#include "wdg_optionmenu__pf3053510930.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
Uwdg_mainmanu_C__pf3053510930::Uwdg_mainmanu_C__pf3053510930(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Button_exit__pf = nullptr;
	bpv__Button_option__pf = nullptr;
	bpv__Button_start__pf = nullptr;
	bpv__Image_58__pf = nullptr;
	bpv__Image_516__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void Uwdg_mainmanu_C__pf3053510930::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void Uwdg_mainmanu_C__pf3053510930::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(Uwdg_stagemenu_C__pf3053510930::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Uwdg_optionmenu_C__pf3053510930::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("startanim_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("optionanim_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	auto __Local__4 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("exitanim_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__4);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(3);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 3);
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[0];
	__Local__5.ComponentPropertyName = FName(TEXT("Button_exit"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__wdg_mainmanu_Button_exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[1];
	__Local__6.ComponentPropertyName = FName(TEXT("Button_option"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__wdg_mainmanu_Button_option_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[2];
	__Local__7.ComponentPropertyName = FName(TEXT("Button_start"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Button_start_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__8 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__8), UPanelWidget::__PPO__Slots() )));
	__Local__9 = TArray<UPanelSlot*> ();
	__Local__9.Reserve(8);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__10->LayoutData.Offsets.Right = 0.000000f;
	__Local__10->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__10->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__10->Parent = __Local__8;
	auto __Local__11 = NewObject<UImage>(__Local__1, TEXT("Image_58"), (EObjectFlags)0x00280008);
	__Local__11->Slot = __Local__10;
	__Local__10->Content = __Local__11;
	__Local__9.Add(__Local__10);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_5"), (EObjectFlags)0x00280008);
	__Local__12->LayoutData.Offsets.Left = -904.000000f;
	__Local__12->LayoutData.Offsets.Top = -492.000000f;
	__Local__12->LayoutData.Offsets.Right = 454.666687f;
	__Local__12->LayoutData.Offsets.Bottom = 134.666687f;
	__Local__12->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__12->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__12->Parent = __Local__8;
	auto __Local__13 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_119"), (EObjectFlags)0x00280008);
	__Local__13->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[19C234E249C5769D5C55E2B1A42CAB25]\", \"B98738804B84C692ED5857B1F68A6264\", \"TITLE\")")	);
	auto& __Local__14 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__13->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__14 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__13->Font.Size = 87;
	auto& __Local__15 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__13), UTextLayoutWidget::__PPO__Justification() )));
	__Local__15 = ETextJustify::Type::Center;
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__9.Add(__Local__12);
	auto __Local__16 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__16->LayoutData.Offsets.Left = 112.000000f;
	__Local__16->LayoutData.Offsets.Top = 208.000000f;
	__Local__16->LayoutData.Offsets.Right = 870.000000f;
	__Local__16->LayoutData.Offsets.Bottom = 507.333344f;
	__Local__16->Parent = __Local__8;
	auto __Local__17 = NewObject<UImage>(__Local__1, TEXT("Image_516"), (EObjectFlags)0x00280008);
	__Local__17->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__17->Slot = __Local__16;
	__Local__16->Content = __Local__17;
	__Local__9.Add(__Local__16);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_27"), (EObjectFlags)0x00280008);
	__Local__18->LayoutData.Offsets.Left = 1128.000000f;
	__Local__18->LayoutData.Offsets.Top = 216.000000f;
	__Local__18->LayoutData.Offsets.Right = 234.000000f;
	__Local__18->LayoutData.Offsets.Bottom = 94.000000f;
	__Local__18->Parent = __Local__8;
	auto __Local__19 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_190"), (EObjectFlags)0x00280008);
	__Local__19->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[19C234E249C5769D5C55E2B1A42CAB25]\", \"7193A6904907F930477667A816EE239D\", \"NJF-F7\")")	);
	auto& __Local__20 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__19->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__20 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__19->Font.Size = 53;
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__9.Add(__Local__18);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_25"), (EObjectFlags)0x00280008);
	__Local__21->LayoutData.Offsets.Left = 1124.000000f;
	__Local__21->LayoutData.Offsets.Top = 392.000000f;
	__Local__21->LayoutData.Offsets.Right = 234.000000f;
	__Local__21->LayoutData.Offsets.Bottom = 94.000000f;
	__Local__21->Parent = __Local__8;
	auto __Local__22 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__22->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[19C234E249C5769D5C55E2B1A42CAB25]\", \"3F59D1094AF0AE4AEA4736BF3D6756D1\", \"IQ9-Q5\")")	);
	auto& __Local__23 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__22->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__23 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__22->Font.Size = 53;
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__9.Add(__Local__21);
	auto __Local__24 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_24"), (EObjectFlags)0x00280008);
	__Local__24->LayoutData.Offsets.Left = 1128.000000f;
	__Local__24->LayoutData.Offsets.Top = 608.000000f;
	__Local__24->LayoutData.Offsets.Right = 234.000000f;
	__Local__24->LayoutData.Offsets.Bottom = 94.000000f;
	__Local__24->Parent = __Local__8;
	auto __Local__25 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__25->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[19C234E249C5769D5C55E2B1A42CAB25]\", \"75F2712542C228C593022094E62B7B09\", \"QD7-00\")")	);
	auto& __Local__26 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__25->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__26 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__25->Font.Size = 53;
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__9.Add(__Local__24);
	auto __Local__27 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_18"), (EObjectFlags)0x00280008);
	__Local__27->LayoutData.Offsets.Left = 1044.000000f;
	__Local__27->LayoutData.Offsets.Top = 96.000000f;
	__Local__27->LayoutData.Offsets.Right = 768.000000f;
	__Local__27->LayoutData.Offsets.Bottom = 94.000000f;
	__Local__27->Parent = __Local__8;
	auto __Local__28 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__28->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[19C234E249C5769D5C55E2B1A42CAB25]\", \"4B6789214E511611C470E392E1F73554\", \"\uc57d\ubb3c \uc2e4\ud5d8 \ud14c\uc2a4\ud2b8\ucf00\uc774\uc2a4\")")	);
	auto& __Local__29 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__29 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__28->Font.Size = 53;
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__9.Add(__Local__27);
	auto __Local__30 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__30->LayoutData.Offsets.Left = -181.247925f;
	__Local__30->LayoutData.Offsets.Top = -332.000000f;
	__Local__30->LayoutData.Offsets.Right = 384.000000f;
	__Local__30->LayoutData.Offsets.Bottom = 500.000000f;
	__Local__30->LayoutData.Anchors.Minimum = FVector2D(0.844400, 0.500000);
	__Local__30->LayoutData.Anchors.Maximum = FVector2D(0.844400, 0.500000);
	__Local__30->Parent = __Local__8;
	auto __Local__31 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_106"), (EObjectFlags)0x00280008);
	auto& __Local__32 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__31), UPanelWidget::__PPO__Slots() )));
	__Local__32 = TArray<UPanelSlot*> ();
	__Local__32.Reserve(5);
	auto __Local__33 = NewObject<UVerticalBoxSlot>(__Local__31, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__33->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__33->Parent = __Local__31;
	auto __Local__34 = NewObject<UButton>(__Local__1, TEXT("Button_start"), (EObjectFlags)0x00280008);
	auto& __Local__35 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__34), UPanelWidget::__PPO__Slots() )));
	__Local__35 = TArray<UPanelSlot*> ();
	__Local__35.Reserve(1);
	auto __Local__36 = NewObject<UButtonSlot>(__Local__34, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__36->Parent = __Local__34;
	auto __Local__37 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_212"), (EObjectFlags)0x00280008);
	__Local__37->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[19C234E249C5769D5C55E2B1A42CAB25]\", \"0B045AAB413A3F3EAF96DA9E23B055A7\", \"START\")")	);
	auto& __Local__38 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__37->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__38 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__37->Font.Size = 60;
	auto& __Local__39 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__37), UTextLayoutWidget::__PPO__Justification() )));
	__Local__39 = ETextJustify::Type::Center;
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__35.Add(__Local__36);
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__32.Add(__Local__33);
	auto __Local__40 = NewObject<UVerticalBoxSlot>(__Local__31, TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__40->Parent = __Local__31;
	auto __Local__41 = NewObject<USpacer>(__Local__1, TEXT("Spacer_288"), (EObjectFlags)0x00280008);
	__Local__41->Size = FVector2D(1.000000, 80.000000);
	__Local__41->Slot = __Local__40;
	__Local__40->Content = __Local__41;
	__Local__32.Add(__Local__40);
	auto __Local__42 = NewObject<UVerticalBoxSlot>(__Local__31, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__42->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__42->Parent = __Local__31;
	auto __Local__43 = NewObject<UButton>(__Local__1, TEXT("Button_option"), (EObjectFlags)0x00280008);
	auto& __Local__44 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__43), UPanelWidget::__PPO__Slots() )));
	__Local__44 = TArray<UPanelSlot*> ();
	__Local__44.Reserve(1);
	auto __Local__45 = NewObject<UButtonSlot>(__Local__43, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__45->Parent = __Local__43;
	auto __Local__46 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_777"), (EObjectFlags)0x00280008);
	__Local__46->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[19C234E249C5769D5C55E2B1A42CAB25]\", \"4EF6736A49429B8142B7F092F0417736\", \"OPTION\")")	);
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__46->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__46->Font.Size = 60;
	auto& __Local__48 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__46), UTextLayoutWidget::__PPO__Justification() )));
	__Local__48 = ETextJustify::Type::Center;
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__44.Add(__Local__45);
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__32.Add(__Local__42);
	auto __Local__49 = NewObject<UVerticalBoxSlot>(__Local__31, TEXT("VerticalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__49->Parent = __Local__31;
	auto __Local__50 = NewObject<USpacer>(__Local__1, TEXT("Spacer_423"), (EObjectFlags)0x00280008);
	__Local__50->Size = FVector2D(1.000000, 80.000000);
	__Local__50->Slot = __Local__49;
	__Local__49->Content = __Local__50;
	__Local__32.Add(__Local__49);
	auto __Local__51 = NewObject<UVerticalBoxSlot>(__Local__31, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__51->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__51->Parent = __Local__31;
	auto __Local__52 = NewObject<UButton>(__Local__1, TEXT("Button_exit"), (EObjectFlags)0x00280008);
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__52), UPanelWidget::__PPO__Slots() )));
	__Local__53 = TArray<UPanelSlot*> ();
	__Local__53.Reserve(1);
	auto __Local__54 = NewObject<UButtonSlot>(__Local__52, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__54->Parent = __Local__52;
	auto __Local__55 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_624"), (EObjectFlags)0x00280008);
	__Local__55->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[19C234E249C5769D5C55E2B1A42CAB25]\", \"8D4B79B44A1CC9D4DFD704A55CD68CF7\", \"EXIT\")")	);
	auto& __Local__56 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__55->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__56 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__55->Font.Size = 60;
	auto& __Local__57 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__55), UTextLayoutWidget::__PPO__Justification() )));
	__Local__57 = ETextJustify::Type::Center;
	__Local__55->Slot = __Local__54;
	__Local__54->Content = __Local__55;
	__Local__53.Add(__Local__54);
	__Local__52->Slot = __Local__51;
	__Local__51->Content = __Local__52;
	__Local__32.Add(__Local__51);
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__9.Add(__Local__30);
	__Local__1->RootWidget = __Local__8;
	auto __Local__58 = NewObject<UMovieScene>(__Local__2, TEXT("startanim"), (EObjectFlags)0x00280008);
	auto& __Local__59 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__58), UMovieScene::__PPO__Possessables() )));
	__Local__59 = TArray<FMovieScenePossessable> ();
	__Local__59.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__59.GetData(), 1);
	auto& __Local__60 = __Local__59[0];
	auto& __Local__61 = (*(AccessPrivateProperty<FGuid >(&(__Local__60), FMovieScenePossessable::__PPO__Guid() )));
	__Local__61 = FGuid(0x9BAC13AA, 0x400E6DBE, 0x6371FE99, 0x63C8B405);
	auto& __Local__62 = (*(AccessPrivateProperty<FString >(&(__Local__60), FMovieScenePossessable::__PPO__Name() )));
	__Local__62 = FString(TEXT("Image_516"));
	auto& __Local__63 = (*(AccessPrivateProperty<UClass* >(&(__Local__60), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__63 = UImage::StaticClass();
	auto& __Local__64 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__58), UMovieScene::__PPO__ObjectBindings() )));
	__Local__64 = TArray<FMovieSceneBinding> ();
	__Local__64.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__64.GetData(), 1);
	auto& __Local__65 = __Local__64[0];
	auto& __Local__66 = (*(AccessPrivateProperty<FGuid >(&(__Local__65), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__66 = FGuid(0x9BAC13AA, 0x400E6DBE, 0x6371FE99, 0x63C8B405);
	auto& __Local__67 = (*(AccessPrivateProperty<FString >(&(__Local__65), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__67 = FString(TEXT("Image_516"));
	auto& __Local__68 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__65), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__68 = TArray<UMovieSceneTrack*> ();
	__Local__68.Reserve(1);
	auto __Local__69 = NewObject<UMovieSceneColorTrack>(__Local__58, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__70 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__69), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__70.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__70.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__70.bCanUseClassLookup = true;
	auto& __Local__71 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__69), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__71 = TArray<UMovieSceneSection*> ();
	__Local__71.Reserve(1);
	auto __Local__72 = NewObject<UMovieSceneColorSection>(__Local__69, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__73 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__72->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__74 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__72->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__73)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__74)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__75 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__72), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__75), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__76 = TArray<FFrameNumber> ();
	__Local__76.Reserve(5);
	__Local__76.Add(FFrameNumber{});
	__Local__76[0].Value = -1;
	__Local__76.Add(FFrameNumber{});
	__Local__76[1].Value = 24000;
	__Local__76.Add(FFrameNumber{});
	__Local__76[2].Value = 39000;
	__Local__76.Add(FFrameNumber{});
	__Local__76[3].Value = 59999;
	__Local__76.Add(FFrameNumber{});
	__Local__76[4].Value = 90000;
	auto& __Local__77 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__75), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__77 = TArray<FMovieSceneFloatValue> ();
	__Local__77.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__77.GetData(), 5);
	auto& __Local__78 = __Local__77[0];
	auto& __Local__79 = __Local__77[1];
	__Local__79.Value = 0.200000f;
	__Local__79.Tangent.ArriveTangent = 0.000010f;
	__Local__79.Tangent.LeaveTangent = 0.000010f;
	auto& __Local__80 = __Local__77[2];
	__Local__80.Value = 0.400000f;
	__Local__80.Tangent.ArriveTangent = 0.000022f;
	__Local__80.Tangent.LeaveTangent = 0.000022f;
	auto& __Local__81 = __Local__77[3];
	__Local__81.Value = 1.000000f;
	auto& __Local__82 = __Local__77[4];
	auto& __Local__83 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__72), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__84 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__83), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__84 = TArray<FFrameNumber> ();
	__Local__84.Reserve(2);
	__Local__84.Add(FFrameNumber{});
	__Local__84[0].Value = -1;
	__Local__84.Add(FFrameNumber{});
	__Local__84[1].Value = 59999;
	auto& __Local__85 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__83), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__85 = TArray<FMovieSceneFloatValue> ();
	__Local__85.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__85.GetData(), 2);
	auto& __Local__86 = __Local__85[0];
	auto& __Local__87 = __Local__85[1];
	auto& __Local__88 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__72), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__89 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__88), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__89 = TArray<FFrameNumber> ();
	__Local__89.Reserve(2);
	__Local__89.Add(FFrameNumber{});
	__Local__89[0].Value = -1;
	__Local__89.Add(FFrameNumber{});
	__Local__89[1].Value = 59999;
	auto& __Local__90 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__88), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__90 = TArray<FMovieSceneFloatValue> ();
	__Local__90.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__90.GetData(), 2);
	auto& __Local__91 = __Local__90[0];
	auto& __Local__92 = __Local__90[1];
	auto& __Local__93 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__72), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__94 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__93), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__94 = TArray<FFrameNumber> ();
	__Local__94.Reserve(2);
	__Local__94.Add(FFrameNumber{});
	__Local__94[0].Value = -1;
	__Local__94.Add(FFrameNumber{});
	__Local__94[1].Value = 59999;
	auto& __Local__95 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__93), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__95 = TArray<FMovieSceneFloatValue> ();
	__Local__95.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__95.GetData(), 2);
	auto& __Local__96 = __Local__95[0];
	__Local__96.Value = 1.000000f;
	auto& __Local__97 = __Local__95[1];
	__Local__97.Value = 2.000000f;
	__Local__72->EvalOptions.CompletionMode = EMovieSceneCompletionMode::KeepState;
	__Local__72->Easing.EaseIn = __Local__73;
	__Local__72->Easing.EaseOut = __Local__74;
	__Local__72->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(-1), TRangeBound<FFrameNumber>::Inclusive(90000)));
	auto& __Local__98 = (*(AccessPrivateProperty<FGuid >((__Local__72), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__98 = FGuid(0x87C5343C, 0x405FED0A, 0xF7A519AA, 0x7D8EC96C);
	__Local__71.Add(__Local__72);
	auto& __Local__99 = (*(AccessPrivateProperty<FGuid >((__Local__69), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__99 = FGuid(0xE597BEDD, 0x4B735A6A, 0x1F61FD91, 0x7122BFC4);
	auto& __Local__100 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__69), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__100.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__100.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__100.Entries.GetData(), 1);
	auto& __Local__101 = __Local__100.Entries[0];
	__Local__101.Section = __Local__72;
	static TWeakFieldPtr<FProperty> __Local__103{};
	const FProperty* __Local__102 = __Local__103.Get();
	if (nullptr == __Local__102)
	{
		__Local__102 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__102);
		__Local__103 = __Local__102;
	}
	auto& __Local__104 = (*(__Local__102->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__101.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__106{};
	const FProperty* __Local__105 = __Local__106.Get();
	if (nullptr == __Local__105)
	{
		__Local__105 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__105);
		__Local__106 = __Local__105;
	}
	auto& __Local__107 = (*(__Local__105->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__104), 0)));
	__Local__107 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__109{};
	const FProperty* __Local__108 = __Local__109.Get();
	if (nullptr == __Local__108)
	{
		__Local__108 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__108);
		__Local__109 = __Local__108;
	}
	auto& __Local__110 = (*(__Local__108->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__104), 0)));
	__Local__110.Value = -1;
	static TWeakFieldPtr<FProperty> __Local__112{};
	const FProperty* __Local__111 = __Local__112.Get();
	if (nullptr == __Local__111)
	{
		__Local__111 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__111);
		__Local__112 = __Local__111;
	}
	auto& __Local__113 = (*(__Local__111->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__101.Range), 0)));
	auto& __Local__114 = (*(__Local__105->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__113), 0)));
	__Local__114 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__115 = (*(__Local__108->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__113), 0)));
	__Local__115.Value = 90000;
	__Local__101.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__116 = (*(AccessPrivateProperty<FGuid >((__Local__69), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__116 = FGuid(0xE597BEDD, 0x4B735A6A, 0x1F61FD91, 0x7122BFC4);
	__Local__68.Add(__Local__69);
	auto& __Local__117 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__58), UMovieScene::__PPO__PlaybackRange() )));
	__Local__117 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(-1), TRangeBound<FFrameNumber>::Exclusive(90001)));
	auto& __Local__118 = (*(AccessPrivateProperty<FFrameRate >((__Local__58), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__120{};
	const FProperty* __Local__119 = __Local__120.Get();
	if (nullptr == __Local__119)
	{
		__Local__119 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__119);
		__Local__120 = __Local__119;
	}
	auto& __Local__121 = (*(__Local__119->ContainerPtrToValuePtr<int32 >(&(__Local__118), 0)));
	__Local__121 = 20;
	auto& __Local__122 = (*(AccessPrivateProperty<FGuid >((__Local__58), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__122 = FGuid(0x536BD37A, 0x4CFA2F14, 0x4DC00E84, 0x3424E368);
	__Local__2->MovieScene = __Local__58;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 1);
	auto& __Local__123 = __Local__2->AnimationBindings[0];
	__Local__123.WidgetName = FName(TEXT("Image_516"));
	__Local__123.AnimationGuid = FGuid(0x9BAC13AA, 0x400E6DBE, 0x6371FE99, 0x63C8B405);
	auto& __Local__124 = (*(AccessPrivateProperty<FString >((__Local__2), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__124 = FString(TEXT("startanim"));
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__125 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__125 = FGuid(0x516D01B0, 0x4211B2CC, 0xB835F09F, 0x48F0F608);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
	auto __Local__126 = NewObject<UMovieScene>(__Local__3, TEXT("optionanim"), (EObjectFlags)0x00280008);
	auto& __Local__127 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__126), UMovieScene::__PPO__Possessables() )));
	__Local__127 = TArray<FMovieScenePossessable> ();
	__Local__127.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__127.GetData(), 1);
	auto& __Local__128 = __Local__127[0];
	auto& __Local__129 = (*(AccessPrivateProperty<FGuid >(&(__Local__128), FMovieScenePossessable::__PPO__Guid() )));
	__Local__129 = FGuid(0xC4D152DD, 0x407094DA, 0x24C4E28F, 0x4BDEB8EE);
	auto& __Local__130 = (*(AccessPrivateProperty<FString >(&(__Local__128), FMovieScenePossessable::__PPO__Name() )));
	__Local__130 = FString(TEXT("Image_516"));
	auto& __Local__131 = (*(AccessPrivateProperty<UClass* >(&(__Local__128), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__131 = UImage::StaticClass();
	auto& __Local__132 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__126), UMovieScene::__PPO__ObjectBindings() )));
	__Local__132 = TArray<FMovieSceneBinding> ();
	__Local__132.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__132.GetData(), 1);
	auto& __Local__133 = __Local__132[0];
	auto& __Local__134 = (*(AccessPrivateProperty<FGuid >(&(__Local__133), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__134 = FGuid(0xC4D152DD, 0x407094DA, 0x24C4E28F, 0x4BDEB8EE);
	auto& __Local__135 = (*(AccessPrivateProperty<FString >(&(__Local__133), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__135 = FString(TEXT("Image_516"));
	auto& __Local__136 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__133), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__136 = TArray<UMovieSceneTrack*> ();
	__Local__136.Reserve(1);
	auto __Local__137 = NewObject<UMovieSceneColorTrack>(__Local__126, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__138 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__137), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__138.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__138.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__138.bCanUseClassLookup = true;
	auto& __Local__139 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__137), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__139 = TArray<UMovieSceneSection*> ();
	__Local__139.Reserve(1);
	auto __Local__140 = NewObject<UMovieSceneColorSection>(__Local__137, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__141 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__140->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__142 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__140->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__141)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__142)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__143 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__140), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__144 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__143), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__144 = TArray<FFrameNumber> ();
	__Local__144.Reserve(2);
	__Local__144.Add(FFrameNumber{});
	__Local__144.Add(FFrameNumber{});
	__Local__144[1].Value = 60000;
	auto& __Local__145 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__143), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__145 = TArray<FMovieSceneFloatValue> ();
	__Local__145.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__145.GetData(), 2);
	auto& __Local__146 = __Local__145[0];
	auto& __Local__147 = __Local__145[1];
	auto& __Local__148 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__140), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__149 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__148), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__149 = TArray<FFrameNumber> ();
	__Local__149.Reserve(2);
	__Local__149.Add(FFrameNumber{});
	__Local__149.Add(FFrameNumber{});
	__Local__149[1].Value = 60000;
	auto& __Local__150 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__148), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__150 = TArray<FMovieSceneFloatValue> ();
	__Local__150.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__150.GetData(), 2);
	auto& __Local__151 = __Local__150[0];
	auto& __Local__152 = __Local__150[1];
	auto& __Local__153 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__140), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__154 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__153), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__154 = TArray<FFrameNumber> ();
	__Local__154.Reserve(5);
	__Local__154.Add(FFrameNumber{});
	__Local__154.Add(FFrameNumber{});
	__Local__154[1].Value = 30000;
	__Local__154.Add(FFrameNumber{});
	__Local__154[2].Value = 45000;
	__Local__154.Add(FFrameNumber{});
	__Local__154[3].Value = 60000;
	__Local__154.Add(FFrameNumber{});
	__Local__154[4].Value = 90000;
	auto& __Local__155 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__153), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__155 = TArray<FMovieSceneFloatValue> ();
	__Local__155.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__155.GetData(), 5);
	auto& __Local__156 = __Local__155[0];
	auto& __Local__157 = __Local__155[1];
	__Local__157.Value = 0.400000f;
	__Local__157.Tangent.ArriveTangent = 0.000014f;
	__Local__157.Tangent.LeaveTangent = 0.000014f;
	auto& __Local__158 = __Local__155[2];
	__Local__158.Value = 0.650000f;
	__Local__158.Tangent.ArriveTangent = 0.000020f;
	__Local__158.Tangent.LeaveTangent = 0.000020f;
	auto& __Local__159 = __Local__155[3];
	__Local__159.Value = 1.000000f;
	auto& __Local__160 = __Local__155[4];
	auto& __Local__161 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__140), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__162 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__162 = TArray<FFrameNumber> ();
	__Local__162.Reserve(2);
	__Local__162.Add(FFrameNumber{});
	__Local__162.Add(FFrameNumber{});
	__Local__162[1].Value = 60000;
	auto& __Local__163 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__163 = TArray<FMovieSceneFloatValue> ();
	__Local__163.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__163.GetData(), 2);
	auto& __Local__164 = __Local__163[0];
	__Local__164.Value = 1.000000f;
	auto& __Local__165 = __Local__163[1];
	__Local__165.Value = 1.000000f;
	__Local__140->EvalOptions.CompletionMode = EMovieSceneCompletionMode::KeepState;
	__Local__140->Easing.EaseIn = __Local__141;
	__Local__140->Easing.EaseOut = __Local__142;
	__Local__140->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(90000)));
	auto& __Local__166 = (*(AccessPrivateProperty<FGuid >((__Local__140), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__166 = FGuid(0x692A4022, 0x44EE1349, 0xB96828B4, 0x335F689E);
	__Local__139.Add(__Local__140);
	auto& __Local__167 = (*(AccessPrivateProperty<FGuid >((__Local__137), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__167 = FGuid(0xFC468BA1, 0x4B82BDD8, 0x94C5EFB5, 0xE4DB7D00);
	auto& __Local__168 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__137), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__168.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__168.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__168.Entries.GetData(), 1);
	auto& __Local__169 = __Local__168.Entries[0];
	__Local__169.Section = __Local__140;
	auto& __Local__170 = (*(__Local__102->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__169.Range), 0)));
	auto& __Local__171 = (*(__Local__105->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__170), 0)));
	__Local__171 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__172 = (*(__Local__111->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__169.Range), 0)));
	auto& __Local__173 = (*(__Local__105->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__172), 0)));
	__Local__173 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__174 = (*(__Local__108->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__172), 0)));
	__Local__174.Value = 90000;
	__Local__169.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__175 = (*(AccessPrivateProperty<FGuid >((__Local__137), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__175 = FGuid(0xFC468BA1, 0x4B82BDD8, 0x94C5EFB5, 0xE4DB7D00);
	__Local__136.Add(__Local__137);
	auto& __Local__176 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__126), UMovieScene::__PPO__PlaybackRange() )));
	__Local__176 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(90001)));
	auto& __Local__177 = (*(AccessPrivateProperty<FFrameRate >((__Local__126), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__178 = (*(__Local__119->ContainerPtrToValuePtr<int32 >(&(__Local__177), 0)));
	__Local__178 = 20;
	auto& __Local__179 = (*(AccessPrivateProperty<FGuid >((__Local__126), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__179 = FGuid(0x29FCFEB1, 0x4650BF48, 0xA4D9CAA8, 0x3E5964DE);
	__Local__3->MovieScene = __Local__126;
	__Local__3->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__3->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__3->AnimationBindings.GetData(), 1);
	auto& __Local__180 = __Local__3->AnimationBindings[0];
	__Local__180.WidgetName = FName(TEXT("Image_516"));
	__Local__180.AnimationGuid = FGuid(0xC4D152DD, 0x407094DA, 0x24C4E28F, 0x4BDEB8EE);
	auto& __Local__181 = (*(AccessPrivateProperty<FString >((__Local__3), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__181 = FString(TEXT("optionanim"));
	__Local__3->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__182 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__182 = FGuid(0xCA80F67C, 0x49DA4548, 0x5B4B6097, 0x86AE8648);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__3);
	auto __Local__183 = NewObject<UMovieScene>(__Local__4, TEXT("exitanim"), (EObjectFlags)0x00280008);
	auto& __Local__184 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__183), UMovieScene::__PPO__Possessables() )));
	__Local__184 = TArray<FMovieScenePossessable> ();
	__Local__184.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__184.GetData(), 1);
	auto& __Local__185 = __Local__184[0];
	auto& __Local__186 = (*(AccessPrivateProperty<FGuid >(&(__Local__185), FMovieScenePossessable::__PPO__Guid() )));
	__Local__186 = FGuid(0x86787FC4, 0x4EE9A6A6, 0x9D9AF598, 0xD547494B);
	auto& __Local__187 = (*(AccessPrivateProperty<FString >(&(__Local__185), FMovieScenePossessable::__PPO__Name() )));
	__Local__187 = FString(TEXT("Image_516"));
	auto& __Local__188 = (*(AccessPrivateProperty<UClass* >(&(__Local__185), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__188 = UImage::StaticClass();
	auto& __Local__189 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__183), UMovieScene::__PPO__ObjectBindings() )));
	__Local__189 = TArray<FMovieSceneBinding> ();
	__Local__189.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__189.GetData(), 1);
	auto& __Local__190 = __Local__189[0];
	auto& __Local__191 = (*(AccessPrivateProperty<FGuid >(&(__Local__190), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__191 = FGuid(0x86787FC4, 0x4EE9A6A6, 0x9D9AF598, 0xD547494B);
	auto& __Local__192 = (*(AccessPrivateProperty<FString >(&(__Local__190), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__192 = FString(TEXT("Image_516"));
	auto& __Local__193 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__190), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__193 = TArray<UMovieSceneTrack*> ();
	__Local__193.Reserve(1);
	auto __Local__194 = NewObject<UMovieSceneColorTrack>(__Local__183, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__195 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__194), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__195.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__195.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__195.bCanUseClassLookup = true;
	auto& __Local__196 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__194), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__196 = TArray<UMovieSceneSection*> ();
	__Local__196.Reserve(1);
	auto __Local__197 = NewObject<UMovieSceneColorSection>(__Local__194, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__198 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__197->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__199 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__197->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__198)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__199)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__200 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__197), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__201 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__200), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__201 = TArray<FFrameNumber> ();
	__Local__201.Reserve(3);
	__Local__201.Add(FFrameNumber{});
	__Local__201.Add(FFrameNumber{});
	__Local__201[1].Value = 30000;
	__Local__201.Add(FFrameNumber{});
	__Local__201[2].Value = 60000;
	auto& __Local__202 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__200), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__202 = TArray<FMovieSceneFloatValue> ();
	__Local__202.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__202.GetData(), 3);
	auto& __Local__203 = __Local__202[0];
	auto& __Local__204 = __Local__202[1];
	__Local__204.Value = 0.200000f;
	__Local__204.Tangent.ArriveTangent = 0.000017f;
	__Local__204.Tangent.LeaveTangent = 0.000017f;
	auto& __Local__205 = __Local__202[2];
	__Local__205.Value = 0.400000f;
	auto& __Local__206 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__197), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__207 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__206), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__207 = TArray<FFrameNumber> ();
	__Local__207.Reserve(3);
	__Local__207.Add(FFrameNumber{});
	__Local__207.Add(FFrameNumber{});
	__Local__207[1].Value = 30000;
	__Local__207.Add(FFrameNumber{});
	__Local__207[2].Value = 60000;
	auto& __Local__208 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__206), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__208 = TArray<FMovieSceneFloatValue> ();
	__Local__208.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__208.GetData(), 3);
	auto& __Local__209 = __Local__208[0];
	auto& __Local__210 = __Local__208[1];
	__Local__210.Value = 0.200000f;
	__Local__210.Tangent.ArriveTangent = 0.000017f;
	__Local__210.Tangent.LeaveTangent = 0.000017f;
	auto& __Local__211 = __Local__208[2];
	__Local__211.Value = 0.800000f;
	auto& __Local__212 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__197), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__213 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__212), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__213 = TArray<FFrameNumber> ();
	__Local__213.Reserve(3);
	__Local__213.Add(FFrameNumber{});
	__Local__213.Add(FFrameNumber{});
	__Local__213[1].Value = 30000;
	__Local__213.Add(FFrameNumber{});
	__Local__213[2].Value = 60000;
	auto& __Local__214 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__212), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__214 = TArray<FMovieSceneFloatValue> ();
	__Local__214.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__214.GetData(), 3);
	auto& __Local__215 = __Local__214[0];
	auto& __Local__216 = __Local__214[1];
	__Local__216.Value = 0.200000f;
	__Local__216.Tangent.ArriveTangent = 0.000017f;
	__Local__216.Tangent.LeaveTangent = 0.000017f;
	auto& __Local__217 = __Local__214[2];
	__Local__217.Value = 0.700000f;
	auto& __Local__218 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__197), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__219 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__218), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__219 = TArray<FFrameNumber> ();
	__Local__219.Reserve(2);
	__Local__219.Add(FFrameNumber{});
	__Local__219.Add(FFrameNumber{});
	__Local__219[1].Value = 60000;
	auto& __Local__220 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__218), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__220 = TArray<FMovieSceneFloatValue> ();
	__Local__220.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__220.GetData(), 2);
	auto& __Local__221 = __Local__220[0];
	__Local__221.Value = 1.000000f;
	auto& __Local__222 = __Local__220[1];
	__Local__222.Value = 1.000000f;
	__Local__197->EvalOptions.CompletionMode = EMovieSceneCompletionMode::KeepState;
	__Local__197->Easing.EaseIn = __Local__198;
	__Local__197->Easing.EaseOut = __Local__199;
	__Local__197->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(60000)));
	auto& __Local__223 = (*(AccessPrivateProperty<FGuid >((__Local__197), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__223 = FGuid(0xCFE12D9F, 0x40AF7428, 0xB6FF88AB, 0x044DEBBD);
	__Local__196.Add(__Local__197);
	auto& __Local__224 = (*(AccessPrivateProperty<FGuid >((__Local__194), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__224 = FGuid(0x9D25FCB7, 0x4510CE04, 0x8C5B799E, 0xF8D9DF36);
	auto& __Local__225 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__194), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__225.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__225.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__225.Entries.GetData(), 1);
	auto& __Local__226 = __Local__225.Entries[0];
	__Local__226.Section = __Local__197;
	auto& __Local__227 = (*(__Local__102->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__226.Range), 0)));
	auto& __Local__228 = (*(__Local__105->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__227), 0)));
	__Local__228 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__229 = (*(__Local__111->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__226.Range), 0)));
	auto& __Local__230 = (*(__Local__105->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__229), 0)));
	__Local__230 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__231 = (*(__Local__108->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__229), 0)));
	__Local__231.Value = 60000;
	__Local__226.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__232 = (*(AccessPrivateProperty<FGuid >((__Local__194), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__232 = FGuid(0x9D25FCB7, 0x4510CE04, 0x8C5B799E, 0xF8D9DF36);
	__Local__193.Add(__Local__194);
	auto& __Local__233 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__183), UMovieScene::__PPO__PlaybackRange() )));
	__Local__233 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(60001)));
	auto& __Local__234 = (*(AccessPrivateProperty<FFrameRate >((__Local__183), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__235 = (*(__Local__119->ContainerPtrToValuePtr<int32 >(&(__Local__234), 0)));
	__Local__235 = 20;
	auto& __Local__236 = (*(AccessPrivateProperty<FGuid >((__Local__183), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__236 = FGuid(0x9EF33F95, 0x41080E43, 0xE19A6A80, 0x58E97C26);
	__Local__4->MovieScene = __Local__183;
	__Local__4->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__4->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__4->AnimationBindings.GetData(), 1);
	auto& __Local__237 = __Local__4->AnimationBindings[0];
	__Local__237.WidgetName = FName(TEXT("Image_516"));
	__Local__237.AnimationGuid = FGuid(0x86787FC4, 0x4EE9A6A6, 0x9D9AF598, 0xD547494B);
	auto& __Local__238 = (*(AccessPrivateProperty<FString >((__Local__4), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__238 = FString(TEXT("exitanim"));
	__Local__4->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__239 = (*(AccessPrivateProperty<FGuid >((__Local__4), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__239 = FGuid(0x7FF00229, 0x4431DB31, 0x50CFDEB3, 0x166F5093);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__4);
}
PRAGMA_ENABLE_OPTIMIZATION
void Uwdg_mainmanu_C__pf3053510930::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__240;
	SlotNames.Append(__Local__240);
}
void Uwdg_mainmanu_C__pf3053510930::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__241;
	__Local__241.Reserve(3);
	__Local__241.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(Uwdg_mainmanu_C__pf3053510930::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__241.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(Uwdg_mainmanu_C__pf3053510930::StaticClass())->MiscConvertedSubobjects[2]));
	__Local__241.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(Uwdg_mainmanu_C__pf3053510930::StaticClass())->MiscConvertedSubobjects[3]));
	TArray<FDelegateRuntimeBinding>  __Local__242;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(Uwdg_mainmanu_C__pf3053510930::StaticClass())->MiscConvertedSubobjects[0]), __Local__241, __Local__242);
}
void Uwdg_mainmanu_C__pf3053510930::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void Uwdg_mainmanu_C__pf3053510930::bpf__ExecuteUbergraph_wdg_mainmanu__pf_0(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf{};
	Uwdg_optionmenu_C__pf3053510930* bpfv__CallFunc_Create_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf = UUserWidget::PlayAnimation(bpv__optionanim__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
	bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__CallFunc_Create_ReturnValue_1__pf = CastChecked<Uwdg_optionmenu_C__pf3053510930>(UWidgetBlueprintLibrary::Create(this, Uwdg_optionmenu_C__pf3053510930::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue_1__pf))
	{
		bpfv__CallFunc_Create_ReturnValue_1__pf->UUserWidget::AddToViewport(0);
	}
	return; //KCST_EndOfThread
}
void Uwdg_mainmanu_C__pf3053510930::bpf__ExecuteUbergraph_wdg_mainmanu__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(Uwdg_mainmanu_C__pf3053510930::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.setRes 1280x720")), ((APlayerController*)nullptr));
	return; //KCST_EndOfThread
}
void Uwdg_mainmanu_C__pf3053510930::bpf__ExecuteUbergraph_wdg_mainmanu__pf_2(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf = UUserWidget::PlayAnimation(bpv__exitanim__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
	return; //KCST_EndOfThread
}
void Uwdg_mainmanu_C__pf3053510930::bpf__ExecuteUbergraph_wdg_mainmanu__pf_3(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	Uwdg_stagemenu_C__pf3053510930* bpfv__CallFunc_Create_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<Uwdg_stagemenu_C__pf3053510930>(UWidgetBlueprintLibrary::Create(this, Uwdg_stagemenu_C__pf3053510930::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 4:
			{
				if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
				{
					bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 5:
			{
				RemoveFromParent();
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				__CurrentState = 9;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__startanim__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
			}
		case 10:
			{
				UKismetSystemLibrary::Delay(this, 1.500000, FLatentActionInfo(2, -1959740880, TEXT("ExecuteUbergraph_wdg_mainmanu_3"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Uwdg_mainmanu_C__pf3053510930::bpf__BndEvt__wdg_mainmanu_Button_exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_mainmanu__pf_2(15);
}
void Uwdg_mainmanu_C__pf3053510930::bpf__BndEvt__wdg_mainmanu_Button_option_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_mainmanu__pf_0(11);
}
void Uwdg_mainmanu_C__pf3053510930::bpf__BndEvt__Button_start_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_mainmanu__pf_3(8);
}
void Uwdg_mainmanu_C__pf3053510930::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_wdg_mainmanu__pf_1(6);
}
PRAGMA_DISABLE_OPTIMIZATION
void Uwdg_mainmanu_C__pf3053510930::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/resouerce/sounds/menuBGM.menuBGM 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void Uwdg_mainmanu_C__pf3053510930::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{182, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{176, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESelectInfo 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundMix /Game/blueprints/others/Sounds/BGM_Mix.BGM_Mix 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundClass /Game/blueprints/others/Sounds/BGM.BGM 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundMix /Game/blueprints/others/Sounds/Master_Mix.Master_Mix 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundClass /Game/blueprints/others/Sounds/Sounds_MASTER.Sounds_MASTER 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundMix /Game/blueprints/others/Sounds/SFX_Mix.SFX_Mix 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundClass /Game/blueprints/others/Sounds/SFX.SFX 
		{177, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Slider 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ComboBoxString 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.InputKeySelector 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/resouerce/image/tempMapImg.tempMapImg 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPersonJump_Loop.ThirdPersonJump_Loop 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPersonJump_Start.ThirdPersonJump_Start 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/resouerce/Mannequin/Animations/ThirdPerson_IdleRun_2D.ThirdPerson_IdleRun_2D 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.MultiLineEditableTextBox 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPerson_Jump.ThirdPerson_Jump 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
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
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/widget_manager.widget_manager_C 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  widget_manager_C /Game/blueprints/others/Observer/widget_manager.Default__widget_manager_C 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTable 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/resouerce/excel/EST_stage_1.EST_stage_1 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
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
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/resouerce/temp/StarterContent/Shapes/Shape_Cube.Shape_Cube 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/resouerce/temp/FirstPerson/FPWeapon/Mesh/SK_FPGun.SK_FPGun 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/temp/FirstPerson/FPWeapon/Materials/M_FPGun.M_FPGun 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/resouerce/image/FirstPersonCrosshair.FirstPersonCrosshair 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_Idle.FirstPerson_Idle 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/blueprints/Tower/AoEParticle.AoEParticle 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpEnd.FirstPerson_JumpEnd 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpLoop.FirstPerson_JumpLoop 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpStart.FirstPerson_JumpStart 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_Run.FirstPerson_Run 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/material/test2.test2 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{84, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/resouerce/temp/FirstPerson/Character/Mesh/SK_Mannequin_Arms_Skeleton1.SK_Mannequin_Arms_Skeleton1 
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/blueprints/UI/wdg_stagemenu.wdg_stagemenu_C 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/blueprints/UI/wdg_optionmenu.wdg_optionmenu_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__Uwdg_mainmanu_C__pf3053510930
{
	FRegisterHelper__Uwdg_mainmanu_C__pf3053510930()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/blueprints/UI/wdg_mainmanu"), &Uwdg_mainmanu_C__pf3053510930::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Uwdg_mainmanu_C__pf3053510930 Instance;
};
FRegisterHelper__Uwdg_mainmanu_C__pf3053510930 FRegisterHelper__Uwdg_mainmanu_C__pf3053510930::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
