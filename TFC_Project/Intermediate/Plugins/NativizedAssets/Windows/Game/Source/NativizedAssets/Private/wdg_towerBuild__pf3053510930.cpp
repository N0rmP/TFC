#include "NativizedAssets.h"
#include "wdg_towerBuild__pf3053510930.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
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
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
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
#include "Main_GameInstance__pf3789721252.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "TowerBase__pf711247040.h"
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
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "player_character__pf2509438801.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "BasicTower__pf711247040.h"
#include "SniperTower__pf711247040.h"
#include "AoETower__pf711247040.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
Uwdg_towerBuild_C__pf3053510930::Uwdg_towerBuild_C__pf3053510930(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__alreadybuild__pf = nullptr;
	bpv__Button_0__pf = nullptr;
	bpv__Button_1__pf = nullptr;
	bpv__Button_2__pf = nullptr;
	bpv__Button_build__pf = nullptr;
	bpv__Button_closewdg__pf = nullptr;
	bpv__Button_No__pf = nullptr;
	bpv__CurBuiltTower__pf = nullptr;
	bpv__Image_277__pf = nullptr;
	bpv__Overlay_111__pf = nullptr;
	bpv__TextBlock_2__pf = nullptr;
	bpv__TextBlock_4__pf = nullptr;
	bpv__TextBlock_6__pf = nullptr;
	bpv__TextBlock_8__pf = nullptr;
	bpv__TextBlock_10__pf = nullptr;
	bpv__towerbase__pf = nullptr;
	bpv__towerBuild__pf = false;
	bpv__selectedtype__pf = FString(TEXT(""));
	bpv__plr__pf = nullptr;
	bpv__basic__pf = nullptr;
	bpv__sniper__pf = nullptr;
	bpv__aoe__pf = nullptr;
	bpv__price__pf = 0;
	bpv__dmg__pf = 0;
	bpv__spd__pf = 0.000000f;
	bpv__range__pf = 0.000000f;
	bpv__selectedtower__pf = 0;
	bpv__towerChosen__pf = false;
	bpv__energy__pf = 0;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void Uwdg_towerBuild_C__pf3053510930::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void Uwdg_towerBuild_C__pf3053510930::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ATowerBase_C__pf711247040::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Aelectricity_manager_C__pf3789721252::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Aplayer_character_C__pf2509438801::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABasicTower_C__pf711247040::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ASniperTower_C__pf711247040::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAoETower_C__pf711247040::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(10);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 10);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Button_build"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__wdg_towerBuild_Button_build_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("alreadybuild"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__wdg_towerBuild_alreadybuild_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Button_0"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Button_closewdg"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Button_closewdg_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Button_1"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__wdg_towerBuild_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Button_2"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__wdg_towerBuild_Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("Button_2"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__wdg_towerBuild_Button_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__9 = __Local__0->ComponentDelegateBindings[7];
	__Local__9.ComponentPropertyName = FName(TEXT("Button_1"));
	__Local__9.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__9.FunctionNameToBind = FName(TEXT("BndEvt__wdg_towerBuild_Button_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__10 = __Local__0->ComponentDelegateBindings[8];
	__Local__10.ComponentPropertyName = FName(TEXT("Button_0"));
	__Local__10.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__10.FunctionNameToBind = FName(TEXT("BndEvt__wdg_towerBuild_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__11 = __Local__0->ComponentDelegateBindings[9];
	__Local__11.ComponentPropertyName = FName(TEXT("Button_No"));
	__Local__11.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__11.FunctionNameToBind = FName(TEXT("BndEvt__wdg_towerBuild_Button_No_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__12 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(6);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__14->LayoutData.Offsets.Left = -150.000000f;
	__Local__14->LayoutData.Offsets.Top = 50.000000f;
	__Local__14->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__14->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__14->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UButton>(__Local__1, TEXT("Button_closewdg"), (EObjectFlags)0x00280008);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	auto __Local__16 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_5"), (EObjectFlags)0x00280008);
	__Local__16->LayoutData.Offsets.Left = -400.000000f;
	__Local__16->LayoutData.Offsets.Top = -300.000000f;
	__Local__16->LayoutData.Offsets.Right = 800.000000f;
	__Local__16->LayoutData.Offsets.Bottom = 200.000000f;
	__Local__16->LayoutData.Anchors.Minimum = FVector2D(0.500000, 1.000000);
	__Local__16->LayoutData.Anchors.Maximum = FVector2D(0.500000, 1.000000);
	__Local__16->Parent = __Local__12;
	auto __Local__17 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_53"), (EObjectFlags)0x00280008);
	auto& __Local__18 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__17), UPanelWidget::__PPO__Slots() )));
	__Local__18 = TArray<UPanelSlot*> ();
	__Local__18.Reserve(5);
	auto __Local__19 = NewObject<UHorizontalBoxSlot>(__Local__17, TEXT("HorizontalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__19->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__19->Parent = __Local__17;
	auto __Local__20 = NewObject<UButton>(__Local__1, TEXT("Button_0"), (EObjectFlags)0x00280008);
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__20), UPanelWidget::__PPO__Slots() )));
	__Local__21 = TArray<UPanelSlot*> ();
	__Local__21.Reserve(1);
	auto __Local__22 = NewObject<UButtonSlot>(__Local__20, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__22->Parent = __Local__20;
	auto __Local__23 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__23->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"DF12D521444BF548B0F48395D3C5BBE7\", \"\uae30\ubcf8 \ud130\ub81b\")")	);
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__21.Add(__Local__22);
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__18.Add(__Local__19);
	auto __Local__24 = NewObject<UHorizontalBoxSlot>(__Local__17, TEXT("HorizontalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__24->Parent = __Local__17;
	auto __Local__25 = NewObject<USpacer>(__Local__1, TEXT("Spacer_181"), (EObjectFlags)0x00280008);
	__Local__25->Size = FVector2D(30.000000, 1.000000);
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__18.Add(__Local__24);
	auto __Local__26 = NewObject<UHorizontalBoxSlot>(__Local__17, TEXT("HorizontalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__26->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__26->Parent = __Local__17;
	auto __Local__27 = NewObject<UButton>(__Local__1, TEXT("Button_1"), (EObjectFlags)0x00280008);
	auto& __Local__28 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__27), UPanelWidget::__PPO__Slots() )));
	__Local__28 = TArray<UPanelSlot*> ();
	__Local__28.Reserve(1);
	auto __Local__29 = NewObject<UButtonSlot>(__Local__27, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__29->Parent = __Local__27;
	auto __Local__30 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_78"), (EObjectFlags)0x00280008);
	__Local__30->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"5B17930849A63996E64802A800576FBF\", \"\uc800\uaca9 \ud130\ub81b\")")	);
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__28.Add(__Local__29);
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__18.Add(__Local__26);
	auto __Local__31 = NewObject<UHorizontalBoxSlot>(__Local__17, TEXT("HorizontalBoxSlot_11"), (EObjectFlags)0x00280008);
	__Local__31->Parent = __Local__17;
	auto __Local__32 = NewObject<USpacer>(__Local__1, TEXT("Spacer"), (EObjectFlags)0x00280008);
	__Local__32->Size = FVector2D(30.000000, 1.000000);
	__Local__32->Slot = __Local__31;
	__Local__31->Content = __Local__32;
	__Local__18.Add(__Local__31);
	auto __Local__33 = NewObject<UHorizontalBoxSlot>(__Local__17, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__33->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__33->Parent = __Local__17;
	auto __Local__34 = NewObject<UButton>(__Local__1, TEXT("Button_2"), (EObjectFlags)0x00280008);
	auto& __Local__35 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__34), UPanelWidget::__PPO__Slots() )));
	__Local__35 = TArray<UPanelSlot*> ();
	__Local__35.Reserve(1);
	auto __Local__36 = NewObject<UButtonSlot>(__Local__34, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__36->Parent = __Local__34;
	auto __Local__37 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__37->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"B4F73ACF4F25CE507E8441BC05940885\", \"\ud654\uc5fc \ud130\ub81b\")")	);
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__35.Add(__Local__36);
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__18.Add(__Local__33);
	__Local__17->Slot = __Local__16;
	__Local__16->Content = __Local__17;
	__Local__13.Add(__Local__16);
	auto __Local__38 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__38->LayoutData.Offsets.Left = 444.000000f;
	__Local__38->LayoutData.Offsets.Top = -404.000000f;
	__Local__38->LayoutData.Offsets.Right = 436.000000f;
	__Local__38->LayoutData.Offsets.Bottom = 300.000000f;
	__Local__38->LayoutData.Anchors.Minimum = FVector2D(0.500000, 1.000000);
	__Local__38->LayoutData.Anchors.Maximum = FVector2D(0.500000, 1.000000);
	__Local__38->Parent = __Local__12;
	auto __Local__39 = NewObject<UOverlay>(__Local__1, TEXT("Overlay_111"), (EObjectFlags)0x00280008);
	auto& __Local__40 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__39), UPanelWidget::__PPO__Slots() )));
	__Local__40 = TArray<UPanelSlot*> ();
	__Local__40.Reserve(2);
	auto __Local__41 = NewObject<UOverlaySlot>(__Local__39, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__41->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__41->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__41->Parent = __Local__39;
	auto __Local__42 = NewObject<UImage>(__Local__1, TEXT("Image_277"), (EObjectFlags)0x00280008);
	__Local__42->ColorAndOpacity = FLinearColor(0.000000, 0.326668, 1.000000, 1.000000);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__40.Add(__Local__41);
	auto __Local__43 = NewObject<UOverlaySlot>(__Local__39, TEXT("OverlaySlot_6"), (EObjectFlags)0x00280008);
	__Local__43->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__43->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__43->Parent = __Local__39;
	auto __Local__44 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_84"), (EObjectFlags)0x00280008);
	auto& __Local__45 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__44), UPanelWidget::__PPO__Slots() )));
	__Local__45 = TArray<UPanelSlot*> ();
	__Local__45.Reserve(4);
	auto __Local__46 = NewObject<UVerticalBoxSlot>(__Local__44, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__46->Parent = __Local__44;
	auto __Local__47 = NewObject<USpacer>(__Local__1, TEXT("Spacer_242"), (EObjectFlags)0x00280008);
	__Local__47->Size = FVector2D(1.000000, 64.692162);
	__Local__47->Slot = __Local__46;
	__Local__46->Content = __Local__47;
	__Local__45.Add(__Local__46);
	auto __Local__48 = NewObject<UVerticalBoxSlot>(__Local__44, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__48->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__48->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__48->Parent = __Local__44;
	auto __Local__49 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_101"), (EObjectFlags)0x00280008);
	auto& __Local__50 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__49), UPanelWidget::__PPO__Slots() )));
	__Local__50 = TArray<UPanelSlot*> ();
	__Local__50.Reserve(2);
	auto __Local__51 = NewObject<UHorizontalBoxSlot>(__Local__49, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__51->Parent = __Local__49;
	auto __Local__52 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__52->Slot = __Local__51;
	__Local__51->Content = __Local__52;
	__Local__50.Add(__Local__51);
	auto __Local__53 = NewObject<UHorizontalBoxSlot>(__Local__49, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__53->Parent = __Local__49;
	auto __Local__54 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_433"), (EObjectFlags)0x00280008);
	__Local__54->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"D8FEBCE64E529B6DB2DFC18818D6A618\", \"\ud0c0\uc785\uc774 \uc120\ud0dd\ub410\uc2b5\ub2c8\ub2e4.\")")	);
	__Local__54->Slot = __Local__53;
	__Local__53->Content = __Local__54;
	__Local__50.Add(__Local__53);
	__Local__49->Slot = __Local__48;
	__Local__48->Content = __Local__49;
	__Local__45.Add(__Local__48);
	auto __Local__55 = NewObject<UVerticalBoxSlot>(__Local__44, TEXT("VerticalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__55->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__55->Parent = __Local__44;
	auto __Local__56 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_3"), (EObjectFlags)0x00280008);
	__Local__56->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"703F476B4F7514715DFED8B3DF29E362\", \"\uc124\uce58\ud558\uc2dc\uaca0\uc2b5\ub2c8\uae4c?\")")	);
	__Local__56->Slot = __Local__55;
	__Local__55->Content = __Local__56;
	__Local__45.Add(__Local__55);
	auto __Local__57 = NewObject<UVerticalBoxSlot>(__Local__44, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__57->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__57->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__57->Parent = __Local__44;
	auto __Local__58 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_166"), (EObjectFlags)0x00280008);
	auto& __Local__59 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__58), UPanelWidget::__PPO__Slots() )));
	__Local__59 = TArray<UPanelSlot*> ();
	__Local__59.Reserve(5);
	auto __Local__60 = NewObject<UHorizontalBoxSlot>(__Local__58, TEXT("HorizontalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__60->Parent = __Local__58;
	auto __Local__61 = NewObject<USpacer>(__Local__1, TEXT("Spacer_3"), (EObjectFlags)0x00280008);
	__Local__61->Size = FVector2D(80.000000, 70.000000);
	__Local__61->Slot = __Local__60;
	__Local__60->Content = __Local__61;
	__Local__59.Add(__Local__60);
	auto __Local__62 = NewObject<UHorizontalBoxSlot>(__Local__58, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__62->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__62->Parent = __Local__58;
	auto __Local__63 = NewObject<UButton>(__Local__1, TEXT("Button_build"), (EObjectFlags)0x00280008);
	auto& __Local__64 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__63), UPanelWidget::__PPO__Slots() )));
	__Local__64 = TArray<UPanelSlot*> ();
	__Local__64.Reserve(1);
	auto __Local__65 = NewObject<UButtonSlot>(__Local__63, TEXT("ButtonSlot_1"), (EObjectFlags)0x00280008);
	__Local__65->Parent = __Local__63;
	auto __Local__66 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_539"), (EObjectFlags)0x00280008);
	__Local__66->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"CD377A794A99F876C8DD54B1D4CC631E\", \"YES\")")	);
	__Local__66->Slot = __Local__65;
	__Local__65->Content = __Local__66;
	__Local__64.Add(__Local__65);
	__Local__63->Slot = __Local__62;
	__Local__62->Content = __Local__63;
	__Local__59.Add(__Local__62);
	auto __Local__67 = NewObject<UHorizontalBoxSlot>(__Local__58, TEXT("HorizontalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__67->Parent = __Local__58;
	auto __Local__68 = NewObject<USpacer>(__Local__1, TEXT("Spacer_2"), (EObjectFlags)0x00280008);
	__Local__68->Size = FVector2D(80.000000, 70.000000);
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__59.Add(__Local__67);
	auto __Local__69 = NewObject<UHorizontalBoxSlot>(__Local__58, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__69->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__69->Parent = __Local__58;
	auto __Local__70 = NewObject<UButton>(__Local__1, TEXT("Button_No"), (EObjectFlags)0x00280008);
	auto& __Local__71 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__70), UPanelWidget::__PPO__Slots() )));
	__Local__71 = TArray<UPanelSlot*> ();
	__Local__71.Reserve(1);
	auto __Local__72 = NewObject<UButtonSlot>(__Local__70, TEXT("ButtonSlot_1"), (EObjectFlags)0x00280008);
	__Local__72->Parent = __Local__70;
	auto __Local__73 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_657"), (EObjectFlags)0x00280008);
	__Local__73->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"271407594F88068974122A960A0CDE00\", \"NO\")")	);
	__Local__73->Slot = __Local__72;
	__Local__72->Content = __Local__73;
	__Local__71.Add(__Local__72);
	__Local__70->Slot = __Local__69;
	__Local__69->Content = __Local__70;
	__Local__59.Add(__Local__69);
	auto __Local__74 = NewObject<UHorizontalBoxSlot>(__Local__58, TEXT("HorizontalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__74->Parent = __Local__58;
	auto __Local__75 = NewObject<USpacer>(__Local__1, TEXT("Spacer_1"), (EObjectFlags)0x00280008);
	__Local__75->Size = FVector2D(80.000000, 70.000000);
	__Local__75->Slot = __Local__74;
	__Local__74->Content = __Local__75;
	__Local__59.Add(__Local__74);
	__Local__58->Slot = __Local__57;
	__Local__57->Content = __Local__58;
	__Local__45.Add(__Local__57);
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__40.Add(__Local__43);
	__Local__39->Slot = __Local__38;
	__Local__39->bIsVariable = true;
	__Local__39->Visibility = ESlateVisibility::Hidden;
	__Local__38->Content = __Local__39;
	__Local__13.Add(__Local__38);
	auto __Local__76 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_4"), (EObjectFlags)0x00280008);
	__Local__76->LayoutData.Offsets.Left = -200.000000f;
	__Local__76->LayoutData.Offsets.Top = 44.000000f;
	__Local__76->LayoutData.Offsets.Right = 400.000000f;
	__Local__76->LayoutData.Offsets.Bottom = 46.666656f;
	__Local__76->LayoutData.Anchors.Minimum = FVector2D(0.850000, 0.500000);
	__Local__76->LayoutData.Anchors.Maximum = FVector2D(0.850000, 0.500000);
	__Local__76->Parent = __Local__12;
	auto __Local__77 = NewObject<UVerticalBox>(__Local__1, TEXT("CurBuiltTower"), (EObjectFlags)0x00280008);
	__Local__77->Slot = __Local__76;
	__Local__77->bIsVariable = true;
	__Local__76->Content = __Local__77;
	__Local__13.Add(__Local__76);
	auto __Local__78 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_18"), (EObjectFlags)0x00280008);
	__Local__78->LayoutData.Offsets.Left = -200.000000f;
	__Local__78->LayoutData.Offsets.Top = -350.000000f;
	__Local__78->LayoutData.Offsets.Right = 400.000000f;
	__Local__78->LayoutData.Offsets.Bottom = 350.000000f;
	__Local__78->LayoutData.Anchors.Minimum = FVector2D(0.850000, 0.500000);
	__Local__78->LayoutData.Anchors.Maximum = FVector2D(0.850000, 0.500000);
	__Local__78->Parent = __Local__12;
	auto __Local__79 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_87"), (EObjectFlags)0x00280008);
	auto& __Local__80 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__79), UPanelWidget::__PPO__Slots() )));
	__Local__80 = TArray<UPanelSlot*> ();
	__Local__80.Reserve(5);
	auto __Local__81 = NewObject<UVerticalBoxSlot>(__Local__79, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__81->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__81->Parent = __Local__79;
	auto __Local__82 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_730"), (EObjectFlags)0x00280008);
	__Local__82->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"EE17255043B6AC478BEB849102313B6B\", \"Tower Info\")")	);
	__Local__82->Slot = __Local__81;
	__Local__81->Content = __Local__82;
	__Local__80.Add(__Local__81);
	auto __Local__83 = NewObject<UVerticalBoxSlot>(__Local__79, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__83->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__83->Parent = __Local__79;
	auto __Local__84 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_476"), (EObjectFlags)0x00280008);
	auto& __Local__85 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__84), UPanelWidget::__PPO__Slots() )));
	__Local__85 = TArray<UPanelSlot*> ();
	__Local__85.Reserve(2);
	auto __Local__86 = NewObject<UHorizontalBoxSlot>(__Local__84, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__86->Parent = __Local__84;
	auto __Local__87 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_797"), (EObjectFlags)0x00280008);
	__Local__87->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"1472DAA441106066A594ADBA3EADBCA5\", \"Price :\")")	);
	__Local__87->Slot = __Local__86;
	__Local__86->Content = __Local__87;
	__Local__85.Add(__Local__86);
	auto __Local__88 = NewObject<UHorizontalBoxSlot>(__Local__84, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__88->Parent = __Local__84;
	auto __Local__89 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_4"), (EObjectFlags)0x00280008);
	__Local__89->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"3A34ADBC4685D7A94BCAEC9D5C7FD224\", \"0\")")	);
	__Local__89->Slot = __Local__88;
	__Local__88->Content = __Local__89;
	__Local__85.Add(__Local__88);
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__80.Add(__Local__83);
	auto __Local__90 = NewObject<UVerticalBoxSlot>(__Local__79, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__90->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__90->Parent = __Local__79;
	auto __Local__91 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox"), (EObjectFlags)0x00280008);
	auto& __Local__92 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__91), UPanelWidget::__PPO__Slots() )));
	__Local__92 = TArray<UPanelSlot*> ();
	__Local__92.Reserve(2);
	auto __Local__93 = NewObject<UHorizontalBoxSlot>(__Local__91, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__93->Parent = __Local__91;
	auto __Local__94 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_5"), (EObjectFlags)0x00280008);
	__Local__94->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"1984F9BA461C6EBC69FCFD998259B66B\", \"Damage :\")")	);
	__Local__94->Slot = __Local__93;
	__Local__93->Content = __Local__94;
	__Local__92.Add(__Local__93);
	auto __Local__95 = NewObject<UHorizontalBoxSlot>(__Local__91, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__95->Parent = __Local__91;
	auto __Local__96 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_6"), (EObjectFlags)0x00280008);
	__Local__96->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"C5417BA249C89EEB5371948A155A03E9\", \"0\")")	);
	__Local__96->Slot = __Local__95;
	__Local__95->Content = __Local__96;
	__Local__92.Add(__Local__95);
	__Local__91->Slot = __Local__90;
	__Local__90->Content = __Local__91;
	__Local__80.Add(__Local__90);
	auto __Local__97 = NewObject<UVerticalBoxSlot>(__Local__79, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__97->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__97->Parent = __Local__79;
	auto __Local__98 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_1"), (EObjectFlags)0x00280008);
	auto& __Local__99 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__98), UPanelWidget::__PPO__Slots() )));
	__Local__99 = TArray<UPanelSlot*> ();
	__Local__99.Reserve(2);
	auto __Local__100 = NewObject<UHorizontalBoxSlot>(__Local__98, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__100->Parent = __Local__98;
	auto __Local__101 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_7"), (EObjectFlags)0x00280008);
	__Local__101->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"DDE764474D254CA9B46FC9A2F59F19C5\", \"ATK_SPEED :\")")	);
	__Local__101->Slot = __Local__100;
	__Local__100->Content = __Local__101;
	__Local__99.Add(__Local__100);
	auto __Local__102 = NewObject<UHorizontalBoxSlot>(__Local__98, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__102->Parent = __Local__98;
	auto __Local__103 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_8"), (EObjectFlags)0x00280008);
	__Local__103->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"7EBF9BAB4EB8DA568F8A4BB636ECD4F4\", \"0\")")	);
	__Local__103->Slot = __Local__102;
	__Local__102->Content = __Local__103;
	__Local__99.Add(__Local__102);
	__Local__98->Slot = __Local__97;
	__Local__97->Content = __Local__98;
	__Local__80.Add(__Local__97);
	auto __Local__104 = NewObject<UVerticalBoxSlot>(__Local__79, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__104->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__104->Parent = __Local__79;
	auto __Local__105 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_2"), (EObjectFlags)0x00280008);
	auto& __Local__106 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__105), UPanelWidget::__PPO__Slots() )));
	__Local__106 = TArray<UPanelSlot*> ();
	__Local__106.Reserve(2);
	auto __Local__107 = NewObject<UHorizontalBoxSlot>(__Local__105, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__107->Parent = __Local__105;
	auto __Local__108 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_9"), (EObjectFlags)0x00280008);
	__Local__108->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"BFBAF52A4752A23ED79E27B58709BECC\", \"Range :\")")	);
	__Local__108->Slot = __Local__107;
	__Local__107->Content = __Local__108;
	__Local__106.Add(__Local__107);
	auto __Local__109 = NewObject<UHorizontalBoxSlot>(__Local__105, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__109->Parent = __Local__105;
	auto __Local__110 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_10"), (EObjectFlags)0x00280008);
	__Local__110->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"FB13F4A8495D95AA4F1A638D71DF8B9F\", \"0\")")	);
	__Local__110->Slot = __Local__109;
	__Local__109->Content = __Local__110;
	__Local__106.Add(__Local__109);
	__Local__105->Slot = __Local__104;
	__Local__104->Content = __Local__105;
	__Local__80.Add(__Local__104);
	__Local__79->Slot = __Local__78;
	__Local__78->Content = __Local__79;
	__Local__13.Add(__Local__78);
	auto __Local__111 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_27"), (EObjectFlags)0x00280008);
	__Local__111->LayoutData.Offsets.Left = -400.000000f;
	__Local__111->LayoutData.Offsets.Top = -300.000000f;
	__Local__111->LayoutData.Offsets.Right = 800.000000f;
	__Local__111->LayoutData.Offsets.Bottom = 200.000000f;
	__Local__111->LayoutData.Anchors.Minimum = FVector2D(0.500000, 1.000000);
	__Local__111->LayoutData.Anchors.Maximum = FVector2D(0.500000, 1.000000);
	__Local__111->Parent = __Local__12;
	auto __Local__112 = NewObject<UButton>(__Local__1, TEXT("alreadybuild"), (EObjectFlags)0x00280008);
	__Local__112->BackgroundColor = FLinearColor(0.603000, 0.034371, 0.034371, 1.000000);
	auto& __Local__113 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__112), UPanelWidget::__PPO__Slots() )));
	__Local__113 = TArray<UPanelSlot*> ();
	__Local__113.Reserve(1);
	auto __Local__114 = NewObject<UButtonSlot>(__Local__112, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__114->Parent = __Local__112;
	auto __Local__115 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_912"), (EObjectFlags)0x00280008);
	__Local__115->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B8022D654DEDA29FDC245A8D44D9E2C4]\", \"4790292D4BA0567F0BC80596371DF9F2\", \"\ud3ec\ud0d1\uc774 \uc774\ubbf8 \uc124\uce58 \ub418\uc5c8\uc2b5\ub2c8\ub2e4.\")")	);
	__Local__115->Slot = __Local__114;
	__Local__114->Content = __Local__115;
	__Local__113.Add(__Local__114);
	__Local__112->Slot = __Local__111;
	__Local__112->Visibility = ESlateVisibility::Hidden;
	__Local__111->Content = __Local__112;
	__Local__13.Add(__Local__111);
	__Local__1->RootWidget = __Local__12;
}
PRAGMA_ENABLE_OPTIMIZATION
void Uwdg_towerBuild_C__pf3053510930::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__116;
	SlotNames.Append(__Local__116);
}
void Uwdg_towerBuild_C__pf3053510930::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__117;
	TArray<FDelegateRuntimeBinding>  __Local__118;
	__Local__118.AddUninitialized(5);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__118.GetData(), 5);
	auto& __Local__119 = __Local__118[0];
	__Local__119.ObjectName = FString(TEXT("TextBlock_2"));
	__Local__119.PropertyName = FName(TEXT("Text"));
	auto& __Local__120 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__119.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__120 = TArray<FPropertyPathSegment> ();
	__Local__120.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__120.GetData(), 1);
	auto& __Local__121 = __Local__120[0];
	__Local__121.Name = FName(TEXT("selectedtype"));
	__Local__119.Kind = EBindingKind::Property;
	auto& __Local__122 = __Local__118[1];
	__Local__122.ObjectName = FString(TEXT("TextBlock_4"));
	__Local__122.PropertyName = FName(TEXT("Text"));
	auto& __Local__123 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__122.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__123 = TArray<FPropertyPathSegment> ();
	__Local__123.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__123.GetData(), 1);
	auto& __Local__124 = __Local__123[0];
	__Local__124.Name = FName(TEXT("price"));
	__Local__122.Kind = EBindingKind::Property;
	auto& __Local__125 = __Local__118[2];
	__Local__125.ObjectName = FString(TEXT("TextBlock_6"));
	__Local__125.PropertyName = FName(TEXT("Text"));
	auto& __Local__126 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__125.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__126 = TArray<FPropertyPathSegment> ();
	__Local__126.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__126.GetData(), 1);
	auto& __Local__127 = __Local__126[0];
	__Local__127.Name = FName(TEXT("dmg"));
	__Local__125.Kind = EBindingKind::Property;
	auto& __Local__128 = __Local__118[3];
	__Local__128.ObjectName = FString(TEXT("TextBlock_8"));
	__Local__128.PropertyName = FName(TEXT("Text"));
	auto& __Local__129 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__128.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__129 = TArray<FPropertyPathSegment> ();
	__Local__129.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__129.GetData(), 1);
	auto& __Local__130 = __Local__129[0];
	__Local__130.Name = FName(TEXT("spd"));
	__Local__128.Kind = EBindingKind::Property;
	auto& __Local__131 = __Local__118[4];
	__Local__131.ObjectName = FString(TEXT("TextBlock_10"));
	__Local__131.PropertyName = FName(TEXT("Text"));
	auto& __Local__132 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__131.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__132 = TArray<FPropertyPathSegment> ();
	__Local__132.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__132.GetData(), 1);
	auto& __Local__133 = __Local__132[0];
	__Local__133.Name = FName(TEXT("range"));
	__Local__131.Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(Uwdg_towerBuild_C__pf3053510930::StaticClass())->MiscConvertedSubobjects[0]), __Local__117, __Local__118);
}
void Uwdg_towerBuild_C__pf3053510930::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void Uwdg_towerBuild_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerBuild__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 30);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__towerbase__pf);
	if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(bpv__towerbase__pf))
	{
		bpv__towerbase__pf->bpf__BuildTower__pf(bpv__selectedtower__pf);
	}
	bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
	b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf = Cast<UMain_GameInstance_C__pf3789721252>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__elecricity_manager__pf))
	{
		b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__elecricity_manager__pf->bpf__add_electricity__pf(bpv__price__pf, /*out*/ b0l__CallFunc_add_electricity_is_possible__pf);
	}
	bpf__closewdg__pf();
	return; // KCST_GotoReturn
}
void Uwdg_towerBuild_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerBuild__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 4:
			{
				if(::IsValid(bpv__Overlay_111__pf))
				{
					bpv__Overlay_111__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 5:
			{
				bpv__towerChosen__pf = true;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				__CurrentState = 13;
				break;
			}
		case 13:
			{
				bpf__selectedtpe__pf(2, /*out*/ b0l__CallFunc_selectedtpe_NewParam1__pf);
			}
		case 14:
			{
				if (!b0l__CallFunc_selectedtpe_NewParam1__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 4;
				break;
			}
		case 15:
			{
				__CurrentState = 16;
				break;
			}
		case 16:
			{
				bpf__selectedtpe__pf(1, /*out*/ b0l__CallFunc_selectedtpe_NewParam1_1__pf);
			}
		case 17:
			{
				if (!b0l__CallFunc_selectedtpe_NewParam1_1__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 4;
				break;
			}
		case 21:
			{
				__CurrentState = 22;
				break;
			}
		case 22:
			{
				bpf__selectedtpe__pf(0, /*out*/ b0l__CallFunc_selectedtpe_NewParam1_2__pf);
			}
		case 23:
			{
				if (!b0l__CallFunc_selectedtpe_NewParam1_2__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Uwdg_towerBuild_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerBuild__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 18:
			{
				__CurrentState = 19;
				break;
			}
		case 19:
			{
				bpf__closewdg__pf();
				__CurrentState = -1;
				break;
			}
		case 29:
			{
				__CurrentState = 19;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Uwdg_towerBuild_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerBuild__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Overlay_111__pf))
	{
		bpv__Overlay_111__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	bpv__towerChosen__pf = false;
	return; // KCST_GotoReturn
}
void Uwdg_towerBuild_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerBuild__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 20);
	return; // KCST_GotoReturn
}
void Uwdg_towerBuild_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerBuild__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 10);
	// optimized KCST_UnconditionalGoto
	bpf__updatehovered__pf(2);
	return; // KCST_GotoReturn
}
void Uwdg_towerBuild_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerBuild__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	bpf__updatehovered__pf(1);
	return; // KCST_GotoReturn
}
void Uwdg_towerBuild_C__pf3053510930::bpf__ExecuteUbergraph_wdg_towerBuild__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	bpf__updatehovered__pf(0);
	return; // KCST_GotoReturn
}
void Uwdg_towerBuild_C__pf3053510930::bpf__BndEvt__wdg_towerBuild_Button_build_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerBuild__pf_0(30);
}
void Uwdg_towerBuild_C__pf3053510930::bpf__BndEvt__wdg_towerBuild_alreadybuild_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerBuild__pf_2(29);
}
void Uwdg_towerBuild_C__pf3053510930::bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerBuild__pf_1(21);
}
void Uwdg_towerBuild_C__pf3053510930::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_wdg_towerBuild__pf_4(20);
}
void Uwdg_towerBuild_C__pf3053510930::bpf__BndEvt__Button_closewdg_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerBuild__pf_2(18);
}
void Uwdg_towerBuild_C__pf3053510930::bpf__BndEvt__wdg_towerBuild_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerBuild__pf_1(15);
}
void Uwdg_towerBuild_C__pf3053510930::bpf__BndEvt__wdg_towerBuild_Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerBuild__pf_1(12);
}
void Uwdg_towerBuild_C__pf3053510930::bpf__BndEvt__wdg_towerBuild_Button_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerBuild__pf_5(10);
}
void Uwdg_towerBuild_C__pf3053510930::bpf__BndEvt__wdg_towerBuild_Button_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerBuild__pf_6(8);
}
void Uwdg_towerBuild_C__pf3053510930::bpf__BndEvt__wdg_towerBuild_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerBuild__pf_7(6);
}
void Uwdg_towerBuild_C__pf3053510930::bpf__BndEvt__wdg_towerBuild_Button_No_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_towerBuild__pf_3(1);
}
void Uwdg_towerBuild_C__pf3053510930::bpf__setbase__pf(ATowerBase_C__pf711247040* bpp__NewParam__pf, Aplayer_character_C__pf2509438801* bpp__NewParam1__pf)
{
	bpv__towerbase__pf = bpp__NewParam__pf;
	bpv__plr__pf = bpp__NewParam1__pf;
}
void Uwdg_towerBuild_C__pf3053510930::bpf__selectedtpe__pf(int32 bpp__NewParam__pf, /*out*/ bool& bpp__NewParam1__pf)
{
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMain_GameInstance_C__pf3789721252* bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 bpfv__CallFunc_get_electricity_cur_electricity_res__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam__pf, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 10;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam__pf, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 11;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpv__selectedtype__pf = FString(TEXT("\uae30\ubcf8 "));
			}
		case 3:
			{
				bpv__selectedtower__pf = bpp__NewParam__pf;
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
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__elecricity_manager__pf))
				{
					bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpv__elecricity_manager__pf->bpf__get_electricity__pf(/*out*/ bpfv__CallFunc_get_electricity_cur_electricity_res__pf);
				}
			}
		case 6:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__selectedtower__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__selectedtower__pf, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 12;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__selectedtower__pf, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_get_electricity_cur_electricity_res__pf, 100);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_get_electricity_cur_electricity_res__pf, 100);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 9:
			{
				bpp__NewParam1__pf = true;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpv__selectedtype__pf = FString(TEXT("\uc2a4\ub098\uc774\ud37c"));
				__CurrentState = 3;
				break;
			}
		case 11:
			{
				bpv__selectedtype__pf = FString(TEXT("\ud654\uc5fc"));
				__CurrentState = 3;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_get_electricity_cur_electricity_res__pf, 150);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 13;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_get_electricity_cur_electricity_res__pf, 150);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
				__CurrentState = 9;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_get_electricity_cur_electricity_res__pf, 200);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 15;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_get_electricity_cur_electricity_res__pf, 200);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 9;
					break;
				}
				__CurrentState = 9;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Uwdg_towerBuild_C__pf3053510930::bpf__updatehovered__pf(int32 bpp__NewParam__pf)
{
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__towerChosen__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam__pf, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__NewParam__pf, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 11;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpv__price__pf = 100;
			}
		case 4:
			{
				bpv__dmg__pf = 0;
			}
		case 5:
			{
				bpv__spd__pf = 1.000000;
			}
		case 6:
			{
				bpv__range__pf = 200.000000;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpv__price__pf = 150;
			}
		case 8:
			{
				bpv__dmg__pf = 100;
			}
		case 9:
			{
				bpv__spd__pf = 1.000000;
			}
		case 10:
			{
				bpv__range__pf = 9999.000000;
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				bpv__price__pf = 200;
			}
		case 12:
			{
				bpv__dmg__pf = 8;
			}
		case 13:
			{
				bpv__spd__pf = 0.200000;
			}
		case 14:
			{
				bpv__range__pf = 100.000000;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Uwdg_towerBuild_C__pf3053510930::bpf__closewdg__pf()
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = false;
	}
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	if(::IsValid(bpv__plr__pf))
	{
		bpv__plr__pf->bpf__set_is_focussing__pf(false);
	}
	RemoveFromParent();
}
PRAGMA_DISABLE_OPTIMIZATION
void Uwdg_towerBuild_C__pf3053510930::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void Uwdg_towerBuild_C__pf3053510930::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{86, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{84, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/blueprints/Tower/AoEParticle.AoEParticle 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/resouerce/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPerson_Jump.ThirdPerson_Jump 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPersonJump_Loop.ThirdPersonJump_Loop 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPersonJump_Start.ThirdPersonJump_Start 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/resouerce/Mannequin/Animations/ThirdPerson_IdleRun_2D.ThirdPerson_IdleRun_2D 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/resouerce/Mannequin/Character/Mesh/UE4_Mannequin_Skeleton.UE4_Mannequin_Skeleton 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PawnMovementComponent 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/resouerce/excel/EST_stage_1.EST_stage_1 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/widget_manager.widget_manager_C 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  widget_manager_C /Game/blueprints/others/Observer/widget_manager.Default__widget_manager_C 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTable 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpotLightComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/resouerce/temp/FirstPerson/Character/Mesh/SK_Mannequin_Arms.SK_Mannequin_Arms 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/temp/StarterContent/Materials/M_Basic_Wall.M_Basic_Wall 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EditorLandscapeResources/AlphaBrushMaterial.AlphaBrushMaterial 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/resouerce/temp/StarterContent/Shapes/Shape_Cube.Shape_Cube 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/material/bullet_mark.bullet_mark 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/resouerce/temp/FirstPerson/FPWeapon/Mesh/SK_FPGun.SK_FPGun 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/temp/FirstPerson/FPWeapon/Materials/M_FPGun.M_FPGun 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/resouerce/image/FirstPersonCrosshair.FirstPersonCrosshair 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/LowEntryExtendedStandardLibrary.DelegateULowEntryExtendedStandardLibraryCompareObjects__DelegateSignature 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/material/test.test 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/material/test2.test2 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.MultiLineEditableTextBox 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpEnd.FirstPerson_JumpEnd 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpLoop.FirstPerson_JumpLoop 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpStart.FirstPerson_JumpStart 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_Idle.FirstPerson_Idle 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/resouerce/temp/FirstPerson/Character/Mesh/SK_Mannequin_Arms_Skeleton1.SK_Mannequin_Arms_Skeleton1 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_Run.FirstPerson_Run 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/Main_GameInstance.Main_GameInstance_C 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/Tower/TowerBase.TowerBase_C 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/electricity_manager.electricity_manager_C 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/player/player_character.player_character_C 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/Tower/BasicTower.BasicTower_C 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/Tower/SniperTower.SniperTower_C 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/Tower/AoETower.AoETower_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__Uwdg_towerBuild_C__pf3053510930
{
	FRegisterHelper__Uwdg_towerBuild_C__pf3053510930()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/blueprints/UI/wdg_towerBuild"), &Uwdg_towerBuild_C__pf3053510930::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Uwdg_towerBuild_C__pf3053510930 Instance;
};
FRegisterHelper__Uwdg_towerBuild_C__pf3053510930 FRegisterHelper__Uwdg_towerBuild_C__pf3053510930::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
