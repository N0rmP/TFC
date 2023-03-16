#include "NativizedAssets.h"
#include "wdgxplrUpgrade__pfG3053510930.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
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
#include "Main_GameInstance__pf3789721252.h"
#include "Rifle_Upgrade1__pf1870350606.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "upgrade_Manager__pf3789721252.h"
#include "Robot_Upgrade1__pf712717951.h"
#include "Robot_Upgrade2_2__pf712717951.h"
#include "Suit_Upgrade1__pf3462679379.h"
#include "Suit_Upgrade2_1__pf3462679379.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UwdgxplrUpgrade_C__pfG3053510930::UwdgxplrUpgrade_C__pfG3053510930(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Button_106__pf = nullptr;
	bpv__Button_140__pf = nullptr;
	bpv__Button_253__pf = nullptr;
	bpv__Button_R_1__pf = nullptr;
	bpv__Button_R_2__pf = nullptr;
	bpv__Button_R_3__pf = nullptr;
	bpv__Button_RF_1__pf = nullptr;
	bpv__Button_RF_2__pf = nullptr;
	bpv__Button_RF_3__pf = nullptr;
	bpv__Button_S_1__pf = nullptr;
	bpv__Button_S_2__pf = nullptr;
	bpv__Button_S_3__pf = nullptr;
	bpv__Image_0__pf = nullptr;
	bpv__TextBlock_278__pf = nullptr;
	bpv__curcells__pf = 0;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UwdgxplrUpgrade_C__pfG3053510930::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UwdgxplrUpgrade_C__pfG3053510930::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(UMain_GameInstance_C__pf3789721252::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(URifle_Upgrade1_C__pf1870350606::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Aupgrade_Manager_C__pf3789721252::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(URobot_Upgrade1_C__pf712717951::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(URobot_Upgrade2_2_C__pf712717951::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USuit_Upgrade1_C__pf3462679379::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USuit_Upgrade2_1_C__pf3462679379::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(10);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 10);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Button_RF_3"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__wdg-plrUpgrade_Button_RF_3_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Button_RF_2"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__wdg-plrUpgrade_Button_RF_2_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Button_RF_1"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__wdg-plrUpgrade_Button_RF_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Button_S_2"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__wdg-plrUpgrade_Button_S_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Button_S_1"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__wdg-plrUpgrade_Button_S_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Button_R_3"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__wdg-plrUpgrade_Button_R_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("Button_R_2"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__wdg-plrUpgrade_Button_R_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__9 = __Local__0->ComponentDelegateBindings[7];
	__Local__9.ComponentPropertyName = FName(TEXT("Button_R_1"));
	__Local__9.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__9.FunctionNameToBind = FName(TEXT("BndEvt__wdg-plrUpgrade_Button_R_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__10 = __Local__0->ComponentDelegateBindings[8];
	__Local__10.ComponentPropertyName = FName(TEXT("Button_140"));
	__Local__10.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__10.FunctionNameToBind = FName(TEXT("BndEvt__wdg-plrUpgrade_Button_140_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__11 = __Local__0->ComponentDelegateBindings[9];
	__Local__11.ComponentPropertyName = FName(TEXT("Button_S_3"));
	__Local__11.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__11.FunctionNameToBind = FName(TEXT("BndEvt__wdg-plrUpgrade_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__12 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(4);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__14->LayoutData.Offsets.Right = 0.000000f;
	__Local__14->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__14->LayoutData.Anchors.Minimum = FVector2D(0.100000, 0.100000);
	__Local__14->LayoutData.Anchors.Maximum = FVector2D(0.900000, 0.900000);
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UImage>(__Local__1, TEXT("Image_0"), (EObjectFlags)0x00280008);
	__Local__15->ColorAndOpacity = FLinearColor(0.250000, 0.191406, 0.191406, 1.000000);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	auto __Local__16 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__16->LayoutData.Offsets.Right = 0.000000f;
	__Local__16->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__16->LayoutData.Anchors.Minimum = FVector2D(0.630000, 0.600000);
	__Local__16->LayoutData.Anchors.Maximum = FVector2D(0.870000, 0.870000);
	__Local__16->Parent = __Local__12;
	auto __Local__17 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_83"), (EObjectFlags)0x00280008);
	auto& __Local__18 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__17), UPanelWidget::__PPO__Slots() )));
	__Local__18 = TArray<UPanelSlot*> ();
	__Local__18.Reserve(3);
	auto __Local__19 = NewObject<UVerticalBoxSlot>(__Local__17, TEXT("VerticalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__19->Parent = __Local__17;
	auto __Local__20 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_106"), (EObjectFlags)0x00280008);
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__20), UPanelWidget::__PPO__Slots() )));
	__Local__21 = TArray<UPanelSlot*> ();
	__Local__21.Reserve(2);
	auto __Local__22 = NewObject<UHorizontalBoxSlot>(__Local__20, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__22->Parent = __Local__20;
	auto __Local__23 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_350"), (EObjectFlags)0x00280008);
	__Local__23->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6687669E422B5EA85B0E41AFA7944D28]\", \"C99B740B4025EC9E7B1D4E8D795862AB\", \"\ubc30\ud130\ub9ac: \")")	);
	__Local__23->Font.Size = 50;
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__21.Add(__Local__22);
	auto __Local__24 = NewObject<UHorizontalBoxSlot>(__Local__20, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__24->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__24->Parent = __Local__20;
	auto __Local__25 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_278"), (EObjectFlags)0x00280008);
	__Local__25->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"UMG\", \"TextBlockDefaultValue\", \"Text Block\")")	);
	__Local__25->Font.Size = 50;
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__21.Add(__Local__24);
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__18.Add(__Local__19);
	auto __Local__26 = NewObject<UVerticalBoxSlot>(__Local__17, TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__26->Parent = __Local__17;
	auto __Local__27 = NewObject<USpacer>(__Local__1, TEXT("Spacer"), (EObjectFlags)0x00280008);
	__Local__27->Size = FVector2D(0.000000, 30.000000);
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__18.Add(__Local__26);
	auto __Local__28 = NewObject<UVerticalBoxSlot>(__Local__17, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__28->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__28->Parent = __Local__17;
	auto __Local__29 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_84"), (EObjectFlags)0x00280008);
	auto& __Local__30 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__29), UPanelWidget::__PPO__Slots() )));
	__Local__30 = TArray<UPanelSlot*> ();
	__Local__30.Reserve(3);
	auto __Local__31 = NewObject<UHorizontalBoxSlot>(__Local__29, TEXT("HorizontalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__31->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__31->Parent = __Local__29;
	auto __Local__32 = NewObject<UButton>(__Local__1, TEXT("Button_106"), (EObjectFlags)0x00280008);
	__Local__32->Slot = __Local__31;
	__Local__31->Content = __Local__32;
	__Local__30.Add(__Local__31);
	auto __Local__33 = NewObject<UHorizontalBoxSlot>(__Local__29, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__33->Parent = __Local__29;
	auto __Local__34 = NewObject<USpacer>(__Local__1, TEXT("Spacer_66"), (EObjectFlags)0x00280008);
	__Local__34->Size = FVector2D(30.000000, 1.000000);
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__30.Add(__Local__33);
	auto __Local__35 = NewObject<UHorizontalBoxSlot>(__Local__29, TEXT("HorizontalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__35->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__35->Parent = __Local__29;
	auto __Local__36 = NewObject<UButton>(__Local__1, TEXT("Button_253"), (EObjectFlags)0x00280008);
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__30.Add(__Local__35);
	__Local__29->Slot = __Local__28;
	__Local__28->Content = __Local__29;
	__Local__18.Add(__Local__28);
	__Local__17->Slot = __Local__16;
	__Local__16->Content = __Local__17;
	__Local__13.Add(__Local__16);
	auto __Local__37 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_12"), (EObjectFlags)0x00280008);
	__Local__37->LayoutData.Offsets.Left = -20.000000f;
	__Local__37->LayoutData.Offsets.Top = -20.000000f;
	__Local__37->LayoutData.Offsets.Right = 70.000000f;
	__Local__37->LayoutData.Offsets.Bottom = 70.000000f;
	__Local__37->LayoutData.Anchors.Minimum = FVector2D(0.870000, 0.130000);
	__Local__37->LayoutData.Anchors.Maximum = FVector2D(0.870000, 0.130000);
	__Local__37->Parent = __Local__12;
	auto __Local__38 = NewObject<UButton>(__Local__1, TEXT("Button_140"), (EObjectFlags)0x00280008);
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__13.Add(__Local__37);
	auto __Local__39 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_4"), (EObjectFlags)0x00280008);
	__Local__39->LayoutData.Offsets.Right = 0.000000f;
	__Local__39->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__39->LayoutData.Anchors.Minimum = FVector2D(0.130000, 0.130000);
	__Local__39->LayoutData.Anchors.Maximum = FVector2D(0.600000, 0.870000);
	__Local__39->Parent = __Local__12;
	auto __Local__40 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_104"), (EObjectFlags)0x00280008);
	auto& __Local__41 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__40), UPanelWidget::__PPO__Slots() )));
	__Local__41 = TArray<UPanelSlot*> ();
	__Local__41.Reserve(5);
	auto __Local__42 = NewObject<UHorizontalBoxSlot>(__Local__40, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__42->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__42->Parent = __Local__40;
	auto __Local__43 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_232"), (EObjectFlags)0x00280008);
	auto& __Local__44 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__43), UPanelWidget::__PPO__Slots() )));
	__Local__44 = TArray<UPanelSlot*> ();
	__Local__44.Reserve(5);
	auto __Local__45 = NewObject<UVerticalBoxSlot>(__Local__43, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__45->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__45->Parent = __Local__43;
	auto __Local__46 = NewObject<UButton>(__Local__1, TEXT("Button_S_3"), (EObjectFlags)0x00280008);
	auto& __Local__47 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__46), UPanelWidget::__PPO__Slots() )));
	__Local__47 = TArray<UPanelSlot*> ();
	__Local__47.Reserve(1);
	auto __Local__48 = NewObject<UButtonSlot>(__Local__46, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__48->Parent = __Local__46;
	auto __Local__49 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__49->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6687669E422B5EA85B0E41AFA7944D28]\", \"D496468D4231D596C711929EC7586660\", \"\uc288\ud2b83\")")	);
	__Local__49->Slot = __Local__48;
	__Local__48->Content = __Local__49;
	__Local__47.Add(__Local__48);
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__44.Add(__Local__45);
	auto __Local__50 = NewObject<UVerticalBoxSlot>(__Local__43, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__50->Parent = __Local__43;
	auto __Local__51 = NewObject<USpacer>(__Local__1, TEXT("Spacer_1"), (EObjectFlags)0x00280008);
	__Local__51->Size = FVector2D(20.000000, 50.000000);
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__44.Add(__Local__50);
	auto __Local__52 = NewObject<UVerticalBoxSlot>(__Local__43, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__52->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__52->Parent = __Local__43;
	auto __Local__53 = NewObject<UButton>(__Local__1, TEXT("Button_S_2"), (EObjectFlags)0x00280008);
	auto& __Local__54 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__53), UPanelWidget::__PPO__Slots() )));
	__Local__54 = TArray<UPanelSlot*> ();
	__Local__54.Reserve(1);
	auto __Local__55 = NewObject<UButtonSlot>(__Local__53, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__55->Parent = __Local__53;
	auto __Local__56 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_686"), (EObjectFlags)0x00280008);
	__Local__56->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6687669E422B5EA85B0E41AFA7944D28]\", \"2600AFCD418BAC58CF58F29B9A0E16E6\", \"\uc288\ub4dc2\")")	);
	__Local__56->Slot = __Local__55;
	__Local__55->Content = __Local__56;
	__Local__54.Add(__Local__55);
	__Local__53->Slot = __Local__52;
	__Local__52->Content = __Local__53;
	__Local__44.Add(__Local__52);
	auto __Local__57 = NewObject<UVerticalBoxSlot>(__Local__43, TEXT("VerticalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__57->Parent = __Local__43;
	auto __Local__58 = NewObject<USpacer>(__Local__1, TEXT("Spacer_2"), (EObjectFlags)0x00280008);
	__Local__58->Size = FVector2D(20.000000, 50.000000);
	__Local__58->Slot = __Local__57;
	__Local__57->Content = __Local__58;
	__Local__44.Add(__Local__57);
	auto __Local__59 = NewObject<UVerticalBoxSlot>(__Local__43, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__59->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__59->Parent = __Local__43;
	auto __Local__60 = NewObject<UButton>(__Local__1, TEXT("Button_S_1"), (EObjectFlags)0x00280008);
	auto& __Local__61 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__60), UPanelWidget::__PPO__Slots() )));
	__Local__61 = TArray<UPanelSlot*> ();
	__Local__61.Reserve(1);
	auto __Local__62 = NewObject<UButtonSlot>(__Local__60, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__62->Parent = __Local__60;
	auto __Local__63 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_480"), (EObjectFlags)0x00280008);
	__Local__63->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6687669E422B5EA85B0E41AFA7944D28]\", \"E098A1894F1320BB68645CB4B3D970B2\", \"\uc288\ud2b81\")")	);
	__Local__63->Slot = __Local__62;
	__Local__62->Content = __Local__63;
	__Local__61.Add(__Local__62);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__44.Add(__Local__59);
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__41.Add(__Local__42);
	auto __Local__64 = NewObject<UHorizontalBoxSlot>(__Local__40, TEXT("HorizontalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__64->Parent = __Local__40;
	auto __Local__65 = NewObject<USpacer>(__Local__1, TEXT("Spacer_575"), (EObjectFlags)0x00280008);
	__Local__65->Size = FVector2D(20.000000, 1.000000);
	__Local__65->Slot = __Local__64;
	__Local__64->Content = __Local__65;
	__Local__41.Add(__Local__64);
	auto __Local__66 = NewObject<UHorizontalBoxSlot>(__Local__40, TEXT("HorizontalBoxSlot_11"), (EObjectFlags)0x00280008);
	__Local__66->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__66->Parent = __Local__40;
	auto __Local__67 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_1"), (EObjectFlags)0x00280008);
	auto& __Local__68 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__67), UPanelWidget::__PPO__Slots() )));
	__Local__68 = TArray<UPanelSlot*> ();
	__Local__68.Reserve(5);
	auto __Local__69 = NewObject<UVerticalBoxSlot>(__Local__67, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__69->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__69->Parent = __Local__67;
	auto __Local__70 = NewObject<UButton>(__Local__1, TEXT("Button_R_3"), (EObjectFlags)0x00280008);
	auto& __Local__71 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__70), UPanelWidget::__PPO__Slots() )));
	__Local__71 = TArray<UPanelSlot*> ();
	__Local__71.Reserve(1);
	auto __Local__72 = NewObject<UButtonSlot>(__Local__70, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__72->Parent = __Local__70;
	auto __Local__73 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_4"), (EObjectFlags)0x00280008);
	__Local__73->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6687669E422B5EA85B0E41AFA7944D28]\", \"21BECDEA4192652334F15EB928D47457\", \"\ub85c\ubd073\")")	);
	__Local__73->Slot = __Local__72;
	__Local__72->Content = __Local__73;
	__Local__71.Add(__Local__72);
	__Local__70->Slot = __Local__69;
	__Local__69->Content = __Local__70;
	__Local__68.Add(__Local__69);
	auto __Local__74 = NewObject<UVerticalBoxSlot>(__Local__67, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__74->Parent = __Local__67;
	auto __Local__75 = NewObject<USpacer>(__Local__1, TEXT("Spacer_5"), (EObjectFlags)0x00280008);
	__Local__75->Size = FVector2D(20.000000, 50.000000);
	__Local__75->Slot = __Local__74;
	__Local__74->Content = __Local__75;
	__Local__68.Add(__Local__74);
	auto __Local__76 = NewObject<UVerticalBoxSlot>(__Local__67, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__76->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__76->Parent = __Local__67;
	auto __Local__77 = NewObject<UButton>(__Local__1, TEXT("Button_R_2"), (EObjectFlags)0x00280008);
	auto& __Local__78 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__77), UPanelWidget::__PPO__Slots() )));
	__Local__78 = TArray<UPanelSlot*> ();
	__Local__78.Reserve(1);
	auto __Local__79 = NewObject<UButtonSlot>(__Local__77, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__79->Parent = __Local__77;
	auto __Local__80 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_5"), (EObjectFlags)0x00280008);
	__Local__80->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6687669E422B5EA85B0E41AFA7944D28]\", \"AEBB4A614072F45A22B3B6803C6AC660\", \"\ub85c\ubd072\")")	);
	__Local__80->Slot = __Local__79;
	__Local__79->Content = __Local__80;
	__Local__78.Add(__Local__79);
	__Local__77->Slot = __Local__76;
	__Local__76->Content = __Local__77;
	__Local__68.Add(__Local__76);
	auto __Local__81 = NewObject<UVerticalBoxSlot>(__Local__67, TEXT("VerticalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__81->Parent = __Local__67;
	auto __Local__82 = NewObject<USpacer>(__Local__1, TEXT("Spacer_6"), (EObjectFlags)0x00280008);
	__Local__82->Size = FVector2D(20.000000, 50.000000);
	__Local__82->Slot = __Local__81;
	__Local__81->Content = __Local__82;
	__Local__68.Add(__Local__81);
	auto __Local__83 = NewObject<UVerticalBoxSlot>(__Local__67, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__83->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__83->Parent = __Local__67;
	auto __Local__84 = NewObject<UButton>(__Local__1, TEXT("Button_R_1"), (EObjectFlags)0x00280008);
	auto& __Local__85 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__84), UPanelWidget::__PPO__Slots() )));
	__Local__85 = TArray<UPanelSlot*> ();
	__Local__85.Reserve(1);
	auto __Local__86 = NewObject<UButtonSlot>(__Local__84, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__86->Parent = __Local__84;
	auto __Local__87 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_6"), (EObjectFlags)0x00280008);
	__Local__87->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6687669E422B5EA85B0E41AFA7944D28]\", \"2E1AF2694DECD3143663C5A09F71A457\", \"\ub85c\ubd071\")")	);
	__Local__87->Slot = __Local__86;
	__Local__86->Content = __Local__87;
	__Local__85.Add(__Local__86);
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__68.Add(__Local__83);
	__Local__67->Slot = __Local__66;
	__Local__66->Content = __Local__67;
	__Local__41.Add(__Local__66);
	auto __Local__88 = NewObject<UHorizontalBoxSlot>(__Local__40, TEXT("HorizontalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__88->Parent = __Local__40;
	auto __Local__89 = NewObject<USpacer>(__Local__1, TEXT("Spacer_318"), (EObjectFlags)0x00280008);
	__Local__89->Size = FVector2D(20.000000, 1.000000);
	__Local__89->Slot = __Local__88;
	__Local__88->Content = __Local__89;
	__Local__41.Add(__Local__88);
	auto __Local__90 = NewObject<UHorizontalBoxSlot>(__Local__40, TEXT("HorizontalBoxSlot_9"), (EObjectFlags)0x00280008);
	__Local__90->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__90->Parent = __Local__40;
	auto __Local__91 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox"), (EObjectFlags)0x00280008);
	auto& __Local__92 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__91), UPanelWidget::__PPO__Slots() )));
	__Local__92 = TArray<UPanelSlot*> ();
	__Local__92.Reserve(5);
	auto __Local__93 = NewObject<UVerticalBoxSlot>(__Local__91, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__93->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__93->Parent = __Local__91;
	auto __Local__94 = NewObject<UButton>(__Local__1, TEXT("Button_RF_3"), (EObjectFlags)0x00280008);
	auto& __Local__95 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__94), UPanelWidget::__PPO__Slots() )));
	__Local__95 = TArray<UPanelSlot*> ();
	__Local__95.Reserve(1);
	auto __Local__96 = NewObject<UButtonSlot>(__Local__94, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__96->Parent = __Local__94;
	auto __Local__97 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__97->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6687669E422B5EA85B0E41AFA7944D28]\", \"3BA0E65E4661C7158ADD4D9F631179B1\", \"\ub77c\uc774\ud50c3\")")	);
	__Local__97->Slot = __Local__96;
	__Local__96->Content = __Local__97;
	__Local__95.Add(__Local__96);
	__Local__94->Slot = __Local__93;
	__Local__93->Content = __Local__94;
	__Local__92.Add(__Local__93);
	auto __Local__98 = NewObject<UVerticalBoxSlot>(__Local__91, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__98->Parent = __Local__91;
	auto __Local__99 = NewObject<USpacer>(__Local__1, TEXT("Spacer_3"), (EObjectFlags)0x00280008);
	__Local__99->Size = FVector2D(20.000000, 50.000000);
	__Local__99->Slot = __Local__98;
	__Local__98->Content = __Local__99;
	__Local__92.Add(__Local__98);
	auto __Local__100 = NewObject<UVerticalBoxSlot>(__Local__91, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__100->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__100->Parent = __Local__91;
	auto __Local__101 = NewObject<UButton>(__Local__1, TEXT("Button_RF_2"), (EObjectFlags)0x00280008);
	auto& __Local__102 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__101), UPanelWidget::__PPO__Slots() )));
	__Local__102 = TArray<UPanelSlot*> ();
	__Local__102.Reserve(1);
	auto __Local__103 = NewObject<UButtonSlot>(__Local__101, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__103->Parent = __Local__101;
	auto __Local__104 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__104->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6687669E422B5EA85B0E41AFA7944D28]\", \"4617C8B047A46888126C72B4777F902B\", \"\ub77c\uc774\ud50c2\")")	);
	__Local__104->Slot = __Local__103;
	__Local__103->Content = __Local__104;
	__Local__102.Add(__Local__103);
	__Local__101->Slot = __Local__100;
	__Local__100->Content = __Local__101;
	__Local__92.Add(__Local__100);
	auto __Local__105 = NewObject<UVerticalBoxSlot>(__Local__91, TEXT("VerticalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__105->Parent = __Local__91;
	auto __Local__106 = NewObject<USpacer>(__Local__1, TEXT("Spacer_4"), (EObjectFlags)0x00280008);
	__Local__106->Size = FVector2D(20.000000, 50.000000);
	__Local__106->Slot = __Local__105;
	__Local__105->Content = __Local__106;
	__Local__92.Add(__Local__105);
	auto __Local__107 = NewObject<UVerticalBoxSlot>(__Local__91, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__107->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__107->Parent = __Local__91;
	auto __Local__108 = NewObject<UButton>(__Local__1, TEXT("Button_RF_1"), (EObjectFlags)0x00280008);
	auto& __Local__109 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__108), UPanelWidget::__PPO__Slots() )));
	__Local__109 = TArray<UPanelSlot*> ();
	__Local__109.Reserve(1);
	auto __Local__110 = NewObject<UButtonSlot>(__Local__108, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__110->Parent = __Local__108;
	auto __Local__111 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_3"), (EObjectFlags)0x00280008);
	__Local__111->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6687669E422B5EA85B0E41AFA7944D28]\", \"0815545F47763049305DBC975B602F42\", \"\ub77c\uc774\ud50c1\")")	);
	__Local__111->Slot = __Local__110;
	__Local__110->Content = __Local__111;
	__Local__109.Add(__Local__110);
	__Local__108->Slot = __Local__107;
	__Local__107->Content = __Local__108;
	__Local__92.Add(__Local__107);
	__Local__91->Slot = __Local__90;
	__Local__90->Content = __Local__91;
	__Local__41.Add(__Local__90);
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__13.Add(__Local__39);
	__Local__1->RootWidget = __Local__12;
}
PRAGMA_ENABLE_OPTIMIZATION
void UwdgxplrUpgrade_C__pfG3053510930::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__112;
	SlotNames.Append(__Local__112);
}
void UwdgxplrUpgrade_C__pfG3053510930::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__113;
	TArray<FDelegateRuntimeBinding>  __Local__114;
	__Local__114.AddUninitialized(1);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__114.GetData(), 1);
	auto& __Local__115 = __Local__114[0];
	__Local__115.ObjectName = FString(TEXT("TextBlock_278"));
	__Local__115.PropertyName = FName(TEXT("Text"));
	auto& __Local__116 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__115.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__116 = TArray<FPropertyPathSegment> ();
	__Local__116.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__116.GetData(), 1);
	auto& __Local__117 = __Local__116[0];
	__Local__117.Name = FName(TEXT("curcells"));
	__Local__115.Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UwdgxplrUpgrade_C__pfG3053510930::StaticClass())->MiscConvertedSubobjects[0]), __Local__113, __Local__114);
}
void UwdgxplrUpgrade_C__pfG3053510930::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	bpf__UpgradexRobot__pfT(bpv__Button_R_1__pf, 0);
	return; // KCST_GotoReturn
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 17);
	// optimized KCST_UnconditionalGoto
	bpf__updateUpgrd__pf();
	return; // KCST_GotoReturn
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	bpf__UpgradexSuit__pfT(bpv__Button_S_2__pf, 1);
	return; // KCST_GotoReturn
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 10);
	// optimized KCST_UnconditionalGoto
	bpf__UpgradexSuit__pfT(bpv__Button_S_1__pf, 0);
	return; // KCST_GotoReturn
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 16);
	return; // KCST_GotoReturn
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	return; // KCST_GotoReturn
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 14);
	// optimized KCST_UnconditionalGoto
	bpf__Upgradexrifle__pfT(bpv__Button_RF_1__pf, 0);
	return; // KCST_GotoReturn
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 9);
	return; // KCST_GotoReturn
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	return; // KCST_GotoReturn
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	return; // KCST_GotoReturn
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	return; // KCST_GotoReturn
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_1(17);
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__BndEvt__wdgxplrUpgrade_Button_RF_3_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature__pfG()
{
	bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_4(16);
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__BndEvt__wdgxplrUpgrade_Button_RF_2_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pfG()
{
	bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_5(15);
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__BndEvt__wdgxplrUpgrade_Button_RF_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pfG()
{
	bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_6(14);
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__BndEvt__wdgxplrUpgrade_Button_S_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pfG()
{
	bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_2(12);
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__BndEvt__wdgxplrUpgrade_Button_S_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pfG()
{
	bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_3(10);
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__BndEvt__wdgxplrUpgrade_Button_R_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pfG()
{
	bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_7(9);
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__BndEvt__wdgxplrUpgrade_Button_R_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pfG()
{
	bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_8(8);
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__BndEvt__wdgxplrUpgrade_Button_R_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pfG()
{
	bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_0(6);
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__BndEvt__wdgxplrUpgrade_Button_140_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pfG()
{
	bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_9(3);
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__BndEvt__wdgxplrUpgrade_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pfG()
{
	bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_10(1);
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__updateUpgrd__pf()
{
	bpv__curcells__pf = 3;
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__UpgradexSuit__pfT(UButton* bpp__NewParam__pf, int32 bpp__NewParam1__pf)
{
	bool bpfv__suitxupxtf__pfTT{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	FLinearColor bpfv__CallFunc_MakeColor_ReturnValue__pf(EForceInit::ForceInit);
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMain_GameInstance_C__pf3789721252* bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	USuit_Upgrade1_C__pf3462679379* bpfv__CallFunc_GetComponentByClass_ReturnValue__pf{};
	USuit_Upgrade2_1_C__pf3462679379* bpfv__CallFunc_GetComponentByClass_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Upgrade_succeed__pf{};
	bool bpfv__CallFunc_Upgrade_succeed_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__suitxupxtf__pfTT = false;
			}
		case 2:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpp__NewParam1__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__CallFunc_Add_IntInt_ReturnValue__pf, bpv__curcells__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpf__payCost__pf(bpp__NewParam1__pf);
			}
		case 4:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf = Cast<UMain_GameInstance_C__pf3789721252>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam1__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam1__pf, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 11;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue__pf = CastChecked<USuit_Upgrade1_C__pf3462679379>(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf->AActor::GetComponentByClass(USuit_Upgrade1_C__pf3462679379::StaticClass()), ECastCheckedType::NullAllowed);
				}
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf))
				{
					bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf->bpf__Upgrade__pf(bpfv__CallFunc_GetComponentByClass_ReturnValue__pf, /*out*/ bpfv__CallFunc_Upgrade_succeed__pf);
				}
			}
		case 7:
			{
				bpfv__suitxupxtf__pfTT = bpfv__CallFunc_Upgrade_succeed__pf;
			}
		case 8:
			{
				if (!bpfv__suitxupxtf__pfTT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_MakeColor_ReturnValue__pf = UKismetMathLibrary::MakeColor(1.000000, 0.000000, 0.000000, 1.000000);
				if(::IsValid(bpp__NewParam__pf))
				{
					bpp__NewParam__pf->UButton::SetBackgroundColor(bpfv__CallFunc_MakeColor_ReturnValue__pf);
				}
			}
		case 10:
			{
				if(::IsValid(bpp__NewParam__pf))
				{
					bpp__NewParam__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue_1__pf = CastChecked<USuit_Upgrade2_1_C__pf3462679379>(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf->AActor::GetComponentByClass(USuit_Upgrade2_1_C__pf3462679379::StaticClass()), ECastCheckedType::NullAllowed);
				}
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf))
				{
					bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf->bpf__Upgrade__pf(bpfv__CallFunc_GetComponentByClass_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_Upgrade_succeed_1__pf);
				}
			}
		case 12:
			{
				bpfv__suitxupxtf__pfTT = bpfv__CallFunc_Upgrade_succeed_1__pf;
				__CurrentState = 8;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__UpgradexRobot__pfT(UButton* bpp__NewParam__pf, int32 bpp__NewParam1__pf)
{
	bool bpfv__robotxupxtf__pfTT{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	FLinearColor bpfv__CallFunc_MakeColor_ReturnValue__pf(EForceInit::ForceInit);
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMain_GameInstance_C__pf3789721252* bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	URobot_Upgrade1_C__pf712717951* bpfv__CallFunc_GetComponentByClass_ReturnValue__pf{};
	URobot_Upgrade2_2_C__pf712717951* bpfv__CallFunc_GetComponentByClass_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Upgrade_succeed__pf{};
	bool bpfv__CallFunc_Upgrade_succeed_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__robotxupxtf__pfTT = false;
			}
		case 2:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpp__NewParam1__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__CallFunc_Add_IntInt_ReturnValue__pf, bpv__curcells__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpf__payCost__pf(bpp__NewParam1__pf);
			}
		case 4:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf = Cast<UMain_GameInstance_C__pf3789721252>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam1__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam1__pf, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 11;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue__pf = CastChecked<URobot_Upgrade1_C__pf712717951>(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf->AActor::GetComponentByClass(URobot_Upgrade1_C__pf712717951::StaticClass()), ECastCheckedType::NullAllowed);
				}
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf))
				{
					bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf->bpf__Upgrade__pf(bpfv__CallFunc_GetComponentByClass_ReturnValue__pf, /*out*/ bpfv__CallFunc_Upgrade_succeed__pf);
				}
			}
		case 7:
			{
				bpfv__robotxupxtf__pfTT = bpfv__CallFunc_Upgrade_succeed__pf;
			}
		case 8:
			{
				if (!bpfv__robotxupxtf__pfTT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_MakeColor_ReturnValue__pf = UKismetMathLibrary::MakeColor(1.000000, 0.000000, 0.000000, 1.000000);
				if(::IsValid(bpp__NewParam__pf))
				{
					bpp__NewParam__pf->UButton::SetBackgroundColor(bpfv__CallFunc_MakeColor_ReturnValue__pf);
				}
			}
		case 10:
			{
				if(::IsValid(bpp__NewParam__pf))
				{
					bpp__NewParam__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue_1__pf = CastChecked<URobot_Upgrade2_2_C__pf712717951>(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf->AActor::GetComponentByClass(URobot_Upgrade2_2_C__pf712717951::StaticClass()), ECastCheckedType::NullAllowed);
				}
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf))
				{
					bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf->bpf__Upgrade__pf(bpfv__CallFunc_GetComponentByClass_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_Upgrade_succeed_1__pf);
				}
			}
		case 12:
			{
				bpfv__robotxupxtf__pfTT = bpfv__CallFunc_Upgrade_succeed_1__pf;
				__CurrentState = 8;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__Upgradexrifle__pfT(UButton* bpp__NewParam__pf, int32 bpp__NewParam1__pf)
{
	bool bpfv__rifflexupxtf__pfTT{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	FLinearColor bpfv__CallFunc_MakeColor_ReturnValue__pf(EForceInit::ForceInit);
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMain_GameInstance_C__pf3789721252* bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	URifle_Upgrade1_C__pf1870350606* bpfv__CallFunc_GetComponentByClass_ReturnValue__pf{};
	bool bpfv__CallFunc_Upgrade_succeed__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpp__NewParam1__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__CallFunc_Add_IntInt_ReturnValue__pf, bpv__curcells__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpf__payCost__pf(bpp__NewParam1__pf);
			}
		case 3:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf = Cast<UMain_GameInstance_C__pf3789721252>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam1__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue__pf = CastChecked<URifle_Upgrade1_C__pf1870350606>(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf->AActor::GetComponentByClass(URifle_Upgrade1_C__pf1870350606::StaticClass()), ECastCheckedType::NullAllowed);
				}
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf))
				{
					bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__upgrade_manager__pf->bpf__Upgrade__pf(bpfv__CallFunc_GetComponentByClass_ReturnValue__pf, /*out*/ bpfv__CallFunc_Upgrade_succeed__pf);
				}
			}
		case 6:
			{
				bpfv__rifflexupxtf__pfTT = bpfv__CallFunc_Upgrade_succeed__pf;
			}
		case 7:
			{
				if (!bpfv__rifflexupxtf__pfTT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_MakeColor_ReturnValue__pf = UKismetMathLibrary::MakeColor(1.000000, 0.000000, 0.000000, 1.000000);
				if(::IsValid(bpp__NewParam__pf))
				{
					bpp__NewParam__pf->UButton::SetBackgroundColor(bpfv__CallFunc_MakeColor_ReturnValue__pf);
				}
			}
		case 9:
			{
				if(::IsValid(bpp__NewParam__pf))
				{
					bpp__NewParam__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UwdgxplrUpgrade_C__pfG3053510930::bpf__payCost__pf(int32 bpp__NewParam__pf)
{
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam__pf, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam__pf, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Subtract_IntInt(bpv__curcells__pf, 1);
				bpv__curcells__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpv__curcells__pf, 2);
				bpv__curcells__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__curcells__pf, 3);
				bpv__curcells__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void UwdgxplrUpgrade_C__pfG3053510930::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UwdgxplrUpgrade_C__pfG3053510930::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
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
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
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
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/material/test2.test2 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.MultiLineEditableTextBox 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/resouerce/temp/FirstPerson/Character/Mesh/SK_Mannequin_Arms_Skeleton1.SK_Mannequin_Arms_Skeleton1 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_Run.FirstPerson_Run 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/Main_GameInstance.Main_GameInstance_C 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/OnCollections/Upgrades/Rifle-upgrades/Rifle_Upgrade1.Rifle_Upgrade1_C 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/upgrade_Manager.upgrade_Manager_C 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/OnCollections/Upgrades/Robot-upgrades/Robot_Upgrade1.Robot_Upgrade1_C 
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/OnCollections/Upgrades/Robot-upgrades/Robot_Upgrade2_2.Robot_Upgrade2_2_C 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/OnCollections/Upgrades/Suit-upgrades/Suit_Upgrade1.Suit_Upgrade1_C 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/OnCollections/Upgrades/Suit-upgrades/Suit_Upgrade2_1.Suit_Upgrade2_1_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UwdgxplrUpgrade_C__pfG3053510930
{
	FRegisterHelper__UwdgxplrUpgrade_C__pfG3053510930()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/blueprints/UI/wdg-plrUpgrade"), &UwdgxplrUpgrade_C__pfG3053510930::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UwdgxplrUpgrade_C__pfG3053510930 Instance;
};
FRegisterHelper__UwdgxplrUpgrade_C__pfG3053510930 FRegisterHelper__UwdgxplrUpgrade_C__pfG3053510930::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
