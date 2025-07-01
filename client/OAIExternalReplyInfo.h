/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIExternalReplyInfo.h
 *
 * This object contains information about a message that is being replied to, which may come from another chat or forum topic.
 */

#ifndef OAIExternalReplyInfo_H
#define OAIExternalReplyInfo_H

#include <QJsonObject>

#include "OAIAnimation.h"
#include "OAIAudio.h"
#include "OAIChat.h"
#include "OAIContact.h"
#include "OAIDice.h"
#include "OAIDocument.h"
#include "OAIGame.h"
#include "OAIGiveaway.h"
#include "OAIGiveawayWinners.h"
#include "OAIInvoice.h"
#include "OAILinkPreviewOptions.h"
#include "OAILocation.h"
#include "OAIMessageOrigin.h"
#include "OAIPaidMediaInfo.h"
#include "OAIPhotoSize.h"
#include "OAIPoll.h"
#include "OAISticker.h"
#include "OAIStory.h"
#include "OAIVenue.h"
#include "OAIVideo.h"
#include "OAIVideoNote.h"
#include "OAIVoice.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIMessageOrigin;
class OAIChat;
class OAILinkPreviewOptions;
class OAIAnimation;
class OAIAudio;
class OAIDocument;
class OAIPaidMediaInfo;
class OAIPhotoSize;
class OAISticker;
class OAIStory;
class OAIVideo;
class OAIVideoNote;
class OAIVoice;
class OAIContact;
class OAIDice;
class OAIGame;
class OAIGiveaway;
class OAIGiveawayWinners;
class OAIInvoice;
class OAILocation;
class OAIPoll;
class OAIVenue;

class OAIExternalReplyInfo : public OAIObject {
public:
    OAIExternalReplyInfo();
    OAIExternalReplyInfo(QString json);
    ~OAIExternalReplyInfo() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIMessageOrigin getOrigin() const;
    void setOrigin(const OAIMessageOrigin &origin);
    bool is_origin_Set() const;
    bool is_origin_Valid() const;

    OAIChat getChat() const;
    void setChat(const OAIChat &chat);
    bool is_chat_Set() const;
    bool is_chat_Valid() const;

    qint32 getMessageId() const;
    void setMessageId(const qint32 &message_id);
    bool is_message_id_Set() const;
    bool is_message_id_Valid() const;

    OAILinkPreviewOptions getLinkPreviewOptions() const;
    void setLinkPreviewOptions(const OAILinkPreviewOptions &link_preview_options);
    bool is_link_preview_options_Set() const;
    bool is_link_preview_options_Valid() const;

    OAIAnimation getAnimation() const;
    void setAnimation(const OAIAnimation &animation);
    bool is_animation_Set() const;
    bool is_animation_Valid() const;

    OAIAudio getAudio() const;
    void setAudio(const OAIAudio &audio);
    bool is_audio_Set() const;
    bool is_audio_Valid() const;

    OAIDocument getDocument() const;
    void setDocument(const OAIDocument &document);
    bool is_document_Set() const;
    bool is_document_Valid() const;

    OAIPaidMediaInfo getPaidMedia() const;
    void setPaidMedia(const OAIPaidMediaInfo &paid_media);
    bool is_paid_media_Set() const;
    bool is_paid_media_Valid() const;

    QList<OAIPhotoSize> getPhoto() const;
    void setPhoto(const QList<OAIPhotoSize> &photo);
    bool is_photo_Set() const;
    bool is_photo_Valid() const;

    OAISticker getSticker() const;
    void setSticker(const OAISticker &sticker);
    bool is_sticker_Set() const;
    bool is_sticker_Valid() const;

    OAIStory getStory() const;
    void setStory(const OAIStory &story);
    bool is_story_Set() const;
    bool is_story_Valid() const;

    OAIVideo getVideo() const;
    void setVideo(const OAIVideo &video);
    bool is_video_Set() const;
    bool is_video_Valid() const;

    OAIVideoNote getVideoNote() const;
    void setVideoNote(const OAIVideoNote &video_note);
    bool is_video_note_Set() const;
    bool is_video_note_Valid() const;

    OAIVoice getVoice() const;
    void setVoice(const OAIVoice &voice);
    bool is_voice_Set() const;
    bool is_voice_Valid() const;

    bool isHasMediaSpoiler() const;
    void setHasMediaSpoiler(const bool &has_media_spoiler);
    bool is_has_media_spoiler_Set() const;
    bool is_has_media_spoiler_Valid() const;

    OAIContact getContact() const;
    void setContact(const OAIContact &contact);
    bool is_contact_Set() const;
    bool is_contact_Valid() const;

    OAIDice getDice() const;
    void setDice(const OAIDice &dice);
    bool is_dice_Set() const;
    bool is_dice_Valid() const;

    OAIGame getGame() const;
    void setGame(const OAIGame &game);
    bool is_game_Set() const;
    bool is_game_Valid() const;

    OAIGiveaway getGiveaway() const;
    void setGiveaway(const OAIGiveaway &giveaway);
    bool is_giveaway_Set() const;
    bool is_giveaway_Valid() const;

    OAIGiveawayWinners getGiveawayWinners() const;
    void setGiveawayWinners(const OAIGiveawayWinners &giveaway_winners);
    bool is_giveaway_winners_Set() const;
    bool is_giveaway_winners_Valid() const;

    OAIInvoice getInvoice() const;
    void setInvoice(const OAIInvoice &invoice);
    bool is_invoice_Set() const;
    bool is_invoice_Valid() const;

    OAILocation getLocation() const;
    void setLocation(const OAILocation &location);
    bool is_location_Set() const;
    bool is_location_Valid() const;

    OAIPoll getPoll() const;
    void setPoll(const OAIPoll &poll);
    bool is_poll_Set() const;
    bool is_poll_Valid() const;

    OAIVenue getVenue() const;
    void setVenue(const OAIVenue &venue);
    bool is_venue_Set() const;
    bool is_venue_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIMessageOrigin m_origin;
    bool m_origin_isSet;
    bool m_origin_isValid;

    OAIChat m_chat;
    bool m_chat_isSet;
    bool m_chat_isValid;

    qint32 m_message_id;
    bool m_message_id_isSet;
    bool m_message_id_isValid;

    OAILinkPreviewOptions m_link_preview_options;
    bool m_link_preview_options_isSet;
    bool m_link_preview_options_isValid;

    OAIAnimation m_animation;
    bool m_animation_isSet;
    bool m_animation_isValid;

    OAIAudio m_audio;
    bool m_audio_isSet;
    bool m_audio_isValid;

    OAIDocument m_document;
    bool m_document_isSet;
    bool m_document_isValid;

    OAIPaidMediaInfo m_paid_media;
    bool m_paid_media_isSet;
    bool m_paid_media_isValid;

    QList<OAIPhotoSize> m_photo;
    bool m_photo_isSet;
    bool m_photo_isValid;

    OAISticker m_sticker;
    bool m_sticker_isSet;
    bool m_sticker_isValid;

    OAIStory m_story;
    bool m_story_isSet;
    bool m_story_isValid;

    OAIVideo m_video;
    bool m_video_isSet;
    bool m_video_isValid;

    OAIVideoNote m_video_note;
    bool m_video_note_isSet;
    bool m_video_note_isValid;

    OAIVoice m_voice;
    bool m_voice_isSet;
    bool m_voice_isValid;

    bool m_has_media_spoiler;
    bool m_has_media_spoiler_isSet;
    bool m_has_media_spoiler_isValid;

    OAIContact m_contact;
    bool m_contact_isSet;
    bool m_contact_isValid;

    OAIDice m_dice;
    bool m_dice_isSet;
    bool m_dice_isValid;

    OAIGame m_game;
    bool m_game_isSet;
    bool m_game_isValid;

    OAIGiveaway m_giveaway;
    bool m_giveaway_isSet;
    bool m_giveaway_isValid;

    OAIGiveawayWinners m_giveaway_winners;
    bool m_giveaway_winners_isSet;
    bool m_giveaway_winners_isValid;

    OAIInvoice m_invoice;
    bool m_invoice_isSet;
    bool m_invoice_isValid;

    OAILocation m_location;
    bool m_location_isSet;
    bool m_location_isValid;

    OAIPoll m_poll;
    bool m_poll_isSet;
    bool m_poll_isValid;

    OAIVenue m_venue;
    bool m_venue_isSet;
    bool m_venue_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIExternalReplyInfo)

#endif // OAIExternalReplyInfo_H
