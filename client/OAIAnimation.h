/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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
 * OAIAnimation.h
 *
 * This object represents an animation file (GIF or H.264/MPEG-4 AVC video without sound).
 */

#ifndef OAIAnimation_H
#define OAIAnimation_H

#include <QJsonObject>

#include "OAIPhotoSize.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIPhotoSize;

class OAIAnimation : public OAIObject {
public:
    OAIAnimation();
    OAIAnimation(QString json);
    ~OAIAnimation() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getFileId() const;
    void setFileId(const QString &file_id);
    bool is_file_id_Set() const;
    bool is_file_id_Valid() const;

    QString getFileUniqueId() const;
    void setFileUniqueId(const QString &file_unique_id);
    bool is_file_unique_id_Set() const;
    bool is_file_unique_id_Valid() const;

    qint32 getWidth() const;
    void setWidth(const qint32 &width);
    bool is_width_Set() const;
    bool is_width_Valid() const;

    qint32 getHeight() const;
    void setHeight(const qint32 &height);
    bool is_height_Set() const;
    bool is_height_Valid() const;

    qint32 getDuration() const;
    void setDuration(const qint32 &duration);
    bool is_duration_Set() const;
    bool is_duration_Valid() const;

    OAIPhotoSize getThumbnail() const;
    void setThumbnail(const OAIPhotoSize &thumbnail);
    bool is_thumbnail_Set() const;
    bool is_thumbnail_Valid() const;

    QString getFileName() const;
    void setFileName(const QString &file_name);
    bool is_file_name_Set() const;
    bool is_file_name_Valid() const;

    QString getMimeType() const;
    void setMimeType(const QString &mime_type);
    bool is_mime_type_Set() const;
    bool is_mime_type_Valid() const;

    qint32 getFileSize() const;
    void setFileSize(const qint32 &file_size);
    bool is_file_size_Set() const;
    bool is_file_size_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_file_id;
    bool m_file_id_isSet;
    bool m_file_id_isValid;

    QString m_file_unique_id;
    bool m_file_unique_id_isSet;
    bool m_file_unique_id_isValid;

    qint32 m_width;
    bool m_width_isSet;
    bool m_width_isValid;

    qint32 m_height;
    bool m_height_isSet;
    bool m_height_isValid;

    qint32 m_duration;
    bool m_duration_isSet;
    bool m_duration_isValid;

    OAIPhotoSize m_thumbnail;
    bool m_thumbnail_isSet;
    bool m_thumbnail_isValid;

    QString m_file_name;
    bool m_file_name_isSet;
    bool m_file_name_isValid;

    QString m_mime_type;
    bool m_mime_type_isSet;
    bool m_mime_type_isValid;

    qint32 m_file_size;
    bool m_file_size_isSet;
    bool m_file_size_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIAnimation)

#endif // OAIAnimation_H
