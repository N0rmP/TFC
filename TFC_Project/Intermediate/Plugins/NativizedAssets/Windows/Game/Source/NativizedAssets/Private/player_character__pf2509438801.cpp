#include "NativizedAssets.h"
#include "player_character__pf2509438801.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
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
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
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
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
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
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
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
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "FirstPerson_AnimBP__pf4100344271.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "rifle__pf3559600238.h"
#include "terminal__pf3559600238.h"
#include "Runtime/Engine/Classes/Components/SpotLightComponent.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LocalLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Robot1__pf1579232813.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "abst_tool__pf3559600238.h"
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
#include "damagable__pf937085289.h"
#include "Effect__pf3439682450.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "VulnerableEffect__pf117736272.h"
#include "SniperModule4_Vul__pf117736272.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "Main_GameInstance__pf3789721252.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
Aplayer_character_C__pf2509438801::Aplayer_character_C__pf2509438801(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		static TWeakFieldPtr<FProperty> __Local__4{};
		const FProperty* __Local__3 = __Local__4.Get();
		if (nullptr == __Local__3)
		{
			__Local__3 = (UPrimitiveComponent::StaticClass())->FindPropertyByName(FName(TEXT("bGenerateOverlapEvents")));
			check(__Local__3);
			__Local__4 = __Local__3;
		}
		(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((__Local__0), true, 0));
		__Local__0->BodyInstance.bNotifyRigidBodyCollision = true;
		auto& __Local__5 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
		auto& __Local__6 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__5), FCollisionResponse::__PPO__ResponseArray() )));
		__Local__6 = TArray<FResponseChannel> ();
		__Local__6.AddUninitialized(1);
		FResponseChannel::StaticStruct()->InitializeStruct(__Local__6.GetData(), 1);
		auto& __Local__7 = __Local__6[0];
		__Local__7.Channel = FName(TEXT("Camera"));
		__Local__7.Response = ECollisionResponse::ECR_Ignore;
		__Local__0->BodyInstance.LoadProfileData(false);
		__Local__0->ComponentTags = TArray<FName> ();
		__Local__0->ComponentTags.Reserve(1);
		__Local__0->ComponentTags.Add(FName(TEXT("player")));
		static TWeakFieldPtr<FProperty> __Local__9{};
		const FProperty* __Local__8 = __Local__9.Get();
		if (nullptr == __Local__8)
		{
			__Local__8 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__8);
			__Local__9 = __Local__8;
		}
		(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		static TWeakFieldPtr<FProperty> __Local__11{};
		const FProperty* __Local__10 = __Local__11.Get();
		if (nullptr == __Local__10)
		{
			__Local__10 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__10);
			__Local__11 = __Local__10;
		}
		(((FBoolProperty*)__Local__10)->SetPropertyValue_InContainer((__Local__1), false, 0));
		static TWeakFieldPtr<FProperty> __Local__13{};
		const FProperty* __Local__12 = __Local__13.Get();
		if (nullptr == __Local__12)
		{
			__Local__12 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__12);
			__Local__13 = __Local__12;
		}
		(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		__Local__2->BodyInstance.LoadProfileData(false);
		auto& __Local__14 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__14 = __Local__0;
		static TWeakFieldPtr<FProperty> __Local__16{};
		const FProperty* __Local__15 = __Local__16.Get();
		if (nullptr == __Local__15)
		{
			__Local__15 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__15);
			__Local__16 = __Local__15;
		}
		(((FBoolProperty*)__Local__15)->SetPropertyValue_InContainer((__Local__2), false, 0));
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__camera_arm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("camera_arm"));
	bpv__FPS_ram_mesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FPS_ram_mesh"));
	bpv__rifle__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("rifle"));
	bpv__terminal__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("terminal"));
	bpv__normal_camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("normal_camera"));
	bpv__head_light__pf = CreateDefaultSubobject<USpotLightComponent>(TEXT("head_light"));
	bpv__camera_arm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__camera_arm__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__camera_arm__pf->TargetArmLength = 0.000000f;
	bpv__camera_arm__pf->SocketOffset = FVector(0.000000, 0.000000, 100.000000);
	static TWeakFieldPtr<FProperty> __Local__18{};
	const FProperty* __Local__17 = __Local__18.Get();
	if (nullptr == __Local__17)
	{
		__Local__17 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__17);
		__Local__18 = __Local__17;
	}
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__camera_arm__pf), false, 0));
	bpv__FPS_ram_mesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FPS_ram_mesh__pf->AttachToComponent(bpv__camera_arm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__FPS_ram_mesh__pf->AnimClass = UFirstPerson_AnimBP_C__pf4100344271::StaticClass();
	bpv__FPS_ram_mesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__FPS_ram_mesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(Aplayer_character_C__pf2509438801::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__FPS_ram_mesh__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__FPS_ram_mesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__FPS_ram_mesh__pf->OverrideMaterials.Reserve(1);
	bpv__FPS_ram_mesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Aplayer_character_C__pf2509438801::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	static TWeakFieldPtr<FProperty> __Local__20{};
	const FProperty* __Local__19 = __Local__20.Get();
	if (nullptr == __Local__19)
	{
		__Local__19 = (UPrimitiveComponent::StaticClass())->FindPropertyByName(FName(TEXT("bGenerateOverlapEvents")));
		check(__Local__19);
		__Local__20 = __Local__19;
	}
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__FPS_ram_mesh__pf), true, 0));
	auto& __Local__21 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__FPS_ram_mesh__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__21 = ECollisionChannel::ECC_Pawn;
	auto& __Local__22 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__FPS_ram_mesh__pf->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__22 = ECollisionEnabled::Type::QueryAndPhysics;
	bpv__FPS_ram_mesh__pf->BodyInstance.bNotifyRigidBodyCollision = true;
	auto& __Local__23 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__FPS_ram_mesh__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__23), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__24 = TArray<FResponseChannel> ();
	bpv__FPS_ram_mesh__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__25 = (*(AccessPrivateProperty<FVector >((bpv__FPS_ram_mesh__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__25 = FVector(0.000000, 0.000000, -155.000000);
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__FPS_ram_mesh__pf), false, 0));
	bpv__rifle__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__rifle__pf->AttachToComponent(bpv__FPS_ram_mesh__pf, FAttachmentTransformRules::KeepRelativeTransform , TEXT("temp_hand_socket"));
	auto& __Local__26 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__rifle__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__26 = Arifle_C__pf3559600238::StaticClass();
	auto& __Local__27 = (*(AccessPrivateProperty<AActor* >((bpv__rifle__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__27 = CastChecked<AActor>(CastChecked<UDynamicClass>(Aplayer_character_C__pf2509438801::StaticClass())->MiscConvertedSubobjects[0]);
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__rifle__pf), false, 0));
	bpv__terminal__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__terminal__pf->AttachToComponent(bpv__FPS_ram_mesh__pf, FAttachmentTransformRules::KeepRelativeTransform , TEXT("temp_hand_socket"));
	auto& __Local__28 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__terminal__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__28 = Aterminal_C__pf3559600238::StaticClass();
	auto& __Local__29 = (*(AccessPrivateProperty<AActor* >((bpv__terminal__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__29 = CastChecked<AActor>(CastChecked<UDynamicClass>(Aplayer_character_C__pf2509438801::StaticClass())->MiscConvertedSubobjects[1]);
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__terminal__pf), false, 0));
	bpv__normal_camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__normal_camera__pf->AttachToComponent(bpv__camera_arm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__normal_camera__pf), false, 0));
	bpv__head_light__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__head_light__pf->AttachToComponent(bpv__camera_arm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__head_light__pf->OuterConeAngle = 30.000000f;
	bpv__head_light__pf->AttenuationRadius = 1500.000000f;
	bpv__head_light__pf->Intensity = 10000.000000f;
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__head_light__pf), false, 0));
	bpv__is_dash__pf = false;
	bpv__is_focussing__pf = false;
	bpv__is_reloading__pf = false;
	bpv__walk_speed__pf = 600.000000f;
	bpv__run_speed__pf = 1200.000000f;
	bpv__cur_tool__pf = nullptr;
	bpv__tool_list__pf = TArray<UChildActorComponent*> ();
	bpv__cur_tool_index__pf = 0;
	bpv__robot__pf = nullptr;
	bpv__hp_gen_amount__pf = 1;
	bpv__hp_gen_cur_timer__pf = 0.000000f;
	bpv__hp_gen_max_timer__pf = 5.000000f;
	bpv__plr_max_hp__pf = 100;
	auto& __Local__30 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__30 = __Local__2;
	auto& __Local__31 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__31 = __Local__1;
	auto& __Local__32 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__32 = __Local__0;
	bUseControllerRotationPitch = true;
	auto& __Local__33 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__33 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	Tags = TArray<FName> ();
	Tags.Reserve(1);
	Tags.Add(FName(TEXT("player")));
}
PRAGMA_ENABLE_OPTIMIZATION
void Aplayer_character_C__pf2509438801::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__camera_arm__pf)
	{
		bpv__camera_arm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FPS_ram_mesh__pf)
	{
		bpv__FPS_ram_mesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__rifle__pf)
	{
		bpv__rifle__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__terminal__pf)
	{
		bpv__terminal__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__normal_camera__pf)
	{
		bpv__normal_camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__head_light__pf)
	{
		bpv__head_light__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void Aplayer_character_C__pf2509438801::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(UFirstPerson_AnimBP_C__pf4100344271::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Arifle_C__pf3559600238::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Aterminal_C__pf3559600238::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ARobot1_C__pf1579232813::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Aabst_tool_C__pf3559600238::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Acreature_C__pf937085289::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMain_GameInstance_C__pf3789721252::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	Arifle_C__pf3559600238::StaticClass()->GetDefaultObject();
	auto __Local__34 = NewObject<Arifle_C__pf3559600238>(InDynamicClass, Arifle_C__pf3559600238::StaticClass(), TEXT("rifle_GEN_VARIABLE_rifle_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__34);
	auto& __Local__35 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__34), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__35 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	Aterminal_C__pf3559600238::StaticClass()->GetDefaultObject();
	auto __Local__36 = NewObject<Aterminal_C__pf3559600238>(InDynamicClass, Aterminal_C__pf3559600238::StaticClass(), TEXT("terminal_GEN_VARIABLE_terminal_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__36);
	auto& __Local__37 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__36), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__37 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto __Local__38 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__38);
	auto __Local__39 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__39);
	auto __Local__40 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__40);
	static TWeakFieldPtr<FProperty> __Local__42{};
	const FProperty* __Local__41 = __Local__42.Get();
	if (nullptr == __Local__41)
	{
		__Local__41 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__41);
		__Local__42 = __Local__41;
	}
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__38), false, 0));
	__Local__39->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__39->InputAxisDelegateBindings.AddUninitialized(7);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__39->InputAxisDelegateBindings.GetData(), 7);
	auto& __Local__43 = __Local__39->InputAxisDelegateBindings[0];
	__Local__43.InputAxisName = FName(TEXT("axis_input_mouse_wheel"));
	__Local__43.FunctionNameToBind = FName(TEXT("InpAxisEvt_axis_input_mouse_wheel_K2Node_InputAxisEvent_0"));
	auto& __Local__44 = __Local__39->InputAxisDelegateBindings[1];
	__Local__44.InputAxisName = FName(TEXT("axis_input_mouse_y"));
	__Local__44.FunctionNameToBind = FName(TEXT("InpAxisEvt_axis_input_mouse_y_K2Node_InputAxisEvent_11"));
	auto& __Local__45 = __Local__39->InputAxisDelegateBindings[2];
	__Local__45.InputAxisName = FName(TEXT("axis_input_mouse_x"));
	__Local__45.FunctionNameToBind = FName(TEXT("InpAxisEvt_axis_input_mouse_x_K2Node_InputAxisEvent_10"));
	auto& __Local__46 = __Local__39->InputAxisDelegateBindings[3];
	__Local__46.InputAxisName = FName(TEXT("axis_input_jump"));
	__Local__46.FunctionNameToBind = FName(TEXT("InpAxisEvt_axis_input_jump_K2Node_InputAxisEvent_9"));
	auto& __Local__47 = __Local__39->InputAxisDelegateBindings[4];
	__Local__47.InputAxisName = FName(TEXT("axis_input_left_right"));
	__Local__47.FunctionNameToBind = FName(TEXT("InpAxisEvt_axis_input_left_right_K2Node_InputAxisEvent_8"));
	auto& __Local__48 = __Local__39->InputAxisDelegateBindings[5];
	__Local__48.InputAxisName = FName(TEXT("axis_input_dash"));
	__Local__48.FunctionNameToBind = FName(TEXT("InpAxisEvt_axis_input_dash_K2Node_InputAxisEvent_6"));
	auto& __Local__49 = __Local__39->InputAxisDelegateBindings[6];
	__Local__49.InputAxisName = FName(TEXT("axis_input_forward_backward"));
	__Local__49.FunctionNameToBind = FName(TEXT("InpAxisEvt_axis_input_forward_backward_K2Node_InputAxisEvent_4"));
	__Local__40->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__40->InputActionDelegateBindings.AddUninitialized(8);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__40->InputActionDelegateBindings.GetData(), 8);
	auto& __Local__50 = __Local__40->InputActionDelegateBindings[0];
	__Local__50.InputActionName = FName(TEXT("action_input_left_click"));
	__Local__50.InputKeyEvent = EInputEvent::IE_Released;
	__Local__50.FunctionNameToBind = FName(TEXT("InpActEvt_action_input_left_click_K2Node_InputActionEvent_7"));
	auto& __Local__51 = __Local__40->InputActionDelegateBindings[1];
	__Local__51.InputActionName = FName(TEXT("action_input_left_click"));
	__Local__51.FunctionNameToBind = FName(TEXT("InpActEvt_action_input_left_click_K2Node_InputActionEvent_6"));
	auto& __Local__52 = __Local__40->InputActionDelegateBindings[2];
	__Local__52.InputActionName = FName(TEXT("action_input_robot"));
	__Local__52.FunctionNameToBind = FName(TEXT("InpActEvt_action_input_robot_K2Node_InputActionEvent_0"));
	auto& __Local__53 = __Local__40->InputActionDelegateBindings[3];
	__Local__53.InputActionName = FName(TEXT("action_input_2"));
	__Local__53.FunctionNameToBind = FName(TEXT("InpActEvt_action_input_2_K2Node_InputActionEvent_1"));
	auto& __Local__54 = __Local__40->InputActionDelegateBindings[4];
	__Local__54.InputActionName = FName(TEXT("action_input_1"));
	__Local__54.FunctionNameToBind = FName(TEXT("InpActEvt_action_input_1_K2Node_InputActionEvent_2"));
	auto& __Local__55 = __Local__40->InputActionDelegateBindings[5];
	__Local__55.InputActionName = FName(TEXT("action_input_R"));
	__Local__55.FunctionNameToBind = FName(TEXT("InpActEvt_action_input_R_K2Node_InputActionEvent_3"));
	auto& __Local__56 = __Local__40->InputActionDelegateBindings[6];
	__Local__56.InputActionName = FName(TEXT("action_input_right_click"));
	__Local__56.FunctionNameToBind = FName(TEXT("InpActEvt_action_input_right_click_K2Node_InputActionEvent_4"));
	auto& __Local__57 = __Local__40->InputActionDelegateBindings[7];
	__Local__57.InputActionName = FName(TEXT("action_input_right_click"));
	__Local__57.InputKeyEvent = EInputEvent::IE_Released;
	__Local__57.FunctionNameToBind = FName(TEXT("InpActEvt_action_input_right_click_K2Node_InputActionEvent_5"));
}
PRAGMA_ENABLE_OPTIMIZATION
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_0(int32 bpp__EntryPoint__pf)
{
	ARobot1_C__pf1579232813* bpfv__CallFunc_GetActorOfClass_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 51);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetActorOfClass_ReturnValue__pf = CastChecked<ARobot1_C__pf1579232813>(UGameplayStatics::GetActorOfClass(this, ARobot1_C__pf1579232813::StaticClass()), ECastCheckedType::NullAllowed);
	bpv__robot__pf = bpfv__CallFunc_GetActorOfClass_ReturnValue__pf;
	if(::IsValid(bpv__damagable__pf))
	{
		bpv__damagable__pf->bpf__set_max_hp__pf(bpv__plr_max_hp__pf);
	}
	if(::IsValid(bpv__damagable__pf))
	{
		bpv__damagable__pf->bpf__get_max_hp__pf(/*out*/ b1l__CallFunc_get_max_hp_Max_Hp_Res__pf);
	}
	if(::IsValid(bpv__damagable__pf))
	{
		bpv__damagable__pf->bpf__set_cur_hp__pf(b1l__CallFunc_get_max_hp_Max_Hp_Res__pf);
	}
	return; // KCST_GotoReturn
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_1(int32 bpp__EntryPoint__pf)
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
				bool  __Local__58 = false;
				if (!((::IsValid(bpv__robot__pf)) ? (bpv__robot__pf->bpv__mode__pf) : (__Local__58)))
				{
					__CurrentState = 21;
					break;
				}
			}
		case 20:
			{
				if(::IsValid(bpv__robot__pf))
				{
					bpv__robot__pf->bpv__mode__pf = false;
				}
				__CurrentState = -1;
				break;
			}
		case 21:
			{
				if(::IsValid(bpv__robot__pf))
				{
					bpv__robot__pf->bpv__mode__pf = true;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 57);
	// optimized KCST_UnconditionalGoto
	bpf__hp_generate__pf(b1l__K2Node_Event_DeltaSeconds__pf);
	return; // KCST_GotoReturn
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 9:
			{
				__CurrentState = 10;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpv__is_reloading__pf, bpv__is_focussing__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				if(::IsValid(bpv__cur_tool__pf))
				{
					bpv__cur_tool__pf->bpf__R_button__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 12:
			{
				__CurrentState = 13;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpv__is_reloading__pf, bpv__is_focussing__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = 14;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				bpf__swap_tool__pf(0);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 15:
			{
				__CurrentState = 16;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpv__is_reloading__pf, bpv__is_focussing__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				bpf__swap_tool__pf(1);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_6(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_BooleanOR_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 40:
			{
				__CurrentState = 41;
				break;
			}
		case 41:
			{
				b1l_____struct_Variable_1__pf = b1l__K2Node_InputActionEvent_Key_6__pf;
			}
		case 42:
			{
				bpfv__CallFunc_BooleanOR_ReturnValue_1__pf = UKismetMathLibrary::BooleanOR(bpv__is_reloading__pf, bpv__is_focussing__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue_1__pf)
				{
					__CurrentState = 43;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 43:
			{
				if(::IsValid(bpv__cur_tool__pf))
				{
					bpv__cur_tool__pf->bpf__left_click_on__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_7(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_BooleanOR_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 44:
			{
				__CurrentState = 45;
				break;
			}
		case 45:
			{
				b1l_____struct_Variable_1__pf = b1l__K2Node_InputActionEvent_Key_7__pf;
			}
		case 46:
			{
				bpfv__CallFunc_BooleanOR_ReturnValue_1__pf = UKismetMathLibrary::BooleanOR(bpv__is_reloading__pf, bpv__is_focussing__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue_1__pf)
				{
					__CurrentState = 47;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 47:
			{
				if(::IsValid(bpv__cur_tool__pf))
				{
					bpv__cur_tool__pf->bpf__left_click_off__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_8(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_BooleanOR_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 5:
			{
				__CurrentState = 6;
				break;
			}
		case 6:
			{
				b1l_____struct_Variable__pf = b1l__K2Node_InputActionEvent_Key_4__pf;
			}
		case 7:
			{
				bpfv__CallFunc_BooleanOR_ReturnValue_1__pf = UKismetMathLibrary::BooleanOR(bpv__is_reloading__pf, bpv__is_focussing__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue_1__pf)
				{
					__CurrentState = 8;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				if(::IsValid(bpv__cur_tool__pf))
				{
					bpv__cur_tool__pf->bpf__right_click_on__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_9(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_BooleanOR_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				b1l_____struct_Variable__pf = b1l__K2Node_InputActionEvent_Key_5__pf;
			}
		case 3:
			{
				bpfv__CallFunc_BooleanOR_ReturnValue_1__pf = UKismetMathLibrary::BooleanOR(bpv__is_reloading__pf, bpv__is_focussing__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue_1__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__cur_tool__pf))
				{
					bpv__cur_tool__pf->bpf__right_click_off__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_10(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 48:
			{
				__CurrentState = 49;
				break;
			}
		case 49:
			{
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b1l__K2Node_InputAxisEvent_AxisValue__pf);
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__CallFunc_FTrunc_ReturnValue__pf, bpv__cur_tool_index__pf);
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Add_IntInt_ReturnValue__pf, 0, 1);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__cur_tool_index__pf, bpfv__CallFunc_Clamp_ReturnValue__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpv__is_reloading__pf, bpv__is_focussing__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanOR_ReturnValue__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 50;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 50:
			{
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b1l__K2Node_InputAxisEvent_AxisValue__pf);
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__CallFunc_FTrunc_ReturnValue__pf, bpv__cur_tool_index__pf);
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Add_IntInt_ReturnValue__pf, 0, 1);
				bpf__swap_tool__pf(bpfv__CallFunc_Clamp_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_11(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 23:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__walk_speed__pf;
				}
				__CurrentState = -1;
				break;
			}
		case 27:
			{
				__CurrentState = 28;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b1l__K2Node_InputAxisEvent_AxisValue_6__pf, b1l__K2Node_InputAxisEvent_AxisValue_5__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 29:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__run_speed__pf;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_12(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = AActor::GetActorForwardVector();
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakVector_X__pf, /*out*/ b1l__CallFunc_BreakVector_Y__pf, /*out*/ b1l__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(b1l__CallFunc_BreakVector_X__pf, b1l__CallFunc_BreakVector_Y__pf, 0.000000);
	bpfv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_MakeVector_ReturnValue__pf, 0.000100);
	AddMovementInput(bpfv__CallFunc_Normal_ReturnValue__pf, b1l__K2Node_InputAxisEvent_AxisValue_6__pf, false);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b1l__K2Node_InputAxisEvent_AxisValue_6__pf, b1l__K2Node_InputAxisEvent_AxisValue_5__pf);
	bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.000000);
	bpf__set_is_dash__pf(bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf);
	return; // KCST_GotoReturn
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_13(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 34:
			{
				__CurrentState = 35;
				break;
			}
		case 35:
			{
				if (!bpv__is_focussing__pf)
				{
					__CurrentState = 36;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 36:
			{
				AddControllerYawInput(b1l__K2Node_InputAxisEvent_AxisValue_2__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_14(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 37:
			{
				__CurrentState = 38;
				break;
			}
		case 38:
			{
				if (!bpv__is_focussing__pf)
				{
					__CurrentState = 39;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 39:
			{
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(-2, b1l__K2Node_InputAxisEvent_AxisValue_1__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, 0.000000);
				if(::IsValid(bpv__camera_arm__pf))
				{
					bpv__camera_arm__pf->USceneComponent::K2_AddLocalRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ b1l__CallFunc_K2_AddLocalRotation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_15(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 32);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Greater_FloatFloat(b1l__K2Node_InputAxisEvent_AxisValue_3__pf, 0.000000);
	if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	Jump();
	return; // KCST_GotoReturn
}
void Aplayer_character_C__pf2509438801::bpf__ExecuteUbergraph_player_character__pf_16(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetActorRightVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 30);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetActorRightVector_ReturnValue__pf = AActor::GetActorRightVector();
	AddMovementInput(bpfv__CallFunc_GetActorRightVector_ReturnValue__pf, b1l__K2Node_InputAxisEvent_AxisValue_4__pf, false);
	return; // KCST_GotoReturn
}
void Aplayer_character_C__pf2509438801::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b1l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_player_character__pf_2(57);
}
void Aplayer_character_C__pf2509438801::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_player_character__pf_0(51);
}
void Aplayer_character_C__pf2509438801::bpf__InpAxisEvt_axis_input_mouse_wheel_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_player_character__pf_10(48);
}
void Aplayer_character_C__pf2509438801::bpf__InpAxisEvt_axis_input_mouse_y_K2Node_InputAxisEvent_11__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_player_character__pf_14(37);
}
void Aplayer_character_C__pf2509438801::bpf__InpAxisEvt_axis_input_mouse_x_K2Node_InputAxisEvent_10__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_player_character__pf_13(34);
}
void Aplayer_character_C__pf2509438801::bpf__InpAxisEvt_axis_input_jump_K2Node_InputAxisEvent_9__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_player_character__pf_15(32);
}
void Aplayer_character_C__pf2509438801::bpf__InpAxisEvt_axis_input_left_right_K2Node_InputAxisEvent_8__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_4__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_player_character__pf_16(30);
}
void Aplayer_character_C__pf2509438801::bpf__InpAxisEvt_axis_input_dash_K2Node_InputAxisEvent_6__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_5__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_player_character__pf_11(27);
}
void Aplayer_character_C__pf2509438801::bpf__InpAxisEvt_axis_input_forward_backward_K2Node_InputAxisEvent_4__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_6__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_player_character__pf_12(24);
}
void Aplayer_character_C__pf2509438801::bpf__InpActEvt_action_input_robot_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_player_character__pf_1(18);
}
void Aplayer_character_C__pf2509438801::bpf__InpActEvt_action_input_2_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_player_character__pf_5(15);
}
void Aplayer_character_C__pf2509438801::bpf__InpActEvt_action_input_1_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_player_character__pf_4(12);
}
void Aplayer_character_C__pf2509438801::bpf__InpActEvt_action_input_R_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_player_character__pf_3(9);
}
void Aplayer_character_C__pf2509438801::bpf__InpActEvt_action_input_right_click_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_player_character__pf_8(5);
}
void Aplayer_character_C__pf2509438801::bpf__InpActEvt_action_input_right_click_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_player_character__pf_9(1);
}
void Aplayer_character_C__pf2509438801::bpf__InpActEvt_action_input_left_click_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_player_character__pf_6(40);
}
void Aplayer_character_C__pf2509438801::bpf__InpActEvt_action_input_left_click_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_player_character__pf_7(44);
}
void Aplayer_character_C__pf2509438801::bpf__UserConstructionScript__pf()
{
	int32 bpfv_____int_Array_Index_Variable__pf{};
	int32 bpfv_____int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	UChildActorComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	Aabst_tool_C__pf3559600238* bpfv__K2Node_DynamicCast_AsAbst_Tool__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_1__pf{};
	Aabst_tool_C__pf3559600238* bpfv__K2Node_DynamicCast_AsAbst_Tool_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				Super::bpf__UserConstructionScript__pf();
			}
		case 2:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_1__pf = FCustomThunkTemplates::Array_Add(bpv__tool_list__pf, bpv__rifle__pf);
			}
		case 3:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__tool_list__pf, bpv__terminal__pf);
			}
		case 4:
			{
				bpfv_____int_Loop_Counter_Variable__pf = 0;
			}
		case 5:
			{
				bpfv_____int_Array_Index_Variable__pf = 0;
			}
		case 6:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__tool_list__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv_____int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 7:
			{
				bpfv_____int_Array_Index_Variable__pf = bpfv_____int_Loop_Counter_Variable__pf;
			}
		case 8:
			{
				__StateStack.Push(16);
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpv__tool_list__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpv__tool_list__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				AActor*  __Local__59 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsAbst_Tool__pf = Cast<Aabst_tool_C__pf3559600238>(((::IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpfv__CallFunc_Array_Get_Item__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__59)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsAbst_Tool__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 11:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsAbst_Tool__pf))
				{
					bpfv__K2Node_DynamicCast_AsAbst_Tool__pf->bpv__tool_owner__pf = this;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				if(::IsValid(bpv__rifle__pf))
				{
					bpv__rifle__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 13:
			{
				AActor*  __Local__60 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsAbst_Tool_1__pf = Cast<Aabst_tool_C__pf3559600238>(((::IsValid(bpv__rifle__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__rifle__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__60)));
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsAbst_Tool_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				bpv__cur_tool__pf = bpfv__K2Node_DynamicCast_AsAbst_Tool_1__pf;
			}
		case 15:
			{
				bpv__cur_tool_index__pf = 0;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Loop_Counter_Variable__pf, 1);
				bpfv_____int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 6;
				break;
			}
		case 17:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Hello")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__get_is_dash__pf(/*out*/ bool& bpp__is_dash_res__pf)
{
	bpp__is_dash_res__pf = bpv__is_dash__pf;
}
void Aplayer_character_C__pf2509438801::bpf__set_is_dash__pf(bool bpp__val__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__is_dash__pf = bpp__val__pf;
			}
		case 2:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__get_is_focussing__pf(/*out*/ bool& bpp__is_focussing_ret__pf)
{
	bpp__is_focussing_ret__pf = bpv__is_focussing__pf;
}
void Aplayer_character_C__pf2509438801::bpf__set_is_focussing__pf(bool bpp__val__pf)
{
	bpv__is_focussing__pf = bpp__val__pf;
}
void Aplayer_character_C__pf2509438801::bpf__get_is_reloading__pf(/*out*/ bool& bpp__is_reloading_return__pf)
{
	bpp__is_reloading_return__pf = bpv__is_reloading__pf;
}
void Aplayer_character_C__pf2509438801::bpf__set_is_reloading__pf(bool bpp__val__pf)
{
	bpv__is_reloading__pf = bpp__val__pf;
}
void Aplayer_character_C__pf2509438801::bpf__get_linetracing__pf(/*out*/ FHitResult& bpp__linetraced_result__pf)
{
	TArray<AActor*> bpfv_____object_Variable__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_LineTraceSingle_OutHit__pf{};
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue__pf{};
	if(::IsValid(bpv__normal_camera__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__normal_camera__pf->USceneComponent::K2_GetComponentLocation();
	}
	if(::IsValid(bpv__normal_camera__pf))
	{
		bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__normal_camera__pf->USceneComponent::K2_GetComponentRotation();
	}
	bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, 10000.000000);
	bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
	bpfv__CallFunc_LineTraceSingle_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, ETraceTypeQuery::TraceTypeQuery1, false, bpfv_____object_Variable__pf, EDrawDebugTrace::None, /*out*/ bpfv__CallFunc_LineTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
	bpp__linetraced_result__pf = bpfv__CallFunc_LineTraceSingle_OutHit__pf;
}
void Aplayer_character_C__pf2509438801::bpf__set_zoom__pf(float bpp__zoom_FOV_angle__pf)
{
	if(::IsValid(bpv__normal_camera__pf))
	{
		bpv__normal_camera__pf->SetFieldOfView(bpp__zoom_FOV_angle__pf);
	}
}
void Aplayer_character_C__pf2509438801::bpf__swap_tool__pf(int32 bpp__tool_index__pf)
{
	UChildActorComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	UChildActorComponent* bpfv__CallFunc_Array_Get_Item_1__pf{};
	Aabst_tool_C__pf3559600238* bpfv__K2Node_DynamicCast_AsAbst_Tool__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				FCustomThunkTemplates::Array_Get(bpv__tool_list__pf, bpv__cur_tool_index__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 2:
			{
				FCustomThunkTemplates::Array_Get(bpv__tool_list__pf, bpp__tool_index__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				AActor*  __Local__61 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsAbst_Tool__pf = Cast<Aabst_tool_C__pf3559600238>(((::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpfv__CallFunc_Array_Get_Item_1__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__61)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsAbst_Tool__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpv__cur_tool__pf = bpfv__K2Node_DynamicCast_AsAbst_Tool__pf;
			}
		case 4:
			{
				bpv__cur_tool_index__pf = bpp__tool_index__pf;
			}
		case 5:
			{
				FCustomThunkTemplates::Array_Get(bpv__tool_list__pf, bpp__tool_index__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->USceneComponent::SetVisibility(true, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__hp_generate__pf(float bpp__val__pf)
{
	int32 bpfv__CallFunc_get_cur_hp_cur_hp_res__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	int32 bpfv__CallFunc_get_max_hp_Max_Hp_Res__pf{};
	int32 bpfv__CallFunc_get_cur_hp_cur_hp_res_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__hp_gen_cur_timer__pf, 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__damagable__pf))
				{
					bpv__damagable__pf->bpf__get_cur_hp__pf(/*out*/ bpfv__CallFunc_get_cur_hp_cur_hp_res_1__pf);
				}
			}
		case 3:
			{
				if(::IsValid(bpv__damagable__pf))
				{
					bpv__damagable__pf->bpf__get_max_hp__pf(/*out*/ bpfv__CallFunc_get_max_hp_Max_Hp_Res__pf);
				}
			}
		case 4:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_get_cur_hp_cur_hp_res_1__pf, bpfv__CallFunc_get_max_hp_Max_Hp_Res__pf);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 6;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__hp_gen_cur_timer__pf, bpp__val__pf);
				bpv__hp_gen_cur_timer__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				if(::IsValid(bpv__damagable__pf))
				{
					bpv__damagable__pf->bpf__add_cur_hp__pf(bpv__hp_gen_amount__pf);
				}
			}
		case 7:
			{
				bpv__hp_gen_cur_timer__pf = 1.000000;
			}
		case 8:
			{
				if(::IsValid(bpv__damagable__pf))
				{
					bpv__damagable__pf->bpf__get_cur_hp__pf(/*out*/ bpfv__CallFunc_get_cur_hp_cur_hp_res__pf);
				}
			}
		case 9:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_get_cur_hp_cur_hp_res__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("after hp generate : ")), bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aplayer_character_C__pf2509438801::bpf__take_damage__pf(int32 bpp__val__pf, AActor* bpp__attacker__pf, FName bpp__hit_bone_name__pf)
{
	Super::bpf__take_damage__pf(bpp__val__pf, bpp__attacker__pf, bpp__hit_bone_name__pf);
}
void Aplayer_character_C__pf2509438801::bpf__die__pf()
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMain_GameInstance_C__pf3789721252* bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				Super::bpf__die__pf();
			}
		case 2:
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
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf))
				{
					bpfv__K2Node_DynamicCast_AsMain_Game_Instance__pf->bpf__level_end__pf(false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void Aplayer_character_C__pf2509438801::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/resouerce/temp/FirstPerson/Character/Mesh/SK_Mannequin_Arms.SK_Mannequin_Arms 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/resouerce/temp/StarterContent/Materials/M_Basic_Wall.M_Basic_Wall 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void Aplayer_character_C__pf2509438801::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{108, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/creature.creature_C 
		{27, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpringArmComponent 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{31, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ChildActorComponent 
		{32, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{33, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpotLightComponent 
		{0, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/InputCore.Key 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Character 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameplayStatics 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameInstance 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIController 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerController 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SaveGame 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/widget_manager.widget_manager_C 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  widget_manager_C /Game/blueprints/others/Observer/widget_manager.Default__widget_manager_C 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DataTable 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DataTable /Game/resouerce/excel/EST_stage_1.EST_stage_1 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ActorComponent 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace1D /Game/resouerce/Mannequin/Animations/ThirdPerson_IdleRun_2D.ThirdPerson_IdleRun_2D 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Engine/EditorLandscapeResources/AlphaBrushMaterial.AlphaBrushMaterial 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPersonJump_Loop.ThirdPersonJump_Loop 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPersonJump_Start.ThirdPersonJump_Start 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPerson_Jump.ThirdPerson_Jump 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/resouerce/temp/FirstPerson/FPWeapon/Mesh/SK_FPGun.SK_FPGun 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/resouerce/temp/FirstPerson/FPWeapon/Materials/M_FPGun.M_FPGun 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SphereComponent 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/LowEntryExtendedStandardLibrary.DelegateULowEntryExtendedStandardLibraryCompareObjects__DelegateSignature 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/blueprints/Tower/AoEParticle.AoEParticle 
		{81, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CapsuleComponent 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/resouerce/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/resouerce/Mannequin/Character/Mesh/UE4_Mannequin_Skeleton.UE4_Mannequin_Skeleton 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Pawn 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PawnMovementComponent 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AnimInstance 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/resouerce/material/test.test 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/resouerce/temp/StarterContent/Shapes/Shape_Cube.Shape_Cube 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/resouerce/material/bullet_mark.bullet_mark 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.MultiLineEditableTextBox 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/resouerce/material/test2.test2 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Overlay 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.VerticalBox 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/resouerce/temp/FirstPerson/Character/Mesh/SK_Mannequin_Arms_Skeleton1.SK_Mannequin_Arms_Skeleton1 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_Run.FirstPerson_Run 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpEnd.FirstPerson_JumpEnd 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpLoop.FirstPerson_JumpLoop 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpStart.FirstPerson_JumpStart 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_Idle.FirstPerson_Idle 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/resouerce/image/FirstPersonCrosshair.FirstPersonCrosshair 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Widget 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_AnimBP.FirstPerson_AnimBP_C 
		{130, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/player/tool/rifle.rifle_C 
		{171, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/player/tool/terminal.terminal_C 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/Robot/Robot1.Robot1_C 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/player/tool/abst_tool.abst_tool_C 
		{109, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/damagable.damagable_C 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/Main_GameInstance.Main_GameInstance_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__Aplayer_character_C__pf2509438801
{
	FRegisterHelper__Aplayer_character_C__pf2509438801()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/blueprints/player/player_character"), &Aplayer_character_C__pf2509438801::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Aplayer_character_C__pf2509438801 Instance;
};
FRegisterHelper__Aplayer_character_C__pf2509438801 FRegisterHelper__Aplayer_character_C__pf2509438801::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
