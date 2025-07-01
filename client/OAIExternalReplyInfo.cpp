/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

#include "OAIExternalReplyInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIExternalReplyInfo::OAIExternalReplyInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIExternalReplyInfo::OAIExternalReplyInfo() {
    this->initializeModel();
}

OAIExternalReplyInfo::~OAIExternalReplyInfo() {}

void OAIExternalReplyInfo::initializeModel() {

    m_origin_isSet = false;
    m_origin_isValid = false;

    m_chat_isSet = false;
    m_chat_isValid = false;

    m_message_id_isSet = false;
    m_message_id_isValid = false;

    m_link_preview_options_isSet = false;
    m_link_preview_options_isValid = false;

    m_animation_isSet = false;
    m_animation_isValid = false;

    m_audio_isSet = false;
    m_audio_isValid = false;

    m_document_isSet = false;
    m_document_isValid = false;

    m_paid_media_isSet = false;
    m_paid_media_isValid = false;

    m_photo_isSet = false;
    m_photo_isValid = false;

    m_sticker_isSet = false;
    m_sticker_isValid = false;

    m_story_isSet = false;
    m_story_isValid = false;

    m_video_isSet = false;
    m_video_isValid = false;

    m_video_note_isSet = false;
    m_video_note_isValid = false;

    m_voice_isSet = false;
    m_voice_isValid = false;

    m_has_media_spoiler_isSet = false;
    m_has_media_spoiler_isValid = false;

    m_contact_isSet = false;
    m_contact_isValid = false;

    m_dice_isSet = false;
    m_dice_isValid = false;

    m_game_isSet = false;
    m_game_isValid = false;

    m_giveaway_isSet = false;
    m_giveaway_isValid = false;

    m_giveaway_winners_isSet = false;
    m_giveaway_winners_isValid = false;

    m_invoice_isSet = false;
    m_invoice_isValid = false;

    m_location_isSet = false;
    m_location_isValid = false;

    m_poll_isSet = false;
    m_poll_isValid = false;

    m_venue_isSet = false;
    m_venue_isValid = false;
}

void OAIExternalReplyInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIExternalReplyInfo::fromJsonObject(QJsonObject json) {

    m_origin_isValid = ::tele_rest::fromJsonValue(m_origin, json[QString("origin")]);
    m_origin_isSet = !json[QString("origin")].isNull() && m_origin_isValid;

    m_chat_isValid = ::tele_rest::fromJsonValue(m_chat, json[QString("chat")]);
    m_chat_isSet = !json[QString("chat")].isNull() && m_chat_isValid;

    m_message_id_isValid = ::tele_rest::fromJsonValue(m_message_id, json[QString("message_id")]);
    m_message_id_isSet = !json[QString("message_id")].isNull() && m_message_id_isValid;

    m_link_preview_options_isValid = ::tele_rest::fromJsonValue(m_link_preview_options, json[QString("link_preview_options")]);
    m_link_preview_options_isSet = !json[QString("link_preview_options")].isNull() && m_link_preview_options_isValid;

    m_animation_isValid = ::tele_rest::fromJsonValue(m_animation, json[QString("animation")]);
    m_animation_isSet = !json[QString("animation")].isNull() && m_animation_isValid;

    m_audio_isValid = ::tele_rest::fromJsonValue(m_audio, json[QString("audio")]);
    m_audio_isSet = !json[QString("audio")].isNull() && m_audio_isValid;

    m_document_isValid = ::tele_rest::fromJsonValue(m_document, json[QString("document")]);
    m_document_isSet = !json[QString("document")].isNull() && m_document_isValid;

    m_paid_media_isValid = ::tele_rest::fromJsonValue(m_paid_media, json[QString("paid_media")]);
    m_paid_media_isSet = !json[QString("paid_media")].isNull() && m_paid_media_isValid;

    m_photo_isValid = ::tele_rest::fromJsonValue(m_photo, json[QString("photo")]);
    m_photo_isSet = !json[QString("photo")].isNull() && m_photo_isValid;

    m_sticker_isValid = ::tele_rest::fromJsonValue(m_sticker, json[QString("sticker")]);
    m_sticker_isSet = !json[QString("sticker")].isNull() && m_sticker_isValid;

    m_story_isValid = ::tele_rest::fromJsonValue(m_story, json[QString("story")]);
    m_story_isSet = !json[QString("story")].isNull() && m_story_isValid;

    m_video_isValid = ::tele_rest::fromJsonValue(m_video, json[QString("video")]);
    m_video_isSet = !json[QString("video")].isNull() && m_video_isValid;

    m_video_note_isValid = ::tele_rest::fromJsonValue(m_video_note, json[QString("video_note")]);
    m_video_note_isSet = !json[QString("video_note")].isNull() && m_video_note_isValid;

    m_voice_isValid = ::tele_rest::fromJsonValue(m_voice, json[QString("voice")]);
    m_voice_isSet = !json[QString("voice")].isNull() && m_voice_isValid;

    m_has_media_spoiler_isValid = ::tele_rest::fromJsonValue(m_has_media_spoiler, json[QString("has_media_spoiler")]);
    m_has_media_spoiler_isSet = !json[QString("has_media_spoiler")].isNull() && m_has_media_spoiler_isValid;

    m_contact_isValid = ::tele_rest::fromJsonValue(m_contact, json[QString("contact")]);
    m_contact_isSet = !json[QString("contact")].isNull() && m_contact_isValid;

    m_dice_isValid = ::tele_rest::fromJsonValue(m_dice, json[QString("dice")]);
    m_dice_isSet = !json[QString("dice")].isNull() && m_dice_isValid;

    m_game_isValid = ::tele_rest::fromJsonValue(m_game, json[QString("game")]);
    m_game_isSet = !json[QString("game")].isNull() && m_game_isValid;

    m_giveaway_isValid = ::tele_rest::fromJsonValue(m_giveaway, json[QString("giveaway")]);
    m_giveaway_isSet = !json[QString("giveaway")].isNull() && m_giveaway_isValid;

    m_giveaway_winners_isValid = ::tele_rest::fromJsonValue(m_giveaway_winners, json[QString("giveaway_winners")]);
    m_giveaway_winners_isSet = !json[QString("giveaway_winners")].isNull() && m_giveaway_winners_isValid;

    m_invoice_isValid = ::tele_rest::fromJsonValue(m_invoice, json[QString("invoice")]);
    m_invoice_isSet = !json[QString("invoice")].isNull() && m_invoice_isValid;

    m_location_isValid = ::tele_rest::fromJsonValue(m_location, json[QString("location")]);
    m_location_isSet = !json[QString("location")].isNull() && m_location_isValid;

    m_poll_isValid = ::tele_rest::fromJsonValue(m_poll, json[QString("poll")]);
    m_poll_isSet = !json[QString("poll")].isNull() && m_poll_isValid;

    m_venue_isValid = ::tele_rest::fromJsonValue(m_venue, json[QString("venue")]);
    m_venue_isSet = !json[QString("venue")].isNull() && m_venue_isValid;
}

QString OAIExternalReplyInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIExternalReplyInfo::asJsonObject() const {
    QJsonObject obj;
    if (m_origin.isSet()) {
        obj.insert(QString("origin"), ::tele_rest::toJsonValue(m_origin));
    }
    if (m_chat.isSet()) {
        obj.insert(QString("chat"), ::tele_rest::toJsonValue(m_chat));
    }
    if (m_message_id_isSet) {
        obj.insert(QString("message_id"), ::tele_rest::toJsonValue(m_message_id));
    }
    if (m_link_preview_options.isSet()) {
        obj.insert(QString("link_preview_options"), ::tele_rest::toJsonValue(m_link_preview_options));
    }
    if (m_animation.isSet()) {
        obj.insert(QString("animation"), ::tele_rest::toJsonValue(m_animation));
    }
    if (m_audio.isSet()) {
        obj.insert(QString("audio"), ::tele_rest::toJsonValue(m_audio));
    }
    if (m_document.isSet()) {
        obj.insert(QString("document"), ::tele_rest::toJsonValue(m_document));
    }
    if (m_paid_media.isSet()) {
        obj.insert(QString("paid_media"), ::tele_rest::toJsonValue(m_paid_media));
    }
    if (m_photo.size() > 0) {
        obj.insert(QString("photo"), ::tele_rest::toJsonValue(m_photo));
    }
    if (m_sticker.isSet()) {
        obj.insert(QString("sticker"), ::tele_rest::toJsonValue(m_sticker));
    }
    if (m_story.isSet()) {
        obj.insert(QString("story"), ::tele_rest::toJsonValue(m_story));
    }
    if (m_video.isSet()) {
        obj.insert(QString("video"), ::tele_rest::toJsonValue(m_video));
    }
    if (m_video_note.isSet()) {
        obj.insert(QString("video_note"), ::tele_rest::toJsonValue(m_video_note));
    }
    if (m_voice.isSet()) {
        obj.insert(QString("voice"), ::tele_rest::toJsonValue(m_voice));
    }
    if (m_has_media_spoiler_isSet) {
        obj.insert(QString("has_media_spoiler"), ::tele_rest::toJsonValue(m_has_media_spoiler));
    }
    if (m_contact.isSet()) {
        obj.insert(QString("contact"), ::tele_rest::toJsonValue(m_contact));
    }
    if (m_dice.isSet()) {
        obj.insert(QString("dice"), ::tele_rest::toJsonValue(m_dice));
    }
    if (m_game.isSet()) {
        obj.insert(QString("game"), ::tele_rest::toJsonValue(m_game));
    }
    if (m_giveaway.isSet()) {
        obj.insert(QString("giveaway"), ::tele_rest::toJsonValue(m_giveaway));
    }
    if (m_giveaway_winners.isSet()) {
        obj.insert(QString("giveaway_winners"), ::tele_rest::toJsonValue(m_giveaway_winners));
    }
    if (m_invoice.isSet()) {
        obj.insert(QString("invoice"), ::tele_rest::toJsonValue(m_invoice));
    }
    if (m_location.isSet()) {
        obj.insert(QString("location"), ::tele_rest::toJsonValue(m_location));
    }
    if (m_poll.isSet()) {
        obj.insert(QString("poll"), ::tele_rest::toJsonValue(m_poll));
    }
    if (m_venue.isSet()) {
        obj.insert(QString("venue"), ::tele_rest::toJsonValue(m_venue));
    }
    return obj;
}

OAIMessageOrigin OAIExternalReplyInfo::getOrigin() const {
    return m_origin;
}
void OAIExternalReplyInfo::setOrigin(const OAIMessageOrigin &origin) {
    m_origin = origin;
    m_origin_isSet = true;
}

bool OAIExternalReplyInfo::is_origin_Set() const{
    return m_origin_isSet;
}

bool OAIExternalReplyInfo::is_origin_Valid() const{
    return m_origin_isValid;
}

OAIChat OAIExternalReplyInfo::getChat() const {
    return m_chat;
}
void OAIExternalReplyInfo::setChat(const OAIChat &chat) {
    m_chat = chat;
    m_chat_isSet = true;
}

bool OAIExternalReplyInfo::is_chat_Set() const{
    return m_chat_isSet;
}

bool OAIExternalReplyInfo::is_chat_Valid() const{
    return m_chat_isValid;
}

qint32 OAIExternalReplyInfo::getMessageId() const {
    return m_message_id;
}
void OAIExternalReplyInfo::setMessageId(const qint32 &message_id) {
    m_message_id = message_id;
    m_message_id_isSet = true;
}

bool OAIExternalReplyInfo::is_message_id_Set() const{
    return m_message_id_isSet;
}

bool OAIExternalReplyInfo::is_message_id_Valid() const{
    return m_message_id_isValid;
}

OAILinkPreviewOptions OAIExternalReplyInfo::getLinkPreviewOptions() const {
    return m_link_preview_options;
}
void OAIExternalReplyInfo::setLinkPreviewOptions(const OAILinkPreviewOptions &link_preview_options) {
    m_link_preview_options = link_preview_options;
    m_link_preview_options_isSet = true;
}

bool OAIExternalReplyInfo::is_link_preview_options_Set() const{
    return m_link_preview_options_isSet;
}

bool OAIExternalReplyInfo::is_link_preview_options_Valid() const{
    return m_link_preview_options_isValid;
}

OAIAnimation OAIExternalReplyInfo::getAnimation() const {
    return m_animation;
}
void OAIExternalReplyInfo::setAnimation(const OAIAnimation &animation) {
    m_animation = animation;
    m_animation_isSet = true;
}

bool OAIExternalReplyInfo::is_animation_Set() const{
    return m_animation_isSet;
}

bool OAIExternalReplyInfo::is_animation_Valid() const{
    return m_animation_isValid;
}

OAIAudio OAIExternalReplyInfo::getAudio() const {
    return m_audio;
}
void OAIExternalReplyInfo::setAudio(const OAIAudio &audio) {
    m_audio = audio;
    m_audio_isSet = true;
}

bool OAIExternalReplyInfo::is_audio_Set() const{
    return m_audio_isSet;
}

bool OAIExternalReplyInfo::is_audio_Valid() const{
    return m_audio_isValid;
}

OAIDocument OAIExternalReplyInfo::getDocument() const {
    return m_document;
}
void OAIExternalReplyInfo::setDocument(const OAIDocument &document) {
    m_document = document;
    m_document_isSet = true;
}

bool OAIExternalReplyInfo::is_document_Set() const{
    return m_document_isSet;
}

bool OAIExternalReplyInfo::is_document_Valid() const{
    return m_document_isValid;
}

OAIPaidMediaInfo OAIExternalReplyInfo::getPaidMedia() const {
    return m_paid_media;
}
void OAIExternalReplyInfo::setPaidMedia(const OAIPaidMediaInfo &paid_media) {
    m_paid_media = paid_media;
    m_paid_media_isSet = true;
}

bool OAIExternalReplyInfo::is_paid_media_Set() const{
    return m_paid_media_isSet;
}

bool OAIExternalReplyInfo::is_paid_media_Valid() const{
    return m_paid_media_isValid;
}

QList<OAIPhotoSize> OAIExternalReplyInfo::getPhoto() const {
    return m_photo;
}
void OAIExternalReplyInfo::setPhoto(const QList<OAIPhotoSize> &photo) {
    m_photo = photo;
    m_photo_isSet = true;
}

bool OAIExternalReplyInfo::is_photo_Set() const{
    return m_photo_isSet;
}

bool OAIExternalReplyInfo::is_photo_Valid() const{
    return m_photo_isValid;
}

OAISticker OAIExternalReplyInfo::getSticker() const {
    return m_sticker;
}
void OAIExternalReplyInfo::setSticker(const OAISticker &sticker) {
    m_sticker = sticker;
    m_sticker_isSet = true;
}

bool OAIExternalReplyInfo::is_sticker_Set() const{
    return m_sticker_isSet;
}

bool OAIExternalReplyInfo::is_sticker_Valid() const{
    return m_sticker_isValid;
}

OAIStory OAIExternalReplyInfo::getStory() const {
    return m_story;
}
void OAIExternalReplyInfo::setStory(const OAIStory &story) {
    m_story = story;
    m_story_isSet = true;
}

bool OAIExternalReplyInfo::is_story_Set() const{
    return m_story_isSet;
}

bool OAIExternalReplyInfo::is_story_Valid() const{
    return m_story_isValid;
}

OAIVideo OAIExternalReplyInfo::getVideo() const {
    return m_video;
}
void OAIExternalReplyInfo::setVideo(const OAIVideo &video) {
    m_video = video;
    m_video_isSet = true;
}

bool OAIExternalReplyInfo::is_video_Set() const{
    return m_video_isSet;
}

bool OAIExternalReplyInfo::is_video_Valid() const{
    return m_video_isValid;
}

OAIVideoNote OAIExternalReplyInfo::getVideoNote() const {
    return m_video_note;
}
void OAIExternalReplyInfo::setVideoNote(const OAIVideoNote &video_note) {
    m_video_note = video_note;
    m_video_note_isSet = true;
}

bool OAIExternalReplyInfo::is_video_note_Set() const{
    return m_video_note_isSet;
}

bool OAIExternalReplyInfo::is_video_note_Valid() const{
    return m_video_note_isValid;
}

OAIVoice OAIExternalReplyInfo::getVoice() const {
    return m_voice;
}
void OAIExternalReplyInfo::setVoice(const OAIVoice &voice) {
    m_voice = voice;
    m_voice_isSet = true;
}

bool OAIExternalReplyInfo::is_voice_Set() const{
    return m_voice_isSet;
}

bool OAIExternalReplyInfo::is_voice_Valid() const{
    return m_voice_isValid;
}

bool OAIExternalReplyInfo::isHasMediaSpoiler() const {
    return m_has_media_spoiler;
}
void OAIExternalReplyInfo::setHasMediaSpoiler(const bool &has_media_spoiler) {
    m_has_media_spoiler = has_media_spoiler;
    m_has_media_spoiler_isSet = true;
}

bool OAIExternalReplyInfo::is_has_media_spoiler_Set() const{
    return m_has_media_spoiler_isSet;
}

bool OAIExternalReplyInfo::is_has_media_spoiler_Valid() const{
    return m_has_media_spoiler_isValid;
}

OAIContact OAIExternalReplyInfo::getContact() const {
    return m_contact;
}
void OAIExternalReplyInfo::setContact(const OAIContact &contact) {
    m_contact = contact;
    m_contact_isSet = true;
}

bool OAIExternalReplyInfo::is_contact_Set() const{
    return m_contact_isSet;
}

bool OAIExternalReplyInfo::is_contact_Valid() const{
    return m_contact_isValid;
}

OAIDice OAIExternalReplyInfo::getDice() const {
    return m_dice;
}
void OAIExternalReplyInfo::setDice(const OAIDice &dice) {
    m_dice = dice;
    m_dice_isSet = true;
}

bool OAIExternalReplyInfo::is_dice_Set() const{
    return m_dice_isSet;
}

bool OAIExternalReplyInfo::is_dice_Valid() const{
    return m_dice_isValid;
}

OAIGame OAIExternalReplyInfo::getGame() const {
    return m_game;
}
void OAIExternalReplyInfo::setGame(const OAIGame &game) {
    m_game = game;
    m_game_isSet = true;
}

bool OAIExternalReplyInfo::is_game_Set() const{
    return m_game_isSet;
}

bool OAIExternalReplyInfo::is_game_Valid() const{
    return m_game_isValid;
}

OAIGiveaway OAIExternalReplyInfo::getGiveaway() const {
    return m_giveaway;
}
void OAIExternalReplyInfo::setGiveaway(const OAIGiveaway &giveaway) {
    m_giveaway = giveaway;
    m_giveaway_isSet = true;
}

bool OAIExternalReplyInfo::is_giveaway_Set() const{
    return m_giveaway_isSet;
}

bool OAIExternalReplyInfo::is_giveaway_Valid() const{
    return m_giveaway_isValid;
}

OAIGiveawayWinners OAIExternalReplyInfo::getGiveawayWinners() const {
    return m_giveaway_winners;
}
void OAIExternalReplyInfo::setGiveawayWinners(const OAIGiveawayWinners &giveaway_winners) {
    m_giveaway_winners = giveaway_winners;
    m_giveaway_winners_isSet = true;
}

bool OAIExternalReplyInfo::is_giveaway_winners_Set() const{
    return m_giveaway_winners_isSet;
}

bool OAIExternalReplyInfo::is_giveaway_winners_Valid() const{
    return m_giveaway_winners_isValid;
}

OAIInvoice OAIExternalReplyInfo::getInvoice() const {
    return m_invoice;
}
void OAIExternalReplyInfo::setInvoice(const OAIInvoice &invoice) {
    m_invoice = invoice;
    m_invoice_isSet = true;
}

bool OAIExternalReplyInfo::is_invoice_Set() const{
    return m_invoice_isSet;
}

bool OAIExternalReplyInfo::is_invoice_Valid() const{
    return m_invoice_isValid;
}

OAILocation OAIExternalReplyInfo::getLocation() const {
    return m_location;
}
void OAIExternalReplyInfo::setLocation(const OAILocation &location) {
    m_location = location;
    m_location_isSet = true;
}

bool OAIExternalReplyInfo::is_location_Set() const{
    return m_location_isSet;
}

bool OAIExternalReplyInfo::is_location_Valid() const{
    return m_location_isValid;
}

OAIPoll OAIExternalReplyInfo::getPoll() const {
    return m_poll;
}
void OAIExternalReplyInfo::setPoll(const OAIPoll &poll) {
    m_poll = poll;
    m_poll_isSet = true;
}

bool OAIExternalReplyInfo::is_poll_Set() const{
    return m_poll_isSet;
}

bool OAIExternalReplyInfo::is_poll_Valid() const{
    return m_poll_isValid;
}

OAIVenue OAIExternalReplyInfo::getVenue() const {
    return m_venue;
}
void OAIExternalReplyInfo::setVenue(const OAIVenue &venue) {
    m_venue = venue;
    m_venue_isSet = true;
}

bool OAIExternalReplyInfo::is_venue_Set() const{
    return m_venue_isSet;
}

bool OAIExternalReplyInfo::is_venue_Valid() const{
    return m_venue_isValid;
}

bool OAIExternalReplyInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_origin.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_link_preview_options.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_animation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_audio.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_document.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_paid_media.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_sticker.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_story.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_video.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_note.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_voice.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_media_spoiler_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_contact.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_dice.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_game.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_giveaway.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_giveaway_winners.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_invoice.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_location.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_poll.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_venue.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIExternalReplyInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_origin_isValid && true;
}

} // namespace tele_rest
