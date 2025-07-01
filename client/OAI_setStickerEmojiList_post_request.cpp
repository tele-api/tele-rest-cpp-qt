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

#include "OAI_setStickerEmojiList_post_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAI_setStickerEmojiList_post_request::OAI_setStickerEmojiList_post_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAI_setStickerEmojiList_post_request::OAI_setStickerEmojiList_post_request() {
    this->initializeModel();
}

OAI_setStickerEmojiList_post_request::~OAI_setStickerEmojiList_post_request() {}

void OAI_setStickerEmojiList_post_request::initializeModel() {

    m_sticker_isSet = false;
    m_sticker_isValid = false;

    m_emoji_list_isSet = false;
    m_emoji_list_isValid = false;
}

void OAI_setStickerEmojiList_post_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAI_setStickerEmojiList_post_request::fromJsonObject(QJsonObject json) {

    m_sticker_isValid = ::tele_rest::fromJsonValue(m_sticker, json[QString("sticker")]);
    m_sticker_isSet = !json[QString("sticker")].isNull() && m_sticker_isValid;

    m_emoji_list_isValid = ::tele_rest::fromJsonValue(m_emoji_list, json[QString("emoji_list")]);
    m_emoji_list_isSet = !json[QString("emoji_list")].isNull() && m_emoji_list_isValid;
}

QString OAI_setStickerEmojiList_post_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAI_setStickerEmojiList_post_request::asJsonObject() const {
    QJsonObject obj;
    if (m_sticker_isSet) {
        obj.insert(QString("sticker"), ::tele_rest::toJsonValue(m_sticker));
    }
    if (m_emoji_list.size() > 0) {
        obj.insert(QString("emoji_list"), ::tele_rest::toJsonValue(m_emoji_list));
    }
    return obj;
}

QString OAI_setStickerEmojiList_post_request::getSticker() const {
    return m_sticker;
}
void OAI_setStickerEmojiList_post_request::setSticker(const QString &sticker) {
    m_sticker = sticker;
    m_sticker_isSet = true;
}

bool OAI_setStickerEmojiList_post_request::is_sticker_Set() const{
    return m_sticker_isSet;
}

bool OAI_setStickerEmojiList_post_request::is_sticker_Valid() const{
    return m_sticker_isValid;
}

QList<QString> OAI_setStickerEmojiList_post_request::getEmojiList() const {
    return m_emoji_list;
}
void OAI_setStickerEmojiList_post_request::setEmojiList(const QList<QString> &emoji_list) {
    m_emoji_list = emoji_list;
    m_emoji_list_isSet = true;
}

bool OAI_setStickerEmojiList_post_request::is_emoji_list_Set() const{
    return m_emoji_list_isSet;
}

bool OAI_setStickerEmojiList_post_request::is_emoji_list_Valid() const{
    return m_emoji_list_isValid;
}

bool OAI_setStickerEmojiList_post_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_sticker_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAI_setStickerEmojiList_post_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_sticker_isValid && m_emoji_list_isValid && true;
}

} // namespace tele_rest
