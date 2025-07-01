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

#include "OAIGame.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIGame::OAIGame(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGame::OAIGame() {
    this->initializeModel();
}

OAIGame::~OAIGame() {}

void OAIGame::initializeModel() {

    m_title_isSet = false;
    m_title_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_photo_isSet = false;
    m_photo_isValid = false;

    m_text_isSet = false;
    m_text_isValid = false;

    m_text_entities_isSet = false;
    m_text_entities_isValid = false;

    m_animation_isSet = false;
    m_animation_isValid = false;
}

void OAIGame::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGame::fromJsonObject(QJsonObject json) {

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_description_isValid = ::tele_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_photo_isValid = ::tele_rest::fromJsonValue(m_photo, json[QString("photo")]);
    m_photo_isSet = !json[QString("photo")].isNull() && m_photo_isValid;

    m_text_isValid = ::tele_rest::fromJsonValue(m_text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_text_entities_isValid = ::tele_rest::fromJsonValue(m_text_entities, json[QString("text_entities")]);
    m_text_entities_isSet = !json[QString("text_entities")].isNull() && m_text_entities_isValid;

    m_animation_isValid = ::tele_rest::fromJsonValue(m_animation, json[QString("animation")]);
    m_animation_isSet = !json[QString("animation")].isNull() && m_animation_isValid;
}

QString OAIGame::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGame::asJsonObject() const {
    QJsonObject obj;
    if (m_title_isSet) {
        obj.insert(QString("title"), ::tele_rest::toJsonValue(m_title));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::tele_rest::toJsonValue(m_description));
    }
    if (m_photo.size() > 0) {
        obj.insert(QString("photo"), ::tele_rest::toJsonValue(m_photo));
    }
    if (m_text_isSet) {
        obj.insert(QString("text"), ::tele_rest::toJsonValue(m_text));
    }
    if (m_text_entities.size() > 0) {
        obj.insert(QString("text_entities"), ::tele_rest::toJsonValue(m_text_entities));
    }
    if (m_animation.isSet()) {
        obj.insert(QString("animation"), ::tele_rest::toJsonValue(m_animation));
    }
    return obj;
}

QString OAIGame::getTitle() const {
    return m_title;
}
void OAIGame::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIGame::is_title_Set() const{
    return m_title_isSet;
}

bool OAIGame::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIGame::getDescription() const {
    return m_description;
}
void OAIGame::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIGame::is_description_Set() const{
    return m_description_isSet;
}

bool OAIGame::is_description_Valid() const{
    return m_description_isValid;
}

QList<OAIPhotoSize> OAIGame::getPhoto() const {
    return m_photo;
}
void OAIGame::setPhoto(const QList<OAIPhotoSize> &photo) {
    m_photo = photo;
    m_photo_isSet = true;
}

bool OAIGame::is_photo_Set() const{
    return m_photo_isSet;
}

bool OAIGame::is_photo_Valid() const{
    return m_photo_isValid;
}

QString OAIGame::getText() const {
    return m_text;
}
void OAIGame::setText(const QString &text) {
    m_text = text;
    m_text_isSet = true;
}

bool OAIGame::is_text_Set() const{
    return m_text_isSet;
}

bool OAIGame::is_text_Valid() const{
    return m_text_isValid;
}

QList<OAIMessageEntity> OAIGame::getTextEntities() const {
    return m_text_entities;
}
void OAIGame::setTextEntities(const QList<OAIMessageEntity> &text_entities) {
    m_text_entities = text_entities;
    m_text_entities_isSet = true;
}

bool OAIGame::is_text_entities_Set() const{
    return m_text_entities_isSet;
}

bool OAIGame::is_text_entities_Valid() const{
    return m_text_entities_isValid;
}

OAIAnimation OAIGame::getAnimation() const {
    return m_animation;
}
void OAIGame::setAnimation(const OAIAnimation &animation) {
    m_animation = animation;
    m_animation_isSet = true;
}

bool OAIGame::is_animation_Set() const{
    return m_animation_isSet;
}

bool OAIGame::is_animation_Valid() const{
    return m_animation_isValid;
}

bool OAIGame::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_animation.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGame::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_title_isValid && m_description_isValid && m_photo_isValid && true;
}

} // namespace tele_rest
